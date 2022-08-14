#include <iostream>
#include <cstring>
#include <stdlib.h> 
using namespace std;

int SomaDivis(int a, int b, int c) {
	int soma = 0;
	for (int i = b; i <= c; i++)
	{
		if (i % a == 0) {
			soma += i;
		}
	}
	
	return soma;
}

int main()
{
	int a, b, c;
	cout << "Digite três numeros inteiros a, b e c (\"a\" maior que 1): ";
	cin >> a >> b >> c;

	cout << "\nA soma eh igual a " << SomaDivis(a, b, c) << ".\n";
}

