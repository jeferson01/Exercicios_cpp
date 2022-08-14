// exibir quais os maiores/menores numeros do vetor, lido do arquivo txt
// ifstream .good() e .eof() terminam 1 loop antes se nao tiver linha vazia no fim.
#include <iostream>
#include <fstream>
using namespace std;

struct MenorMaior {
	int menorNum, menorPos;
	int maiorNum, maiorPos;
};

MenorMaior MenorMaiorNum(int* vet, int tam) {
	MenorMaior numeros = {};
	numeros.menorNum = vet[0]; numeros.maiorNum = vet[0];

	for (int i = 0; i < tam; i++)
	{
		if (vet[i] > numeros.maiorNum) {
			numeros.maiorNum = vet[i];
			numeros.maiorPos = i+1;
		}
		if (vet[i] < numeros.menorNum) {
			numeros.menorNum = vet[i];
			numeros.menorPos = i+1;
		}
	}
	
	return numeros;
}

int main() {
	ifstream fin;
	fin.open("numeros_lista.txt", ifstream::in);

	int num;
	int i = 0;

	while ( fin >> num && i <= 100)
	{
		i++;
	}
	fin.close();
	cout << "numero de elementos: " << i << endl;

	int *vet = new int[i]; // vetor dinamico
	fin.open("numeros_lista.txt", ifstream::in);
	for (int j = 0; j < i; j++) // preencher vetor
		fin >> vet[j];
	fin.close();

	MenorMaior menorEMaior = MenorMaiorNum(vet, i);

	cout << "A posicao " << menorEMaior.maiorPos << " contem o maior numero(" << menorEMaior.maiorNum << ")\n";
	cout << "A posicao " << menorEMaior.menorPos << " contem o menor numero(" << menorEMaior.menorNum << ")\n";
	
	return 0;
}

/*
até 100 números de um arquivo texto e armazene-os em um vetor.
passar o vetor para uma função que deve encontrar e retornar o menor elemento, o maior elemento, 
e suas respectivas posições dentro do vetor.
-registro para ser o tipo de retorno da função
-Utilize const nos parâmetros da função sempre que possível.

Arquivo: números.txt
A posição 30 contém o menor número (3)
A posição 12 contém o maior número (98)
*/
