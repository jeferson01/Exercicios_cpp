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

	char ch;
	int vogais = 0;
	int numeros = 0;

	for (int i = 0; !fin.eof(); i++)
	{
		fin >> ch;
		if (!fin.eof()) { // nao exibir ultimo caractere 2x
			if (isdigit(ch))
				numeros++;

			else if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
				vogais++;
		}
	}

	fin.close();
	cout << "vogais : " << vogais << endl;
	cout << "numeros : " << numeros << endl;
	return 0;
}
