#include <iostream>
#include <cstring>
#include <stdlib.h> 
//using namespace std;
using std::cout;
using std::cin;


int main()
{
	int soma = 0;
	for (int i = 0; i < 1000; i++)
	{
		if (i % 3 == 0 || i % 5 == 0) {
			cout << i << " ";
			soma += i;
		}
	}
	cout << "\nSoma (multiplos 3 e 5): " << soma << std::endl;
}

