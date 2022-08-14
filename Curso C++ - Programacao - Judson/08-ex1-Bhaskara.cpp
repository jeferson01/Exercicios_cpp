#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

void Bhaskara(float a, float b, float c) {

	float delta = (b * b) - 4 * a * c;
	float x1 = (-b + sqrt(delta) ) / (2 * a);
	float x2 = (-b - sqrt(delta)) / (2 * a);

	float quadratica = a * (x1 * x1) + (b * x1) + c;

	cout << "Delta = " << delta << endl;
	cout << "X1 = " << x1 << endl << "X2 = " << x2 << endl;


	//cout << delta << endl << x1 << endl << x2 << endl << quadratica << endl;
}