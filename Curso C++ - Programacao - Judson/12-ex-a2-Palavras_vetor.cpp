#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include <math.h>
#include <vector>
using namespace std;

struct Palavra {
	char palavraPor[16];
	char palavraIng[16];
	char palavraEsp[16];
};

void exibir(Palavra);

int main()
{
	Palavra cachorro = { "cachorro", "dog", "cachorrito"};
	exibir(cachorro);
	Palavra dicionario[10]{
		{"doce", "candy", "docito"},
		{"branco", "white", "branquito"}
	};

	cout << dicionario[0].palavraPor << endl;
	cout << "Digite uma palavra em PT/ING/ESP: ";
	cin >> dicionario[2].palavraPor >> dicionario[2].palavraIng >> dicionario[2].palavraEsp;
	exibir(dicionario[2]);

	return 0;

}

void exibir(Palavra dat) {
	cout << dat.palavraPor << "//"
		<< dat.palavraIng << "//"
		<< dat.palavraEsp << endl;

}