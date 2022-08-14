#include <iostream>
using namespace std;

struct Carro {
	char fabricante[10];
	int ano;
};
int main()
{
	cout << "Quantos carros para catalogar? ";
	int vetSize; cin >> vetSize;
	Carro* catalogo = new Carro[vetSize];

	for (int i = 0; i < vetSize; i++) {
		cout << "Digite o fabricante e o ano do carro numero " << i + 1 << ": ";
		cin >> catalogo[i].fabricante;
		cin >> catalogo[i].ano;
	}

	cout << "\nAqui esta sua colecao:\n";
	for(int i=0; i < vetSize; i++)
		cout << catalogo[i].ano << " " << catalogo[i].fabricante << endl;

	delete[]catalogo;
}