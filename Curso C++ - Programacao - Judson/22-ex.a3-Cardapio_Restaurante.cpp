#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

struct Prato
{
	char nome[20];
	float preco;
};

void Cardapio( Prato *pratos, int num) {

	cout << "\n\nCardapio do dia:" << endl;
	cout << fixed; cout.precision(2);

	for (int i = 0; i < num; i++)
	{
		cout << i+1 << " - " << pratos[i].nome << " R$" << pratos[i].preco << endl;
	}
	cout << endl;
}

int main()
{
	cout << "***Restaurante Meuzovo***\n";

	Prato pratos[4] = { {"Pudim de leite", 2.50},{"Bife acebolado", 6.00},{"Strognoff", 7.20},{"Feijoada", 10.} };
	Cardapio(pratos, 4);
	float soma = 0;
	
	cout << "Escolha o numero do prato (0 para finalizar): ";
	int escolha;
	cin >> escolha;

	while (escolha)
	{
		switch (escolha)
		{
		case 1: soma += pratos[0].preco; break;
		case 2: soma += pratos[1].preco; break;
		case 3: soma += pratos[2].preco; break;
		case 4: soma += pratos[3].preco; break;

		default: break;
		}
		
		Cardapio(pratos, 4);
		cout << "Total do pedido atualmente: R$" << soma << endl;
		cout << "Escolha o numero do prato (0 para finalizar): ";
		cin >> escolha;
	}

	cout << "\n--------------------\nTotal da conta: R$" << soma << endl;
}

