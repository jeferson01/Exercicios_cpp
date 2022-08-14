#include <windows.h> 
#include <iostream> 
using namespace std;

int main()
{
	SetConsoleCP(1252); // entrada
	SetConsoleOutputCP(1252); // saída

	char nome[20];
	cout << "coração" << endl; // exibe "coração"
	cin >> nome; // digitando "coração"
	cout << nome; // exibe "coração"
}