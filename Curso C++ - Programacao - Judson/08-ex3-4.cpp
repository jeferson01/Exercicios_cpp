#include <iostream>
#include <bitset>
#include "trabalho1-genetico.h"
#include "indiceIMC.h"
using namespace std;

double MoleculaAgua(void);
double IdadeSegundos(void);

int main() {
	MoleculaAgua();
	return 0;

	cout << IdadeSegundos() << endl;
	cout.setf(ios_base::fixed, ios_base::floatfield);
	//cout.precision(1);
	cout << IdadeSegundos();


	//imc(1.75f, 80.0f);
	//imc(1.75, 80);

	unsigned short bit1 = 31564;
	unsigned short bit2 = 124;
	//cout << CruzamentoPontoUnico(bit1, bit2);
}

double MoleculaAgua(void) {

	double galoesDeAgua;
	cout << "Digite a quantidade de galoes de agua: ";
	cin >> galoesDeAgua;
	double gramas = 3800.0 * galoesDeAgua;
	double molecula = 3.0E-23;
	molecula = (1.0 / molecula) * gramas;  // quantidade de mol em 1 grama * gramas
	cout << molecula;
	return molecula;
}

double IdadeSegundos(void) {
	cout << "Digite sua idade em anos :";
	int idade;
	cin >> idade;
	double segundosAno = 3.156E+7;

	double idadeEmSegundos = idade * segundosAno;
	return idadeEmSegundos;
}
