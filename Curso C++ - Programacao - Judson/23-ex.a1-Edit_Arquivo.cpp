#include <iostream>
#include <fstream>
#include <cctype>
using namespace std;

int main()
{
	ifstream fin;
	fin.open("teste_texto.cpp");
	ofstream fout;
	fout.open("teste_texto_m.cpp");

	if (!fin.is_open())
	{
		cout << "Abertura do arquivo teste_texto.cpp falhou!" << endl;
		cout << "Programa encerrando.\n";
		exit(EXIT_FAILURE);
	}

	if (!fout.is_open())
	{
		cout << "Abertura do arquivo teste_texto_m.cpp falhou!" << endl;
		cout << "Programa encerrando.\n";
		exit(EXIT_FAILURE);
	}
	
	fout << "// teste_m.cpp" << endl;
	fout << "#define print cout" << endl;

	char ch; // copiar todo o arquivo
	while (!fin.eof())
	{
		fin.get(ch);
		if(!fin.eof())
			fout << ch;
	}
	

	char linha[100];
	while (fin.getline(linha, 100)) // ex: #define print cout
	{

		if (!strcmp(palavra, "cout")) {
			strcpy_s(palavra, "print");
			fout << palavra;
		}
		fout << linha; // escrever toda a linha
	}

	fin.close();
	fout.close();
	cout << endl << "fim" << endl;
	return 0;
}
/*
// teste_m.cpp
#define print cout
Inserir no início do arquivo um comentário com o nome do arquivo // nomeDoArquivo.cpp
• Inserir no início do arquivo a instrução #define print cout
• Substituir as ocorrências de cout por print
*/