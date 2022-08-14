// o arquivo senha_bin.dat contem 1 boolean e 1 bloco de "Senha".
#include <iostream>
#include <fstream>
#include <cctype>
using namespace std;

union Senha {
	char alfanumerica[12];
	int numerica;
};

int main() {
	ifstream fin;
	ofstream fout;

	const char * arqNome = "senha_bin.dat";
	bool tipoSenha = 1; // alfanum = 0, numerico = 1;
	Senha senha;
	char novaSenha[7];
	
	cout << "Exibir a senha armazenada ou gravar uma nova senha no arquivo? \n";
	cout << "[E] = exibir, [G] = gravar : [ ]\b\b";
	char escolha;
	cin.get(escolha);
	switch (escolha)
	{
	case 'e':
	case 'E':
		fin.open(arqNome, ios_base::in | ios_base::binary);
		if (fin.is_open()) {
			fin.read((char*) &tipoSenha, sizeof(bool));
			fin.read((char*) &senha, sizeof(senha));
			fin.close();

			cout << arqNome << " lido com sucesso." << endl;
			//cout << boolalpha << tipoSenha;
			if (tipoSenha == 0)
				cout << "senha Alfanumerica: " << senha.alfanumerica << endl;
			else cout << "senha Numerica: " << senha.numerica << endl;
		}
		else {
			cout << "O Arquivo nao existe!" << endl;
		}

		break;

	case 'g':
	case 'G': // gravar
		cout << "Digite a senha (6 caracteres): ";
		cin >> novaSenha;
		for (int i = 0; i < strlen(novaSenha); i++)
			if (isalpha(novaSenha[i])) {
				tipoSenha = 0; // muda bool para 0, alfanumerico.
				cout << "letra " << novaSenha[i] << endl;
			}
		// convert char to int if bool == 1.
		tipoSenha == 0 ? strcpy_s(senha.alfanumerica, novaSenha) : senha.numerica = atoi(novaSenha);

		fout.open(arqNome, ios_base::out | ios_base::trunc | ios_base::binary);
		fout.write((char*) &tipoSenha, sizeof(bool)); 	//gravar no arquivo.
		fout.write((char*)&senha, sizeof(senha));
		cout << "*senha gravada.*" << endl;
		fout.close();
		break;

	default:
		break;
	}

	return 0;
}
/*
alfanumérico será correspondente ao número 1, >>> 0
e o modo simplesmente numérico será correspondente ao 2. >>> 1
*/
