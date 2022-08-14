// isalnum nao funciona com acentos: '�' '�', iswalnum nao conta eles como alfanum. (0)
#include <iostream> 
#include <cctype>
using namespace std;

int ContarPalavras(const char* str) {
	int numPalavras = 0;
	int andaI = 0;

	for (int i = 0; i < strlen(str); i += andaI)
	{
		andaI = 0;

		if (iswalnum(str[i])) {
			numPalavras++;
			while (iswalnum(str[i + andaI]))
			{
				andaI++;
			}
		}
		else i++;
	}
	return numPalavras;
}

int main() {
	const char* frase = "Hoje em dia e dificil conhecer tudo...he he";
	char ch;
	
	cout << "Numero de palavar: " << ContarPalavras(frase) << endl;
	//cout << int('�');
	
	return 0;
}

/*
Entre com uma frase: 
Hoje em dia � dif�cil conhecer tudo. 
Existem 7 palavras nesta frase!
*/