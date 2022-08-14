#include <iostream>
using namespace std;



int main(int argc, char** argv) {

	//31600000 segundos = 365 dias, 17 horas, 46 minutos e 40 segundos
	//60 3600 86400 
	cout << "Entre com o número de segundos : ";
	int segundos;
	cin >> segundos;

	const int HORAS = 24;
	const int MINS = 60;
	const int SEGS = 60;

	cout << segundos << " segundos = ";
	cout << segundos / (HORAS * MINS * SEGS) << " dias, ";
	cout << (segundos % (HORAS * MINS * SEGS))  / (MINS*SEGS) << " horas, " << endl;
	cout << (segundos % (MINS * SEGS)) / (SEGS) << " minutos; " << endl;
	cout << segundos % SEGS  << " segundos; " << endl;

	return 0;
}

/*
int main()
{
	const int HORASDIA = 24;
	const int MINHORAS = 60;
	const int SEGMIN = 60;

	cout << "Entre com o numero de segundos: ";

	int segundos;
	cin >> segundos;

	int dias, horas, min, seg;
	int resto;

	dias = segundos / (HORASDIA * MINHORAS * SEGMIN);
	resto = segundos % (HORASDIA * MINHORAS * SEGMIN);
	horas = resto / (MINHORAS * SEGMIN);
	resto = resto % (MINHORAS * SEGMIN);
	min = resto / SEGMIN;
	seg = resto % SEGMIN;

	cout << segundos << " segundos = "
		<< dias << " dias, "
		<< horas << " horas, "
		<< min << " minutos e "
		<< seg << " segundos.\n";

	return 0;
}*/