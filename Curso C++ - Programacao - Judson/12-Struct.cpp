#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

struct jogador {
	char nome[32];
	unsigned gols;
};

void exibir(jogador);

int main()
{
	jogador bebeto = { "Bebeto", 385 };
	exibir(bebeto);

	return 0;
}

void exibir(jogador jog) {
	cout << "Nome: " <<jog.nome << endl;
	cout << "gols: " << jog.gols << endl;
}