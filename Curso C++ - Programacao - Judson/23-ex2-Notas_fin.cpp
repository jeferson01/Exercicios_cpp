#include <iostream>
#include <fstream>
#include <cctype>
using namespace std;

int main()
{
	const int notaMinima = 6; // media tem que ser acima

	ifstream fin;
	fin.open("notas.txt");
	if (!fin.is_open())
	{
		cout << "Abertura do arquivo sol.txt falhou!" << endl;
		cout << "Programa encerrando.\n";
		exit(EXIT_FAILURE);
	}
	
	char nome[20];
	float nota;
	float media = 0;

	for (int i = 0; !fin.eof(); i++)
	{
		media = 0; // reset
		fin >> nome;
		for (int i = 0; i < 3; i++)
		{
			fin >> nota;
			media += nota;
		}
		cout.precision(2);
		media = media / 3;

		if (media >= notaMinima) cout << "media: " << media << "\t - " << nome << " aprovado!" << endl;
		else					 cout << "media: " << media << "\t - " << nome << " reprovado!" << endl;
		
	}
	
	fin.close();
	cout << "fim." << endl;
	return 0;
}
