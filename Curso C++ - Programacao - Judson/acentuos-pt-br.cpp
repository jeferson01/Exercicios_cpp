#include <windows.h> 
#include <iostream> 
using namespace std;

int main()
{
	SetConsoleCP(1252); // entrada
	SetConsoleOutputCP(1252); // sa�da

	char nome[20];
	cout << "cora��o" << endl; // exibe "cora��o"
	cin >> nome; // digitando "cora��o"
	cout << nome; // exibe "cora��o"
}