#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include <math.h>
using namespace std;

struct ContaBancaria {
	char identificador[20];
	char nome[32];
	short saldo;

};

void exibir(ContaBancaria);

int main()
{
	ContaBancaria jeff = { "jeff", "Jefferson Silva", 1800 };
	exibir(jeff);

	cout << "Depositar quanto? : ";
	short depos;
	cin >> depos; 
	jeff.saldo += depos;
	exibir(jeff);

	return 0;

}

void exibir(ContaBancaria dat) {
	cout << dat.identificador << " /"
		<< dat.nome << " / R$"
		<< dat.saldo << endl;

}