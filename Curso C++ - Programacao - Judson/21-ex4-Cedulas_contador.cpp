#include <iostream>
#include <cstring>
#include <stdlib.h> 
//using namespace std;
using std::cout;
using std::cin;


int main()
{
	const int cedulas[4] = { 50,20,10,5 };
	int contagemCedulas[4] = {};

	cout << "Caixa Eletronico\n" << "----------------\n";
	cout << "Saque: ";
	int saque;
	cin >> saque;
	int contador = saque;

	for (int i = 0; contador >= 5; i++)
	{
		if (contador >= 50 ) {
			contador -= 50;
			contagemCedulas[0]++;
		}
		else if (contador >= 20) {
			contador -= 20;
			contagemCedulas[1]++;
		}
		else if (contador >= 10) {
			contador -= 10;
			contagemCedulas[2]++;
		}
		else if (contador >= 5) {
			contador -= 5;
			contagemCedulas[3]++;
		}
	}
	
	cout << "Entregando: \n";
	cout << contagemCedulas[0] << " cedula(s) de R$50\n";
	cout << contagemCedulas[1] << " cedula(s) de R$20\n";
	cout << contagemCedulas[2] << " cedula(s) de R$10\n";
	cout << contagemCedulas[3] << " cedula(s) de R$5\n";
	cout << "troco? R$" << contador;
}

/*Caixa Eletrônico
----------------
Saque: 235
Entregando: 4 cédula(s) de R$50
1 cédula(s) de R$20
1 cédula(s) de R$10
1 cédula(s) de R$5  */