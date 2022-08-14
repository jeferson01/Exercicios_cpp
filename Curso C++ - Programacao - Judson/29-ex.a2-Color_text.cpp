// color red,yellow,cyan
#include <iostream>
#include <fstream>
#include <Windows.h>
using namespace std;

void print(int n) {
	std::cout << "\033[33m" << n << "\033[0m";
}
void print(double n) {
	std::cout << "\033[36m" << n << "\033[0m";
}
void print(const char* ch) {
	std::cout << "\033[31m" << ch << "\033[0m";
}

int main()
{
	cout << "Inteiro: ";
	print(45);
	cout << "\nPonto-flutuante: ";
	print(3.9);
	cout << "\nString: ";
	print("Oi Mundo");
	cout << "\n";

	std::cout << "\033[31m" << "Error!" << "\033[0m" << std::endl;
	Sleep(1000);
	std::cout << "\033[1m\033[31m" << "Error!" << "\033[0m" << std::endl;
	
	std::cout << "\033[36m" << "Error!" << "\033[0m" << std::endl;
	
	return 0;
}

/*
 referência para um objeto do tipo ifstream, o número da unidade e a 
quantidade de linhas que devem ser lidas
argumento padrão igual a 10 para a quantidade de linhas.
*/