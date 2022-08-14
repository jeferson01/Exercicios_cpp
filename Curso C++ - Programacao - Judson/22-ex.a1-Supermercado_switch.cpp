#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

void ExibirMenu() {
	cout << "a) Alface R$ 1, 25 / Kg\n"
		 << "b) Beterraba R$ 0, 65 / Kg\n"
		 << "c) Cenoura R$ 0, 90 / Kg\n"
		 << "\nFaça seu pedido usando as letras(a, b, c) e(s) para encerrar :";
}

int main()
{
	cout << fixed; cout.precision(2);
	cout << "Supermercado Meuzovo\n" "----------------\n";
	ExibirMenu();

	const int descontoMinimo = 100;
	const float alface = 1.25, beterraba = 0.65, cenoura = 0.90;
	float kgAlface = 0, kgBeterraba = 0, kgCenoura = 0;
	float soma = 0, somaKilos = 0;
	float descontos = 0, entrega = 0;

	char ch;
	cin.get(ch);

	while (ch != 's')
	{
		switch (ch)
		{
		case 'a':
			cout << "Digite quantos kilos de alface: ";
			cin >> kgAlface;
			break;
		case 'b':
			cout << "Digite quantos kilos de beterraba: ";
			cin >> kgBeterraba;
			break;
		case 'c':
			cout << "Digite quantos kilos de cenoura: ";
			cin >> kgCenoura;
			break;

		default:
			break;
		}
		cout << endl << "Faca seu pedido usando as letras(a, b, c) e(s) para encerrar : ";
		cin.get(); cin.get(ch);
	}
	
	somaKilos = kgAlface + kgBeterraba + kgCenoura;
	soma = (kgAlface * alface) + (kgBeterraba * beterraba) + (kgCenoura * cenoura);
	
	if (soma > descontoMinimo)
		descontos = soma * 0.05;

	if (somaKilos < 5)
		entrega = 3.50;
	else if (somaKilos < 20)
		entrega = 10;
	else if (somaKilos >= 20)
		entrega = 8 + (0.10 * somaKilos);

	cout << endl << "Produto \tPreco/Kg \tPedido (Kg) \tTotal Parcial" << endl;
	cout << "---------- \t--------- \t----------- \t---------------" << endl;
	cout << "Alface \t\tR$ " << alface << "/Kg \t" << kgAlface << "Kg\t\tR$ " << alface * kgAlface << endl;
	cout << "Beterraba \tR$ " << beterraba << "/Kg \t" << kgBeterraba << "Kg\t\tR$ " << beterraba * kgBeterraba << endl;
	cout << "Cenoura \tR$ " << cenoura << "/Kg \t" << kgCenoura << "Kg\t\tR$ " << cenoura * kgCenoura << endl;

	float totalPagar = soma - descontos + entrega;
	cout << endl << "----------------------------------";
	cout << endl << "Descontos: \t\tR$" << descontos;
	cout << endl << "Custos de entrega: \tR$" << entrega;
	cout << endl << "----------------------------------";
	cout << endl << "Total a Pagar: \t\tR$" << totalPagar << endl;
	return 0;
}

/*Produto   Preço/Kg  Pedido (Kg) Total Parcial
---------- --------- ----------- ---------------
Alface		R$ 1,25/Kg 3,2Kg	R$ 4,00
Beterraba	R$ 0,65/Kg 6,0Kg	R$ 3,90
Cenoura		R$ 0,90/Kg 10Kg		R$ 9,00
---------------------------------------------------

desconto de 5% para pedidos que ultrapassem R$100
(valor calculado sem os custos de envio da mercadoria). 
O custo de entrega é de R$3,50 para pedidos com menos de 5Kg, R$10,00 para pedidos de 5Kg até 20Kg,
e R$8,00 mais R$0,10 por Kg para pedidos iguais ou maiores que 20Kg.
*/