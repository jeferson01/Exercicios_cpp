// exibir pares de numeros, menor pro maior
#include <iostream>
#include <fstream>
using namespace std;

struct Pares
{
	int x;
	int y;
};

void ExibirPares(const Pares vet[]) {
	
	cout << "Pares organizados: " << endl;
	for (int i = 0; i < 10 && vet[i].x != 0; i++)
	{
		vet[i].x <= vet[i].y ? cout << "(" << vet[i].x << "," << vet[i].y << ")" 
							 : cout << "(" << vet[i].y << "," << vet[i].x << ")";
		cout << endl;
	}
}

int main() {

	Pares vet[10] = {};
	int par1, par2;

	cout << "Digite pares de valores (0 para encerrar, ate 10 pares):\n";
	cin >> par1 >> par2;
	for (int i = 0; i < 10 && par1 != 0; i++)
	{
		vet[i].x = par1;
		vet[i].y = par2;
		cin >> par1 >> par2;
	}

	ExibirPares(vet);

	return 0;
}

/*
Escreva uma função que receba o vetor de pares e 
exiba os pares colocando sempre o menor número como primeiro elemento do par.
Pares organizados:
(3,9)
(2,8)
(5,7)
*/
