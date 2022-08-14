#include <iostream>
#include <cstring>
#include <stdlib.h> 
using namespace std;

void ExibirTotal(int t) {
	cout << "\nTotal de impostos: " << t;
}

int main()
{
	int total = 0;
	cout << "Digite o valor da renda (negativo para sair): ";
	for (int i = 0; (cin >> i) && i >= 0; ) // cin retorna 0 se nao for int
	{
		if (i <= 5000) {
			total = 0;
			ExibirTotal(total);
		}
			
		else if (i > 5000 && i <= 15000) {
			total = (i - 5000) * 0.10;
			ExibirTotal(total);
		}
		else if (i > 15000 && i <= 35000) {
			total = (10000*0.10) + (i - 15000) * 0.15;
			ExibirTotal(total);
		}
		else {
			total = (10000 * 0.10) + (20000*.15) + (i - 35000) * 0.20;
			ExibirTotal(total);
		}
		cout << "\nDigite o valor da renda: ";
	}

	cout << "\nTotal de impostos: " << total;
}

