#include <iostream>
using namespace std;

int main()
{
	float precos[3] = { 1.50, 2.00, 1.00 };
	float quantidade[3];

	cout << "Digite a quantidade de quilos desejados:\n";
	cout << "Alface: ";
	cin >> quantidade[0];
	cout << "Beterraba: ";
	cin >> quantidade[1];
	cout << "Cenoura: ";
	cin >> quantidade[2];
	float total = (precos[0]*quantidade[0]) + (precos[1]*quantidade[1]) + (precos[2]*quantidade[2]);

	cout << "\nResumo da Compra \n--------------------\n";
	cout << "Alface = \tR$" << precos[0] * quantidade[0] << endl;
	cout << "Beterraba = \tR$" << precos[1] * quantidade[1] << endl;
	cout << "Cenoura = \tR$" << precos[2] * quantidade[2] << endl;
	cout << "--------------------\n";
	cout << "Total = \tR$" << total;


	return 0;
}

/*Prezado Cliente,
Digite a quantidade de quilos desejados:
Alface: 2
Beterraba: 3
Cenoura: 1.5 Resumo da Compra
----------------------
Alface = R$3.00
Beterraba = R$6.00
Cenoura = R$1.50 ----------------------
Total = R$10.50*/