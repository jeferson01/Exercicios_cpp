#include <iostream>
#include <cstring>
#include <stdlib.h> 
using namespace std;

int main()
{
	int x, y;
	int soma = 0;

	cout << "Digite um numero inteiro: ";
	cin >> x;
	cout << "Digite outro numero inteiro : ";
	cin >> y;

	int temp = x;
	// inverte se x for maior
	if (x > y) {
		x = y;
		y = temp;
	}

	for (int i = x + 1; i < y; i++) 
	{
		soma += i;
	}

	cout << "A soma de todos os valores entre "<< x << " e " << y <<": " << soma << ".\n";
	return 0;
}

