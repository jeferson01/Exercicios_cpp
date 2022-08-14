#include <math.h>
#include <iostream>
#include <iomanip>
using namespace std;

float indiceIMC(float altura, float massa) {
	float imc = massa / (powf(altura, 2));
	return imc;
}

float imc(float altura, float massa) {

	float imc = massa / (powf(altura, 2));
	cout << imc << endl;
	cout << fixed << setprecision(6) << imc << endl;
	cout << fixed << setprecision(10) << imc << endl;
	return imc;
}

double imc(double altura, double massa) {
	double imc = massa / (powf(altura, 2));
	cout << imc << endl;
	cout << fixed << setprecision(6) << imc << endl;
	cout << fixed << setprecision(10) << imc << endl;
	return imc;
}