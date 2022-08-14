// funcoes retornam um 'T', um tipo genérico template. 
#include <iostream>
using namespace std;

template <typename T>
T MaiorElem5(T* vet) {
	T temp = vet[0];
	for (int i = 0; i < 5; i++)
		vet[i] > temp ? temp = vet[i] : NULL;
	return temp;
}

template <typename T>
T MaiorElemN(T* vet, int n) {
	T temp = vet[0];
	for (int i = 0; i < n; i++)
		vet[i] > temp ? temp = vet[i] : NULL;
	return temp;
}


int main()
{
	int iVet[5] = { 1, 7, 3, 4, -5 };
	double dVet[5] = { 1.12, 2.32, 2.001, -1.05, 0.05 };
	cout << MaiorElem5(iVet) << endl;
	cout << MaiorElem5(dVet) << endl;

	int iVet2[6] = { 1,3,2,5,9,8 };
	double dVet2[4] = { 1.11, -2.32, 2.001, -1.05 };
	cout << MaiorElemN(iVet2, 6) << endl;
	cout << MaiorElemN(dVet2, 4) << endl;


	return 0;
}

/*
*/