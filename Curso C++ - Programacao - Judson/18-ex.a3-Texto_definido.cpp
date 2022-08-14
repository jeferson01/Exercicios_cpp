//std::cout << std::setw(5) << std::setfill('0') << 1;
#include <iostream>
#include <Windows.h>
#include "concurso.h"
using namespace std;



int main()
{
	cout << "Digite um texto: ";
	char texto[100];
	//cin.getline(texto, 100);
	//cout << texto << endl;
	//cout << strlen(texto);
	int pos = -1;

	while (pos <= 0)
	{
		cin.getline(texto, 100);

		for (int i = 0;  texto[i]; i++) // testa caractere e se nao for \0
		{
			if (texto[i] == '@') { pos = i; }
		}
	}
	cout << "\nPosic: " << pos << endl;
	cout.write(texto, pos) << endl;

	return 0;
}

