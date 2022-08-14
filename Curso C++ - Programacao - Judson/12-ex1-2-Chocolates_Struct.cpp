#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

struct chocolate {
	char marca[20];
	float peso;
	unsigned calorias;
};

void exibir(chocolate);

int main()
{
	chocolate choc[3] = {
		{ "Charge",2.30f, 350 },
		{ "KitKat",1.50f, 420 }, 
		{ "Ouro Branco",1.20f, 230 }
	};
	chocolate lanche = { "Charge",2.30f, 350 };

	exibir(choc[0]);
	exibir(choc[1]);
	exibir(choc[2]);

	return 0;
}

void exibir(chocolate choc) {
	cout << "Marca: " <<choc.marca << endl;
	cout << "peso: " << choc.peso << endl;
	cout << "calorias: " << choc.calorias << endl;
}