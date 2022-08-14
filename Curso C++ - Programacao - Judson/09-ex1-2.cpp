#include <iostream>
using namespace std;



int main(int argc, char** argv) {

	//31600000
	//31600000 segundos = 365 dias, 17 horas, 46 minutos e 40 segundos
	//60 3600 86400 
	cout << "Entre com o número de segundos : ";
	int segundos;
	cin >> segundos;

	const int horas = 24;
	const int minutos = 60;
	const int segs = 60;

	cout << segundos << " segundos = ";
	cout << segundos / (horas * minutos * segs) << " dias, ";
	cout << (segundos % (horas * minutos * segs))  / (minutos*segs) << " horas, " << endl;
	cout << (segundos % (minutos * segs)) / (segs) << " minutos; " << endl;
	cout << segundos % segs  << " segundos; " << endl;

	


	return 0;

	cout << "Digite um ponto - flutuante: ";
	float flutuante;
	cin >> flutuante;
	cout << flutuante << endl;
	cout << scientific << flutuante << endl;
	cout << fixed << flutuante << endl;
	

	double x1 = 25.5;
	double x2 = 3.7;
	int x3 = int(x1) + int(x2); // sem type cast na expressão o resultado no x3 é de 29.
	cout << x3;
}

/*	Digite um ponto - flutuante: 258040.5
	Notação padrão : 258041
	Notação científica : 2.580405e+005
	Notação decimal : 258040.50 */