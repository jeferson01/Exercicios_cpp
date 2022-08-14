//std::cout << std::setw(5) << std::setfill('0') << 1;
#include <iostream>
using namespace std;

int Soma(int a, int b) {
	int soma = 0;
	for (int i = a; i <= b; i++)
	{
		soma += i;
	}

	return soma;
}


int main()
{
	cout << "Digite o inicio e fim do intervalo: ";
	int inicio, fim; 
	cin >> inicio >> fim;

	cout << "Soma total do intervalo: " << Soma(inicio, fim) << endl;
	
}

