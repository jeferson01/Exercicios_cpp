
#include <iostream>
#include <cstdlib>
#include<time.h>
#include <locale>
using namespace std;
void simples(void);

int main()
{
	locale::global(locale{ "pt-BR" });

	srand(time(0) + 123); // seed set to rand function
	int myRand;
	cout << time(0) << endl;

	for (int i = 0; i < 8; i++)
	{
		myRand = rand() %10; // generate between 0-9
		cout << myRand << endl;
	}
	simples();

}

void simples()
{
	cout << "essa é uma função simples" << endl;
}
