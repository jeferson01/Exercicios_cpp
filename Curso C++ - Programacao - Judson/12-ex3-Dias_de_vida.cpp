#include <iostream>
#include <cstring>
#include <math.h>
using namespace std;

struct Data {
	short dia, mes, ano;
	

	short DiasdeVida(Data nascimento, Data dat) {

		short totalDias = dat.dia - nascimento.dia;
		short totalMeses = (dat.mes - nascimento.mes) * 31;
		short totalAnos = (dat.ano - nascimento.ano) * 365;
		short total = totalDias + totalMeses + totalAnos;
		return total;
	}

};

void exibir(Data);
short operator-(Data, Data);

int main()
{
	cout << "Data de nascimento: ";
	Data nascimento = {};
	cin >> nascimento.dia; 
	cin.ignore();
	cin >> nascimento.mes;
	cin.ignore();
	cin >> nascimento.ano;

	cout << "Data de hoje: ";
	Data atual = {};
	cin >> atual.dia;
	cin.ignore();
	cin >> atual.mes;
	cin.ignore();
	cin >> atual.ano;

	cout << "Voce tem " << nascimento.DiasdeVida(nascimento, atual) << " dias de vida." << endl;
	//exibir(nascimento);
	//exibir(atual);
	cout << "dias faltando p/ aniversario esse ano: " << atual - nascimento << endl;
	return 0;
}

void exibir(Data dat) {
	cout << dat.dia << "/"
		<< dat.mes << "/"
		<< dat.ano << endl;
}
short operator-(Data dat1, Data dat2) {
	return ((dat1.dia - dat2.dia) + (dat1.mes - dat2.mes)*31)*-1;
}