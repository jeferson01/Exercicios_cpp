// o arquivo soldados_bin.dat contem 1 bloco de "Soldado".
#include <iostream>
#include <fstream>
using namespace std;

struct Soldado {
	char nome[30];
	int eliminacoes, mortes;
	int partidas = 0;
	float taxaMedia;
	void TaxaKD() {
		taxaMedia = (float)eliminacoes / mortes;
	}
};
void ExibirMenu() {
	cout << "\n[N]ovo soldado(sobrescreve o anterior)"
		<< "\n[A]tualiza soldado(com os dados da última partida)"
		<< "\n[E]xibe soldado(atual)"
		<< "\n[S]air"
		<< "\n[ ]\b\b";
};

int main() {
	ifstream fin;
	ofstream fout;

	const char * arqNome = "soldados_bin.dat";
	Soldado soldadinho;

	fin.open(arqNome, ios_base::in | ios_base::binary);
	if (fin.is_open()) {
		fin.read((char*) &soldadinho, sizeof(Soldado));
		cout << arqNome << " lido com sucesso." << endl;
	}
	else {
		cout << arqNome << " nao encontrado, criar novo soldado:" << endl;
		cout << "Nome: ";
		cin >> soldadinho.nome;
		cout << "Eliminacoes e mortes: ";
		cin >> soldadinho.eliminacoes >> soldadinho.mortes;
		cout << "Numero de partidas jogadas: ";
		cin >> soldadinho.partidas;
		soldadinho.TaxaKD();
	}
	
	fin.close();

	ExibirMenu();
	char escolha;
	cin.get(escolha);
	while (escolha != 'S' && 's')
	{
		switch (escolha)
		{
		case 'N':
			cout << "Nome: ";
			cin >> soldadinho.nome;
			cout << "Eliminacoes e mortes: ";
			cin >> soldadinho.eliminacoes >> soldadinho.mortes;
			cout << "Numero de partidas jogadas: ";
			cin >> soldadinho.partidas;
			soldadinho.TaxaKD();
			break;

		case 'A': // atualizar
			cout << "Digite as eliminacoes e mortes da ultima partida: ";
			int temp1, temp2;
			cin >> temp1 >> temp2;
			soldadinho.eliminacoes += temp1; 
			soldadinho.mortes += temp2;
			soldadinho.TaxaKD();
			soldadinho.partidas++;
			break;

		case 'E': // exibir
			cout << "\nNome: " << soldadinho.nome;
			cout << "\nEliminacoes e mortes: " << soldadinho.eliminacoes << "/" << soldadinho.mortes;
			cout << "\nNumero de partidas jogadas: " << soldadinho.partidas;
			cout << fixed; cout.precision(2); // exibir apenas 2 casas float
			cout << "\nMedia K/D: " << soldadinho.taxaMedia << endl;
			break;

		default: break;
		}

		ExibirMenu();
		cin.ignore();
		cin.get(escolha);
	}
	
	fout.open(arqNome, ios_base::out | ios_base::trunc | ios_base::binary);
	fout.write((char*) &soldadinho, sizeof(Soldado)); 	//gravar no arquivo.
	cout << "*Progresso salvo.*" << endl;
	fout.close();

	return 0;
}
/*
Crie um registro Soldado com os campos nome, eliminações, mortes, 
taxa de eliminações por morte 
(eliminações/mortes) e número de partidas jogadas.
*/
