#include <iostream>
#include <cstring>
#include <stdlib.h> 
//using namespace std;
using std::cout;
using std::cin;


int main()
{
	int contPrimos = 0;
	bool naoPrimo = false;

	int num = 20;
	
	for (int j = 2; contPrimos <= 1000; j++) // vai ate o numero primo numero x
	{
		for (int i = 2, naoPrimo=false; i <= j && !naoPrimo; i++)
		{
			if (j % i == 0 && i == j) { // se for modulo zero e igual numero, chegou no fim
				contPrimos++;
				cout << i << " ";
			}
			else if (j % i == 0 && i != j) // se for divisivel sai do loop
				naoPrimo = true;
		}
	}


	cout << "\nPrimos : " << contPrimos << std::endl;
}

/* Listando os 6 primeiros números primos, temos 2, 3, 5, 7, 11 e 13. 
Podemos notar que o sexto número primo é 13. 
Qual é o 10001º número primo?.
divide apenas por ele mesmo x % x == 0

testar pra ver modulo == 0
se for 0 nao eh primo
*/