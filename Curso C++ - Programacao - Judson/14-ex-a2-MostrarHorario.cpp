#include <iostream>
using namespace std;

struct Horario {
	short horas;
	short minutos;
};

void MostrarHorario(Horario* pt) {
	pt->horas = (pt->horas+1) % 24; // modulo de 24 horas

	cout << "Seu relogio esta atrasado, o horario correto eh ";
	cout.fill('0') << cout.width(2); // leading zero
	cout << pt->horas << ":";
	cout.fill('0') << cout.width(2);
	cout << pt->minutos;
}

int main()
{
	Horario hora1 = { 22, 7 };
	Horario* pt = &hora1;
	MostrarHorario(pt);
	
}

