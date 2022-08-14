#include <iostream>
#include <cstring>
#include <stdlib.h> 
using namespace std;


int main()
{
	double vet[10] = {};
	double donativo;
	double soma = 0, media = 0;
	int count = 0;

	cout << "Digite ate 10 valores de donativos (zero para encerrar): ";
	cin >> donativo;
	while (donativo != 0)
	{
		vet[count] = donativo;
		soma += vet[count];
		count++;
		cin >> donativo;
	}

	media = soma / count;
	int maiorMedia = 0;

	for (int i=0; i < count; i++)
	{
		maiorMedia += vet[i] > media;
	}
	
	cout << "A media dos valores doados foi de R$" << media << ".\n";
	cout << "A soma dos valores doados foi de R$" << soma << ".\n";
	cout << maiorMedia << " valores foram maiores que a media.\n";

	return 0;
}

