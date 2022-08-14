// se tiver um \n no fim do arquivo, o vetor tera um elemento a mais. =/
#include <iostream>
#include <fstream>
#include <cctype>
using namespace std;

double MaiorElemento(const double vet[], int n) {

	double maior = vet[0]; // inicializa c/ primeiro elem.
	for (int i = 0; i < n; i++)
	{
		if (vet[i] > maior)
			maior = vet[i];
	}
	return maior;
}

int main() {

	ifstream fin;
	const char* nome = "valores.txt";

	fin.open(nome, ios_base::in);
	double val;
	int tam = 0;

	if(fin.is_open())
		for (tam = 0; !fin.eof(); ) // conta quantos elementos tem o arq.
		{
			fin >> val;
			tam++;
			//if (fin.good()) //se tiver um \n no final, fin entra em erro: bad read.
		}
	cout << tam;
	
	double * vet = new double[tam]; // vetor dinamico
	if (fin.is_open()) {

		fin.clear(); // reseta fin do estado de erro.
		fin.seekg(0, ios_base::beg); // retorna inicio
		//fin.seekg(0, fin.beg);
		for (int i = 0; i < tam; i++)
		{
			fin >> val;
			vet[i] = val;
			//cout << vet[i] << " ";
		}
	}

	fin.close();
	cout << endl << endl;
	cout << "Maior elemento do " << nome << ": " << MaiorElemento(vet, tam) << endl;
	
	
	delete[]vet;
	return 0;
}

/*
vetor de double’s e retorne o valor do maior elemento
função para encontrar o maior valor presente em um arquivo texto.
O arquivo contém uma quantidade qualquer de valores 
ponto-flutuantes separados por espaços, tabulações ou saltos de linha.

como não se conhece o conteúdo do arquivo, não é possível prever quantos valores ele contém. 
Será necessário ler o arquivo duas vezes, uma para contar e outra para ler os elementos.
*/
