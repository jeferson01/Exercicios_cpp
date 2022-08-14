#include <iostream>
#include <fstream>
#include <cctype>
#include <windows.h>
using namespace std;

int main()
{
	char palavra[32];
	cout << "Digite a palavra (em minusculo) para procurar no arquivo: ";
	cin >> palavra;

	ifstream fin;
	fin.open("teste_texto.cpp");

	if (!fin.is_open())
	{
		cout << "Abertura do arquivo sol.txt falhou!" << endl;
		cout << "Programa encerrando.\n";
		exit(EXIT_FAILURE);
	}
	
	char ch[50] = { 0 };
	
	// str compare=0 eh igual, sai do laço se for end of file ou a palavra igual.
	while (!fin.eof() && strcmp(palavra, ch)) 
	{
		
		fin >> ch;
		for (int i = 0; ch[i]; i++) // convert word to lowercase
			{ ch[i] = tolower(ch[i]); }
		cout << ch << endl;

		if (!strcmp(palavra, ch))
			cout << endl <<"A palavra \"" << palavra << "\" esta presente no texto!";
		else if(fin.eof())
			cout << endl << "A palavra \"" << palavra << "\" NAO esta presente no texto!";
	}

	fin.close();
	cout << endl << "fim" << endl;
	return 0;
}
/*
Nome do arquivo: texto.txt
Palavra: homens
A palavra "homens" está presente no texto.*/