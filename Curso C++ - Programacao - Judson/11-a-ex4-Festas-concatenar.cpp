#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include <string>
using namespace std;


int main()
{
	cout << "Quais suas 3 datas comemorativas preferidas? \n";
	char data1[12];
	char data2[12];
	char data3[12];
	cin.getline(data1, 14);
	cin.getline(data2, 14);
	cin.getline(data3, 14);

	char dataConcatenada[64] = { };
	strcpy(dataConcatenada, data1);
	strcat(dataConcatenada, ", ");
	strcat(dataConcatenada, data2);
	strcat(dataConcatenada, " e ");
	strcat(dataConcatenada, data3);
	strcat(dataConcatenada, " sao belas festas.");

	cout << dataConcatenada << endl;

	char natal[] = { "Natal" };
	if ( (strcmp(natal, data1) == 0) || (strcmp(natal, data2) == 0) || (strcmp(natal, data3) == 0) ) {
		cout << "O Natal também eh uma das minhas datas preferidas!\n";
	}

	return 0;
}

/* Carnaval
Natal
Ano Novo
Carnaval, Natal e Ano Novo são belas festas.
strcmp(natal, data2) | strcmp(natal, data3)) == 0
*/