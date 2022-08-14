#include <iostream>
#include <cstring>
#include <stdlib.h> 
using namespace std;


int main()
{
	const int max = 80;
	int vet[10];

	cout << "As últimas 10 velocidades registradas: ";
	for (int i = 0; i < 10; i++)
		cin >> vet[i];

	int total = 0, quantidade = 0, multa = 0;
	for (int i : vet)
	{
		if (i > max) {
			multa = (i - max) * 8;
			cout << i << "Km/h excede o limite = multa de R$" << multa << endl;
			quantidade++;
			total += multa;
		}
	}
	
	cout << quantidade << " carros foram multados em um valor total de R$" << total << ".\n";
	 
}

/* 80Km/h, calcule o valor total arrecadado em multas 
e o valor de multa que cada um deve pagar.
A multa é de R$8 por km excedido.*/