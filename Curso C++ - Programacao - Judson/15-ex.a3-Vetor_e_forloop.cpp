#include <iostream>
using namespace std;


int main()
{
	cout << "Quantos valores deseja guardar ? ";
	int var;
	cin >> var;

	int* vetor = new int[var];
	cout << "Quais os valores? ";
	for (int i = 0; i < var; i++)
	{
		cin >> vetor[i];
	}

	cout << "foram armazenados os valores: ";
	for (int i = 0; i < var; i++)
	{	cout << vetor[i] << ", "; }

	delete []vetor;
}