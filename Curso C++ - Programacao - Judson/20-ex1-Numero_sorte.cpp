//std::cout << std::setw(5) << std::setfill('0') << 1;
#include <iostream>
#include <cstring>
#include <stdlib.h> 
#include <time.h> 
using namespace std;

int main()
{
	srand(time(NULL));
	int num = rand() % 10+1;
	int guess;
	cout << "Digite um numero de 0 a 10: ";
	cin >> guess;
	while (guess != num)
	{
		if (guess < num) cout << "muito baixo!\n";
		else cout << "muito alto!\n";
		cout << "Tente novamente: ";
		cin >> guess;
	}
	cout << "O numero correto eh: " << num << endl;

}

