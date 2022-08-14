#include <iostream>
#include <cstring>
#include <stdlib.h> 
//using namespace std;
using std::cout;
using std::cin;


int main()
{
	const int maxim = 100; //4'000'000;
	int soma = 0;
	int somaPares = 0;
	int pnultimo = 1-1;
	int ultimo = 2-1;

	for (int i = 0; pnultimo + ultimo <= maxim; i++)
	{
		soma = pnultimo + ultimo;
		pnultimo = ultimo;
		ultimo = soma;
		cout << ultimo << " ";
		if (ultimo % 2 == 0)
			somaPares += ultimo;
	}

	cout << "\n\nSoma dos pares : " << somaPares << std::endl;
}

/* Fibonacci: adição entre os dois últimos termos 
os 10 primeiros termos serão: 
1, 2, 3, 5, 8, 13, 21, 34, 55 e 89.*/