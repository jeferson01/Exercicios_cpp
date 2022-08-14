#include <iostream>
using namespace std;

int main()
{
	cout << "Entre com 2 numeros: ";

	char num1[8];
	int num2, numTotal;
	cin >> num1;
	cin >> num2;

	numTotal = atoi(num1) * num2;
	cout << "A multiplicacao entre eles eh " << numTotal;

	return 0;
}

