#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main()
{
	cout << "***Mini-Calculadora***\n\n";

	cout << "1 - adicao, 2 - subtracao, 3 - multiplicacao, 4 - Divisao" << endl;
	cout << "Escolha o numero da operacao (0 para finalizar): ";
	int escolha;
	float soma = 0, x, y;
	cin >> escolha;

	while (escolha)
	{
		switch (escolha)
		{
		case 1: 
			cout << "x = "; cin >> x;
			cout << "y = "; cin >> y;
			soma = x + y; 
			break;
		case 2:
			cout << "x = "; cin >> x;
			cout << "y = "; cin >> y;
			soma = x - y;
			break;
		case 3:
			cout << "x = "; cin >> x;
			cout << "y = "; cin >> y;
			soma = x * y;
			break;
		case 4:
			cout << "x = "; cin >> x;
			cout << "y = "; cin >> y;
			soma = x / y;
			break;
		default: cout << "***invalido***"; break;
		}

		cout << "Resultado da operacao = " << soma << endl << endl;
		cout << "1 - adicao, 2 - subtracao, 3 - multiplicacao, 4 - Divisao" << endl;
		cout << "Escolha o numero do prato (0 para finalizar): ";
		cin >> escolha;
	}

	cout << "\n--------------------\nultima operacao = " << soma << endl;
}

