#include <iostream>
#include <windows.h> 
using namespace std;

void showTime(int, int);

int main()
{
	SetConsoleCP(1252); // entrada
	SetConsoleOutputCP(1252); // sa�da

	int h, m;
	cout << "Entre com o n�mero de horas : ";
	cin >> h;
	cout << "Entre com o n�mero de minutos : ";
	cin >> m;

	cout << endl;


	showTime(h, m);
}

void showTime(int h, int m) {
	cout << "Agora s�o " << h << ":" << m;
}