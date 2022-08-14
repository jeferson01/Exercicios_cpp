#include <iostream>
using namespace std;



int main()
{
	cout << "Digite jogador/time: ";
	char nome[16];
	char tamNome = 0;
	cin >> nome;
	char* pt = nome;

	for (int i = 0; nome[i] > 0; i++) {
		//cout << nome[i];
		if (nome[i] == '/') {
			pt = &nome[i+1];
			tamNome = i;
		}
	}

	cout << "O nome do jogador tem " << int(tamNome) << " letras.\n";
	cout << "O seu time eh o " << pt << ".\n";
	cout << endl << pt - 1; // -1 in the adress of pointer
	
}