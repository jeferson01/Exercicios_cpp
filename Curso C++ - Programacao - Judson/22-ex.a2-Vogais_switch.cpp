#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main()
{
	cout << "Digite uma frase (@ para finalizar): ";

	int vet[5] = {};
	char ch;
	cin.get(ch);

	while (ch != '@')
	{
		ch = tolower(ch); // 'A' ou 'a'
		switch (ch) 
		{
		case 'a': vet[0]++; break;
		case 'e': vet[1]++; break;
		case 'i': vet[2]++; break;
		case 'o': vet[3]++; break;
		case 'u': vet[4]++; break;
		default:
			break;
		}
		cout << ch;
		//cin.get(); 
		cin.get(ch);
	}
	
	cout << endl;

	char letra;
	for (int i = 0 ,letra = 'a'; i < 5; i++, letra++)
	{
		cout << char(letra) << ":" << vet[i] << endl;
	}

	return 0;
}

