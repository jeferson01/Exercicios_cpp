//std::cout << std::setw(5) << std::setfill('0') << 1;
#include <iostream>
#include <cstring>
#include "concurso.h"
using namespace std;


int main()
{
	const int linhas = 5, colunas = 5;
	float media = 0;
	int mat[linhas][colunas] = {
		{38,51,50,56,98},
		{17,65,25,62,54},
		{23, 23, 64, 45, 92},
		{41, 39, 19, 68, 87},
		{65, 10, 12, 22, 13}
	};

	for (int i = 0; i < linhas; i++)
	{
		for (int j = 0; j < colunas; j++) {
			cout << mat[i][j] << " ";
			media += mat[i][j];
		}
		cout << endl;
	}
	media = media / (linhas * colunas);
	cout << "Media da Matriz: " << media << endl;
}

