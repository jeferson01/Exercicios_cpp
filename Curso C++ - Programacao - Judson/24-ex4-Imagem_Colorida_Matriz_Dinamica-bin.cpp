// cria matriz dinamica e grava no arquivo binario, le em um vetor unico. [ i * colunas + j]
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

#define colDefault "\033[m"

int main()
{
	char mensagem[80];
	int texto, fundo;
	int linhas = 0, colunas = 0; // gravar no cabeçalho ************

	ifstream fin; 
	ofstream fout;

	cout<< "Imagens Coloridas\n------------------\n"
		<< "[A]rmazenar\n"
		<< "[E]xibir\n"
		<< "[S]air\n"
		<< "------------------\n";
	cout << "Opcao: [ ]\b\b";
	char escolha;
	cin >> escolha;

	while (escolha != 'S' &&  escolha != 's')
	{
		switch (escolha)
		{
		case 'A': // armazenar
		{
			fout.open("imagem_colorida.dat", ios_base::out | ios_base::trunc | ios_base::binary);

			cout << "Largura: ";
			cin >> colunas;
			cout << "Altura: ";
			cin >> linhas;

			cout << "Sua mensagem: ";
			cin.get(); // limpar \n do buffer
			cin.getline(mensagem, 80);

			int** vetMat = new int* [linhas]; // vetor de ponteiros, p/ outros ponteiros
			for (int i = 0; i < linhas; i++)
				vetMat[i] = new int[colunas];

			cout << "Defina 5 cores em cada linha:" << endl;
			for (int i = 0; i < linhas; i++)
			{
				cout << "#" << i + 1 << ": ";
				for (int j = 0; j < colunas; j++)
					cin >> vetMat[i][j];
			}
			fout.write((char*)&linhas, sizeof(int)); // cabeçalho linhas/colunas
			fout.write((char*)&colunas, sizeof(int)); //

			//fout.write((char*) **vetMat, sizeof(int) * linhas * colunas); // nao da pra escrever direto
			for (int i = 0; i < linhas; i++)
			{
				fout.write((char*) vetMat[i], sizeof(int) * colunas); //escrever linhas da mat**
			}

			fout.close();
			// deletar vetMat ?***
			for (int i = 0; i < linhas; i++)
				delete []vetMat[i];
			delete []vetMat;

			cout << "Imagem colorido foi armazenado." << sizeof(vetMat) << endl;
			break;
		}
		case 'E': // exibir
		{
			fin.open("imagem_colorida.dat", ios_base::in | ios_base::binary);

			if (fin.is_open()) {
				fin.read((char*)&linhas, sizeof(int));
				fin.read((char*)&colunas, sizeof(int));
				int tam = linhas * colunas;

				int *vetorCores = new int[tam] {}; // vetor dinamico unico

				// nao precisa declarar endereço &
				fin.read((char*) vetorCores, sizeof(int) * tam);

				string mensagemCol = "\033[38;5;000;48;5;";  // "\033[38;5;000;48;5;154m"
				
				for (int i = 0; i < linhas; i++)
				{
					for (int j = 0; j < colunas; j++)
					{
						// pegar valor na matriz e definir cor da mensagem
						mensagemCol += to_string(vetorCores[ (i*colunas) +j] ) + "m"; 
						cout << mensagemCol << "    ";
						mensagemCol = "\033[38;5;000;48;5;"; // reset
					}
					cout << endl;
				}
				cout << colDefault;

				delete []vetorCores;

				//cout << "Sua mensagem: " << mensagem << endl
				//	<< "Cor do texto: " << texto << endl
				//	<< "Cor do fundo: " << fundo << endl;
				//string mensagemCol = "\033[38;5;";  // "\033[38;5;000;48;5;154m"
				//mensagemCol += to_string(texto) + ";48;5;" + to_string(fundo) + "m";
				//cout << "Mensagem colorida: ";
				//cout << mensagemCol << mensagem << colDefault << endl; // exib mensagem colorida
			}
			else
				cout << "Arquivo nao foi aberto!";
			fin.close();
			break;
		}
		default:
			break;
		}
		cout << endl << "-----------" << endl << "Opcao: [ ]\b\b";
		cin >> escolha;
	}
	

	cout << "end.";
	return 0;
}

/*
Largura: 5 Altura : 5
Defina 5 cores em cada linha
#1: 220 220 220 220 220 
#2: 220 000 220 000 220
#3: 220 220 220 220 220
#4: 220 000 000 000 220
#5: 220 220 220 220 220
Imagem colorida foi armazenada.

// matriz dinamica de int : colunas x, linhas y
gravar no arquivo:
2 ints: col, linha
matriz, endereço inicial e tamanho total col*linhas*sizeof(int)

exibir cout,mensagem(espaços) loop aninhado de matriz, cor de fundo = valor
*/

