#include <iostream>
#include <cstring>
#include "concurso.h"
using namespace std;

int main()
{
	char mat[16][16] = {};
	int count = 0;

	for (int i = 0; i < 16; i++)
	{
		for (int j = 0; j < 16; j++)
		{
			mat[j][i] = count; // inverte matriz j <-> i
			count++;
		}
	}
	for (int i = 0; i < 16; i++)
	{
		cout << "Linha " << i+1 << ":\t";
		for (int j = 0; j < 16; j++)
		{
			cout << mat[i][j] << " ";
		}
		cout << endl;
	}

	int linha1, linha2, col1, col2;
	cout << "Entre com as coordenadas da regiao de interesse\n";
	cout << "De (linha/coluna): ("; cin >> linha1 >> col1;// cout << ")\n";
	cout << "Ate (linha/coluna): ("; cin >> linha2 >> col2;// cout << ")\n";


	int matLinha = abs(linha1 - linha2) + 1;
	int matColuna = abs(col1 - col2) + 1;
	cout << matLinha << matColuna << endl;

	// criar matriz dinamica, tamanho selecionado
	char** novaMatriz = new char*[matLinha];
	for (int i = 0; i < matLinha; i++)
	{ novaMatriz[i] = new char[matColuna]; }

	for (int i = linha1; i <= linha2; i++)
	{
		for (int j = col1; j <= col2; j++)
		{
			// reduz a linha e coluna inicial para colocar na nova matriz com tamanho menor.
			novaMatriz[i-linha1][j-col1] = mat[i][j];
		}
	}
	// cout toda a nova matriz.
	for (int i = 0; i < matLinha; i++)
	{
		for (int j = 0; j < matColuna; j++)
		{
			cout << novaMatriz[i][j] << " ";
		}
		cout << endl;
	}
	// delete new vetores
	return 0;
}

