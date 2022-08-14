//std::cout << std::setw(5) << std::setfill('0') << 1;
#include <iostream>
#include <Windows.h>
#include "concurso.h"
using namespace std;



int main()
{
	int soma = 0, i = 0;
	for (int i = 1; i <= 100; i+=2)
	{
		soma += i;
	}
	cout << "Soma: " << soma << endl;

	soma = 0, i = 1;
	do
	{
		soma += i;
	} while ((i+=2) <= 100);
	cout << "Soma2: " << soma;
}

