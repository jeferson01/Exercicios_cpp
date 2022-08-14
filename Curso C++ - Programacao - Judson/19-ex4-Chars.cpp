//std::cout << std::setw(5) << std::setfill('0') << 1;
#include <iostream>
#include <cstring>
#include "concurso.h"
using namespace std;

void ExibirChar(char ch) {
	for (int i = 0;  i < 20;  i++)
	{
		cout << ch;
	}
	cout << endl;
}

int main()
{
	cout << "Digite um caractere: ";
	char ch;
	cin.get(ch);

	ExibirChar(ch);
	cout << "Programando em C++\n";
	ExibirChar(ch);
}

