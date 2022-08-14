#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include <math.h>
using namespace std;

struct Data {
	short dia;
	short mes;
	short ano;
};
struct Horario {
	short hora;
	short minuto;
	short segundos;
};
struct Evento {
	Data dataEvento;
	Horario horaEvento;
	char local[36];
};

void exibir(Horario);
short operator-(Horario, Horario);

int main()
{
	Horario tempo = { 19,28,00 };
	Horario tempo2 = {};
	cout << "Digite a hora: ";
	cin >> tempo2.hora; cin.ignore() >> tempo2.minuto;
	//exibir(tempo2);
	cout << "Entre 19:28 e ";
	exibir(tempo2);
	cout << "existem " << tempo2 - tempo << " minutos.";

	return 0;
}

void exibir(Horario dat) {
	cout << dat.hora << "/"
		<< dat.minuto << "/"
		<< dat.segundos << endl;
}

short operator-(Horario inicio, Horario fim) {
	short min = ((fim.hora - inicio.hora)*60) + (fim.minuto - inicio.minuto);

	return min;
}