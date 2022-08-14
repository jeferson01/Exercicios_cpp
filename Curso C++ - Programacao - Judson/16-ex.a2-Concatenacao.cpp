#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;



int main(void)
{
	cout << "Digite 4 palavras: ";
	char palavra1[16];
	char palavra2[16]; char palavra3[16], palavra4[16];
	cin >> palavra1 >> palavra2 >> palavra3 >>palavra4;

	int vet = strlen(palavra1) + strlen(palavra2) + strlen(palavra3) + strlen(palavra4);
	char *concaten = new char[vet+4] {};

	for (int i = 0; palavra1[i]; i++) {
		 concaten[ strlen(concaten)] = palavra1[i]; // ultimo elem. de concaten
	}
	concaten[strlen(concaten)] = ' '; // adiciona espaço no ultimo elemento.
	for (int i = 0; palavra2[i]; i++) {
		concaten[strlen(concaten)] = palavra2[i];
	}
	concaten[strlen(concaten)] = ' ';

	strcat(concaten, palavra3);
	concaten[strlen(concaten)] = ' ';
	strcat(concaten, palavra4);

	cout << "Concatenando as palavras obtem-se: ";
	cout << concaten << endl;
	delete []concaten;
	return 0;
}

/*	char result[100];
	strcpy_s(result, palavra1);
	strcat_s(result, palavra2);
	strcat_s(result, palavra3);
	strcat_s(result, palavra4);
	
	//strcar
	strcpy_s(concaten,vet+4, result);
	cout << concaten;
	//strcpy_s(palavra2, concaten);
	//strcpy_s(*concaten, palavra1);*/