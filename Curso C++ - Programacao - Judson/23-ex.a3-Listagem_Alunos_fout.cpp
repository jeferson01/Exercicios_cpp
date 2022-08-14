// **funciona com varios cout's por linha. =)
#include <iostream>
#include <fstream>
#include <cctype>
#include <cstring>
#include <stdlib.h>
using namespace std;

struct Aluno
{
	char nome[50];
	char turno;
	int serie;
};
int main()
{
	ifstream fin;
	fin.open("listagem.txt");
	ofstream fout;
	fout.open("listagem_m.txt");

	if (!fin.is_open())
	{	cout << "Abertura do arquivo listagem.txt falhou!" << endl;
		cout << "Programa encerrando.\n";
		exit(EXIT_FAILURE); }
	if (!fout.is_open())
	{	cout << "Abertura do arquivo listagem_m.txt falhou!" << endl;
		cout << "Programa encerrando.\n";
		exit(EXIT_FAILURE); }
	
	//Aluno jef = { "Jefferson Silva", 'M', 7 };
	//cout << jef.nome << " " << jef.turno << jef.serie << endl;

	char linha[100] = {};
	int numLinhas;
	for (numLinhas = 0; !fin.eof(); numLinhas++) { // contar quantas linhas tem
		fin.getline(linha, 100);
		cout << linha << endl;
	}

	Aluno* vet = new Aluno[numLinhas]; // vetor dinamico de alunos
	char palavra[30] = {};
	char ch[30];

	fin.close();
	fin.open("listagem.txt");
	cout << endl << "vetor alunos:\n";

	for (int i = 0; i < numLinhas; i++)
	{
		fin >> palavra;
		fin >> ch;
		strcat_s(palavra, " ");
		strcat_s(palavra, ch);
		fin >> ch;

		strcpy_s(vet[i].nome, palavra);
		vet[i].turno = ch[0];

		vet[i].serie = ch[1] - '0'; // 
		cout << vet[i].nome << " " << vet[i].turno << vet[i].serie << endl;
	}

	cout << "i = " << numLinhas << endl;

	for (int j = 0; j < 3; j++)
	{
		// 6�serie = 0, 7�serie = 1, 8�serie = 2
		cout << "\nMatutino " << j + 6 << "a S�rie" << endl << "-------------------" << endl;

		if (j > 0) fout << endl; // nao pular linha na primeira
		fout << "Matutino " << j + 6 << "a S�rie" << endl << "-------------------" << endl;
			
		for (int i = 0; i < numLinhas; i++)
		{
			if (vet[i].turno == 'M' && vet[i].serie == j + 6) {
				cout << vet[i].nome << "\t" << vet[i].turno << vet[i].serie << endl;
				fout.width(15);
				fout << left <<vet[i].nome << "\t" << vet[i].turno << vet[i].serie << endl;
			}
		}
	}

	for (int j = 0; j < 3; j++)
	{
		cout << "\nVespertino " << j + 6 << "a S�rie" << endl << "-------------------" << endl;
		fout << "\nVespertino " << j + 6 << "a S�rie" << endl << "-------------------" << endl;
		for (int i = 0; i < numLinhas; i++)
		{
			if (vet[i].turno == 'T' && vet[i].serie == j + 6) {
				cout << vet[i].nome << "\t" << vet[i].turno << vet[i].serie << endl;
				fout.width(15);
				fout << left << vet[i].nome << "\t" << vet[i].turno << vet[i].serie << endl;
			}
		}
	}

	fin.close();
	fout.close();

	return 0;
}
/*
Matutino 6a S�rie
-----------------
Eudes Salvado M6
Marcela Arantes M6
Matutino 7a S�rie
-----------------
Geovana Castro M7
�scar Neiva M7
Matutino 8a S�rie
-----------------
Anita Torcato M8
Am�lia Reino M8
Vespertino 6a S�rie
-------------------
B�rbara Borja T6
Cl�udio Reine T6
Vespertino 7a S�rie
-------------------
Estevam Prado T7
Pedro Vieira T7
Vespertino 8a S�rie
-------------------
V�nia Horta T8
F�bia Candeias T8*/