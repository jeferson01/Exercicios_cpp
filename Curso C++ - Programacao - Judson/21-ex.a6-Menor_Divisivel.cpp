#include <iostream>
#include <cstring>
#include <stdlib.h> 
//using namespace std;
using std::cout;
using std::cin;


int main()
{
	const int num = 10; // maximo range de divisiveis: 1 ate num.
	//int count = 5000000;
	int achou = 0;

	for (int i = num+1; achou < 10 ; i++) //come�a 1 a mais que o range, menos deixa resto sempre.
	{
		for (int j = 1; j < num+1; j++)
		{
			if (i % j != 0)
				j = num;
			else if (i % j == 0 && j == num) {
				cout << "\n" << achou + 1 << "� menor numero divisivel de 1 ate " << num << ": " << i;
				achou++;
			}
		}
	}
}

/* 2520 � o menor n�mero que pode ser 
dividido por cada um dos n�meros de 1 a 10
*/