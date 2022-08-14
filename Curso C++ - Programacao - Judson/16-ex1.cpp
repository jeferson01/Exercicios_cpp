#include <iostream>
using namespace std;



int main()
{
	const int vet = 6;
	const char  *meses[vet] = {"janeiro", "fevereiro","março", "abril", "maio","junho"};
	int vendas[vet] = {};
	int total = 0;

	cout << "Digite o numero de livros vendidos em: \n";
	
	for (int i = 0; i < vet; i++)
	{
		cout << meses[i] << ": ";
		cin >> vendas[i];
		total += vendas[i];
	}

	cout << "Total de livros vendidos = " << total << endl;
}