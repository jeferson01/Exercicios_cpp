//std::cout << std::setw(5) << std::setfill('0') << 1;
#include <iostream>
using namespace std;

int main()
{
	cout << "Digite 10 valores: ";
	int vetorA[5], vetorB[5], vetorSoma[5] = {};
	
	for (int i = 0; i < 5; i++) {
		cin >> vetorA[i];
		vetorSoma[i] += vetorA[i];
	}
	for (int i = 0; i < 5; i++) {
		cin >> vetorB[i];
		vetorSoma[i] += vetorB[i];
	}

	cout << "Vetor A: ";
	for (int& i : vetorA) cout << i << " "; // exibe vetor A, for range
	cout << "\tVetor B: ";
	for (int& i : vetorB) cout << i << " ";

	cout << endl << "Soma dos vetores A e B: " << endl;
	for (int& i : vetorSoma) cout << i << " ";

}

