#include <iostream>
#include <windows.h> 
using namespace std;

float mediaHarm(float, float);

int main()
{
	SetConsoleCP(1252); // entrada
	SetConsoleOutputCP(1252); // sa�da

	float x, y;
	cout << "Entre com o um n�mero : ";
	cin >> x;
	cout << "Entre com o outro n�mero : ";
	cin >> y;

	cout << endl;

	cout << "A m�dia harm�nica dos n�meros � " << mediaHarm(x, y);
}

float mediaHarm(float x, float y) {

	float media = (2.0f * ( x * y)) / (x + y);
	return media;
}

/*Entre com um n�mero: 4.4
Entre com outro n�mero: 6.2
A m�dia harm�nica dos n�meros � 5.14717*/