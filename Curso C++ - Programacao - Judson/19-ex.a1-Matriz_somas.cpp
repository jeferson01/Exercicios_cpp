//std::cout << std::setw(5) << std::setfill('0') << 1;
#include <iostream>
#include <cstring>
#include "concurso.h"
using namespace std;

// calcula a soma das colunas e linhas da matriz
int main()
{
	int mat[4][4] = {
		{3 ,1 ,5 ,5},
		{1 ,5 ,5 ,6},
		{2 ,3 ,4 ,5},
		{4 ,9 ,1 ,8},
	};
	int colunas[4] = {};
	int linhas[4] = {};

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			colunas[j] += mat[i][j];
			linhas[i] += mat[i][j];
		}

	}
	cout << "\nA soma das colunas eh: ";
	for (int i = 0; i < 4; i++) { cout << colunas[i] << " "; }
	cout << "\nA soma das linhas eh:  ";
	for (int i = 0; i < 4; i++) { cout << linhas[i] << " "; }
	cout << endl;
}

