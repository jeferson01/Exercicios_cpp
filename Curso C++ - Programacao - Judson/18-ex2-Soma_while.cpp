//std::cout << std::setw(5) << std::setfill('0') << 1;
#include <iostream>
#include <Windows.h>
#include "concurso.h"
using namespace std;



int main()
{
	cout << "Digite numeros inteiros(0 para finalizar) :";
	int num, soma = 0, i = 0;
	cin >> num;
	while (num)
	{
		soma += num;
		i++;
		cin >> num;
	}
	cout << "Foram lidos " << i << " numeros.\n";
	cout << "A soma eh: " << soma << endl;
	cout << "A media eh: " << soma / (float)i << endl;
}

/*Digite n�meros inteiros (0 para finalizar): 
10 4 5 2 0 
Foram lidos 4 n�meros 
A soma dos n�meros � 21 
A m�dia � 5.25*/