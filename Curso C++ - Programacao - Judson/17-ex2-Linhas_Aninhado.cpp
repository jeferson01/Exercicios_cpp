//std::cout << std::setw(5) << std::setfill('0') << 1;
#include <iostream>
using namespace std;

int main()
{
	cout << "Entre com o numero de linhas: ";
	int linhas; cin >> linhas;

	for (int i = 0; i < linhas; i++)
	{
		for (int j = 0; j < linhas-i - 1; j++)
		{
			cout << ".";
		}
		for (int j = 0; j <= i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	
}

