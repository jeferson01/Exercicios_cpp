#include <iostream>
#include <fstream>
using namespace std;

void AlterarVetor(int *inicio, int *fim, int n) {
	// inicio e fim da faixa, numero n a ser colocado no vetor

	for (int i=0; inicio+i != fim; i++)
	{
		*(inicio + i) = n;
	}
	cout << "Vetor preenchido com valor " << n << ".\n";
}

int main() {

	ifstream fin;
	const char* nome = "valor.bin";
	int num;
	cout << "Nome do arquivo: " << nome << endl;

	fin.open(nome, ifstream::in | ifstream::binary);
	fin.read((char*) &num, sizeof(int));
	cout << num << endl;
	
	int vet[5];

	AlterarVetor(vet, vet + 5, num);
	for (int i = 0; i < 5; i++)
	{
		cout << "vet[" << i << "] : " << vet[i] << endl;
	}

	return 0;
}

/*

*/
