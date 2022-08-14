#include <iostream>
using namespace std;

int main()
{
	cout << "Digite seu nome completo: ";
	char nomeCompleto[24];
	cin.getline(nomeCompleto, 24);
	cout << "Bom dia, " << nomeCompleto << endl;


	const int max = 10;
	char nome1[max], nome2[max] = {};

	cout << "Seu primeiro nome: ";
	cin >> nome1;
	cout << "Seu ultimo nome: ";
	cin >> nome2;
	cout << "Bem vindo, " << nome1 << " " << nome2;
	

	return 0;
}

