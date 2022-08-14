// uniao de 2 vetores em 1 vet dinamico
#include <iostream>
#include <fstream>
using namespace std;


int subst(char* str, char c1, char c2) {
	// subst c1 por c2
	int count = 0;

	for (int i = 0; i < strlen(str); i++)
	{
		str[i] == c1 ? str[i] = c2, count++ : NULL;
	}

	return count;
}

int main() {
	char frase[] = {  "Bicho piruleta, dilovo dilovo"};
	char ch = 'u';

	cout << endl;
	cout << subst(frase, frase[4], ch) << " substituicoes, frase: " << frase << endl;

	return 0;
}



/*

*/
