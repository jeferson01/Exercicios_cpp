#include <iostream>
#include <windows.h> 
using namespace std;

float mediaHarm(float, float);

int main()
{
	SetConsoleCP(1252); // entrada
	SetConsoleOutputCP(1252); // saída

	float x, y;
	cout << "Entre com o um número : ";
	cin >> x;
	cout << "Entre com o outro número : ";
	cin >> y;

	cout << endl;

	cout << "A média harmônica dos números é " << mediaHarm(x, y);
}

float mediaHarm(float x, float y) {

	float media = (2.0f * ( x * y)) / (x + y);
	return media;
}

/*Entre com um número: 4.4
Entre com outro número: 6.2
A média harmônica dos números é 5.14717*/