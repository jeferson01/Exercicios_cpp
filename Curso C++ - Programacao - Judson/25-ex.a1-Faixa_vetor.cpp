// exibir pares de numeros, menor pro maior
#include <iostream>
#include <fstream>
using namespace std;


void ExibirValores(const int *inicio, const int* fim, int num ) {
	int cont = 0;
	for (int i = 0; inicio+i != fim; i++)
	{
		//*(inicio + i) == num ? cont++ : cont; // add cont se num for igual ao vet[i]
		inicio[i] == num ? cont++ : cont;
	}

	cout << "\nExistem " << cont << " numeros " << num << " na faixa indicada.\n";
}

int main() {

	int vet[] = { 0, 1, 0, 1, 0, 2, 1, 1, 0, 1, 2 };

	// fim da faixa = ultima posicao+1
	ExibirValores(vet+0, vet + 11, 2);

	return 0;
}

/*
Existem 5 zeros e 6 uns na faixa indicada.
*/
