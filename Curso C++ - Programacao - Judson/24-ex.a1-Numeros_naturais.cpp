// cria matriz dinamica e grava no arquivo binario, le em um vetor unico. [ i * colunas + j]
#include <iostream>
#include <fstream>
using namespace std;

int main() {
	const int num = 10000;
	ofstream fout;
	fout.open("numeros_naturais.txt", ios_base::out | ios_base::trunc);

	for (int i = 0; i < num; i++)
	{
		fout << i << " ";
	}
	fout.close();

	
	fout.open("numeros_naturais.dat", ios_base::out | ios_base::trunc | ios_base::binary);

	for (int i = 0; i < num; i++)
	{
		fout.write((char*)&i, sizeof(int));
	}
	fout.close();
}
