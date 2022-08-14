#include <iostream>
#include <windows.h> 
#include <math.h>
#include "indiceIMC.h"

using namespace std;

int main()
{
	SetConsoleCP(1252); // entrada
	SetConsoleOutputCP(1252); // saída

	float altura, massa;
	cout << "Índice de Massa Corporal (IMC)\n ------------------------\n";
	cout << "Altura: ";
	cin >> altura;
	cout << "Massa: ";
	cin >> massa;
	cout << "IMC: \a" << indiceIMC(altura, massa) << endl;

}



/*
float indiceIMC(float altura, float massa) {

	float imc = massa / (powf(altura, 2));
	return imc;
}

Índice de Massa Corporal (IMC)
------------------------
Altura: 1.78
Massa: 75
IMC: 23.6713*/