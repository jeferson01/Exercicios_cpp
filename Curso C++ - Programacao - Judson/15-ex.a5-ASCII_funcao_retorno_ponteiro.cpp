#include <iostream>
using namespace std;

struct ASCII
{
	char caractere;
	int num;
};

ASCII* Retornar(char ch, int n) {
	ASCII* codigo = new ASCII;
	
	codigo->caractere = ch;
	codigo->num = n;

	return codigo;
}

int main()
{
	cout << "Digite um caractere e um numero associado: ";
	char ch; int num;
	cin >> ch >> num;

	ASCII * endereco = Retornar(ch, num);
	cout << "foi associado: " << endereco->caractere << endereco->num;

	delete endereco;
	
}