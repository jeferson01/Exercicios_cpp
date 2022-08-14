//std::cout << std::setw(5) << std::setfill('0') << 1;
#include <iostream>
#include <Windows.h>
#include "concurso.h"
using namespace std;

int main()
{
	//apos a sopa
	char frase[30] = { "apos a sopa" };
	int espacos = 0;
	cout << "Digite a frase: "; cin.getline(frase, 50);

	char * newVet = new char[strlen(frase)] {0}; // com espaços da frase

	for (int i = 0; frase[i]; i++)
	{
		if (frase[i] != ' ') { newVet[i-espacos] = frase[i]; }
		else { espacos ++; } // add se for espaço
	}

	int tamanho = strlen(newVet);
	char *newVet2 = new char[tamanho+1] {}; // tamanho + o \0
	
	for (int i = 0; newVet[i]; i++)
		{ newVet2[(tamanho-1) -i] = newVet[i]; }
	
	if (strcmp(newVet, newVet2)) { cout << "Nao eh um Palindromo -> " << newVet2; }
	else{ cout << "Essa frase eh um Palindromo -> " << newVet2; }

	cout << endl;

	return 0;
}

