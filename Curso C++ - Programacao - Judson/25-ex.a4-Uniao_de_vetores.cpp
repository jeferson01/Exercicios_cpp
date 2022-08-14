// uniao de 2 vetores em 1 vet dinamico
#include <iostream>
#include <fstream>
using namespace std;


int* UniaoVetores(const int* vetA, const int* vetB, int tamanho) {
	
	int *novoVet = new int[tamanho*2];
	for (int i = 0; i < tamanho; i++)
	{
		novoVet[i] = vetA[i];
		novoVet[i + tamanho] = vetB[i];
	}
	
	return novoVet;
};


int main() {
	const int Tam = 4;
	int vetA[Tam] = { 1, 4, 5, 7 };
	int vetB[Tam] = { 3, 2, 8, 9 };

	cout << "\nVetor A: ";
	for (int i = 0; i < Tam; i++)
		cout << vetA[i] << " ";
	cout << "\nVetor B: ";
	for (int i = 0; i < Tam; i++)
		cout << vetB[i] << " ";

	cout << "\nVetor Uniao: ";

	int* vetC = UniaoVetores(vetA, vetB, Tam);

	for (int i = 0; i < Tam*2; i++)
	{
		cout << vetC[i] << " ";
	}

	delete[]vetC;
	return 0;
}

/*
Vetor A: 1 4 5 7 
Vetor B: 3 2 8 9
União: 1 4 5 7 3 2 8 9
*/
