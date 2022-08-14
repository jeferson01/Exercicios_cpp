// número do laboratório, a quantidade de exercícios de revisão, a quantidade de exercícios de fixação 
// e a quantidade de exercícios de aprendizagem.
#include <iostream>
#include <fstream>
#include <stdlib.h> // system messages
using namespace std;

void ExibirUnidade(ifstream& fin, const int unid, const int linhas = 10) {
	if (!fin.is_open()) {
		cout << "Error opening file"; 
		system("pause"); exit(EXIT_FAILURE);
	}
		
	fin.seekg(fstream::beg); // move p/ inicio
	char str[10];
	int exRev = 0, exFix = 0, exApr = 0, temp;
	

	for (int i = 0; i < 10 * (unid-1); i++) // consumir linhas ate a unidade escolhida
		fin.getline(str, 10);

	for (int i = 0; i < linhas; i++)
	{
		fin >> temp;
		fin >> temp;
		exRev += temp;
		fin >> temp;
		exFix += temp;
		fin >> temp;
		exApr += temp;
	}
	cout << "---------------------------\n";
	cout << unid << "a unidade" << endl;
	cout << "---------------------------\n";
	cout << "Revisao: " << exRev << endl;
	cout << "Fixacao: " << exFix << endl;
	cout << "Aprendi: " << exApr << endl;
	cout << "---------------------------\n";
	cout << "Total: " << exRev + exFix + exApr << endl << endl;

}


int main()
{
	ifstream fin;
	fin.open("Exercicios_unidade.txt", fstream::in);

	ExibirUnidade(fin, 1);
	ExibirUnidade(fin, 2);
	ExibirUnidade(fin, 3);

	ExibirUnidade(fin, 1, 30); // 30 linhas, todo arquivo.
	
	fin.close();
	return 0;
}

/*
 referência para um objeto do tipo ifstream, o número da unidade e a 
quantidade de linhas que devem ser lidas
argumento padrão igual a 10 para a quantidade de linhas.
*/