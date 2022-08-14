// reorganiza vetor, localiza posição(menor) e joga os outros pra tras ->
#include <iostream>
#include <fstream>
using namespace std;


int Locate(const int* vet, int n, int insert) {
	int pos = 0;

	while (n > vet[pos] && pos < insert)
	{
		pos++;
	}
	return pos;
};

void OpenSpace(int* vet, int tam, int pos) {
	int j = 0;
	for (int i = pos+1; i < tam; i++, j++) // mover -> e 1 elemento a menos que o vetor
	{
		vet[tam - 1 - j] = vet[tam - 2 - j]; // i errado
	}

}

int main() {
	const int Tam = 10;
	int vet[Tam] = {};

	int insVet[Tam] = { 3, 12, 6, 7, 4, 8, 2, 9, 14, 1 };

	for (int i = 0; i < Tam; i++)
	{
		int pos = Locate(vet, insVet[i], i);
		OpenSpace(vet, Tam, pos);

		vet[pos] = insVet[i];
	}

	
	cout << "\nVetor inserido: " << endl;
	for (int i = 0; i < Tam; i++)
		cout << insVet[i] << " ";
	
	cout << "\n\nOs valores ordenados: " << endl;
	for (int i = 0; i < Tam; i++)
		cout << vet[i] << " ";
	cout << endl;

	return 0;
}

/*
Digite 10 valores: 3 12 6 7 4 8 2 9 14 1
Os valores ordenados: 1 2 3 4 6 7 8 9 12 14
*/
