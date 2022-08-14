#include <iostream>
using namespace std;

int main()
{
	char nome[] = "C++ Primer Plus";
	cout << strlen(nome) << endl;
	cout << sizeof(nome) << endl;
	
	cout << "Digite uma palavra : ";
	char palavra[12];
	cin >> palavra;

	cout << "Em " << palavra << " a ultima letra eh ";
	cout << palavra[strlen(palavra) -1];

	return 0;
}

