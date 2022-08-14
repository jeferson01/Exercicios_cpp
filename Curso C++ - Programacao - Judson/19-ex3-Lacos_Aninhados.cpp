//std::cout << std::setw(5) << std::setfill('0') << 1;
#include <iostream>
#include <cstring>
#include "concurso.h"
using namespace std;


int main()
{
	const int linhas = 5;
	char vet[linhas] = { ' ' };
	
	for (int i = 0; i < linhas; i++)
	{
		cout << "\t";
		for (int k = linhas-1; k > i; k--)
		{
			cout <<" "; // move para direita em espaços
		}

		for (int j = 0; j <= (i*2); j++)
		{
			cout << '$';
		}
		cout << endl;
	}
}

