#include <iostream>
using namespace std;
int Soma(int[5]);

int main()
{
	int vetor[5] = {};
	cout << "digite 5 numeros int";
	cin >> vetor[0];
	cin >> vetor[1];
	cin >> vetor[2];
	cin >> vetor[3];
	cin >> vetor[4];
	cout << Soma(vetor);

	return 0;
}

int Soma(int vec[5]) {
	cout << "Soma dos vetores = ";
	return vec[0] + vec[1] + vec[2] + vec[3] + vec[4];
}

