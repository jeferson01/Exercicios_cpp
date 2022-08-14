#include <iostream>
#include <cstring>
#include <stdlib.h> 
using namespace std;

struct Registro {
	char nome[20];
	int valor;
};

int main()
{
	const int grandesPatronos = 10000;
	int num;
	cout << "Digite o numero de contribuintes: ";
	cin >> num;

	Registro* vet = new Registro[num];
	
	for (int i = 0; i < num; i++)
	{
		cout << "#" << i + 1 << "\nNome: ";
		cin.get(); // remove espaço do buffer
		cin.getline(vet[i].nome, 20);
		cout << "Valor: ";
		cin >> vet[i].valor;
	}

	cout << "\nGrandes Patronos: \n";
	for (int i = 0; i < num; i++) {
		if (vet[i].valor >= grandesPatronos)
			cout << vet[i].nome << " " << vet[i].valor << endl;
	}
	cout << "\nPatronos: \n";
	for (int i = 0; i < num; i++) {
		if (vet[i].valor < grandesPatronos)
			cout << vet[i].nome << " " << vet[i].valor << endl;
	}
}

