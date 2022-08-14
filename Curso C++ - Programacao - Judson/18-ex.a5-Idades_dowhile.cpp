//std::cout << std::setw(5) << std::setfill('0') << 1;
#include <iostream>
#include <Windows.h>
#include "concurso.h"
using namespace std;

int main()
{
	cout << "Digite as idades do grupo: ";
	int maiores = 0, idade = 0;
	int maisNova = 100, maisVelha = 0;

	do
	{
		cin >> idade;
		maiores += (idade >= 18);
		if (maisVelha < idade) { maisVelha = idade; }
		if (maisNova > idade && idade) { maisNova = idade; }
	} while (idade);

	cout << "Nesse grupo " << maiores << " pessoas sao maiores de idade.\n";
	cout << "Mais velha: " << maisVelha << endl;
	cout << "Mais nova: " << maisNova << endl;

	return 0;
}

