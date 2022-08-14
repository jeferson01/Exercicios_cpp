#include <iostream>
#include <cstring>
#include <math.h>
using namespace std;

enum TabelaCores { Preto, Azul, Amarelo };

union Cores {
	char corNome[16];
	short corNumero;
	//char corCodigo[16]; // 2 chars
};

struct Carro
{
	char nome[16];
	short ano;
	Cores cor;
	unsigned valor;
};

void exibir(Carro);

int main()
{
	Carro lojaDeCarros[10]{
		{"Vectra", 2009, "Azul", 58'000 },
		{"Polo", 2008, "Preto", 45'000}
	};
	Carro carro1 = { "Gol", 2005, "Preto", 34000 };
	cout << carro1.cor.corNome << endl;

	cout << "Digite o nome do carro, ano, cor e valor: ";
	cin >> carro1.nome >> carro1.ano >> carro1.cor.corNome >> carro1.valor;

	exibir(lojaDeCarros[0]);
	exibir(lojaDeCarros[1]);
	exibir(carro1);
	return 0;
}


void exibir(Carro dat) {
	cout << dat.nome << "/"
		<< dat.ano << "/"
		<< dat.cor.corNome << "/"
		<< dat.valor << endl;
}

