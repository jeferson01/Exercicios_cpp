#include <iostream>
#include <cstring>
#include <stdlib.h> 
using namespace std;


int main()
{
	cout << "Digite a distancia em km: ";
	float custo = 0;
	int km;
	cin >> km;

	if (km <= 200){
		custo = km * 0.50f;
	}
	else if (km <= 400) {
		custo = km * 0.40f;
	}
	else{ 
		custo = km * 0.30f;
	}

	cout << "\nO custo da viagem eh de R$" << custo << endl;

}

/*R$0,50 por Km para viagens de até 200Km, 
R$0,40 por Km para viagens até 400Km, 
e R$0,30 por Km para viagens mais longas.*/