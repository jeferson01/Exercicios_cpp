//std::cout << std::setw(5) << std::setfill('0') << 1;
#include <iostream>
#include <cstring>
#include "concurso.h"
using namespace std;


int main()
{
	const char *meses[] = {"Janeiro", "Fevereiro", "Marco", "Abril", "Maio", "Junho"};

	int ano1 = 0, ano2 = 0, ano3 = 0;

	int mat[3][6] = {};
	for (int k=0; k < 3; k++)
	{
		cout << "Digite o numero de livros vendidos no " << k+1 << "° ano : \n";
		for (int i = 0; i < 6; i++)
		{
			cout << meses[i] << ": ";
			cin >> mat[0][i];
			if (k == 0) ano1 += mat[0][i];
			if (k == 1) ano2 += mat[0][i];
			if (k == 2) ano3 += mat[0][i];
		}
	}
	
	cout << "\nTotal de vendas\n";
	cout << "1º ano: " << ano1 << endl;
	cout << "2º ano: " << ano2 << endl;
	cout << "3º ano: " << ano3 << endl;

	cout << "Nos tres anos foram vendidos " << ano1 + ano2 + ano3 << " livros.\n";

}

