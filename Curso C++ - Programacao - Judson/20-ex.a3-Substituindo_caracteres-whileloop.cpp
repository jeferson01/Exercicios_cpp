#include <iostream>
#include <cstring>
#include <stdlib.h> 
using namespace std;

int main()
{
	char vet[100];
	char novaFrase[100] = {};
	int subst = 0, shift = 0;

	cout << "Digite um texto (# para finalizar):\n";
	
	int i; // contador do loop
	do
	{
		memset(novaFrase, 0, sizeof novaFrase); // reseta novaFrasepra zero \0
		cin.getline(vet, 100); cin.clear();
		vet[99] = '\0'; // garante saida no ultimo caractere

		//cancela ao encontrar \0 ou #
		for (i = 0, shift = 0; vet[i] != '\0' && vet[i] != '#'; i++)
		{
			// nova posicao da nova frase = i + shift
			if (vet[i] == '.') {
				novaFrase[i + shift] = '!';
				subst++;
			}
			else if (vet[i] == '!') {
				novaFrase[i + shift] = '!';
				novaFrase[i + 1 + shift] = '!';
				shift++;
				subst++;
			}
			else novaFrase[i + shift] = vet[i];
		}
		cout << novaFrase << endl;
		

	} while (vet[i] != '#');

	cout << "\nSubstituicoes: " << subst << endl;
	return 0;
}

/*Ontem eu andei sob chuva forte! Eram 12 em ponto.
  Ontem eu andei sob chuva forte!! Eram 12 em ponto!
Fiquei sujo e molhado. Que tristeza!# Ainda peguei uma gripe.
Fiquei sujo e molhado! Que tristeza!!
Substituições: 4
*/

