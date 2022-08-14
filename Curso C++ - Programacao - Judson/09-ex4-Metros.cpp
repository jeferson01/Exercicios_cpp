#include <iostream>
using namespace std;


int main(int argc, char** argv) {

	const int KM_METROS = 100000;
	const int CM_METROS = 100;


	cout << "Entre com a distancia em centimetros : ";
	int centimetrosTotal;
	cin >> centimetrosTotal;
	
	int quilometros = centimetrosTotal / KM_METROS;
	int resto = centimetrosTotal % KM_METROS;
	int metros = resto / CM_METROS;
	int centim = resto % CM_METROS;
	

	cout << centimetrosTotal << " centimetros equivalem a " << quilometros << " quilometros, e "
		 << metros << " metros e " << centim << " centimetros.---";

		//22800 metros equivalem a 22 quilômetros e 800 metros.
}

/*	cout << "Entre com a distância em metros : ";
	int metros;
	cin >> metros;
	
	int quilometros = metros / KM_METROS;
	int resto = metros % KM_METROS;
	
	cout << "equivalem a " << quilometros << " quilômetros e "
		 << resto << "metros.";
*/