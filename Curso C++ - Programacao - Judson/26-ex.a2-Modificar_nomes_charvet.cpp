// erro com acentos 'é'
// remove acentos tolower/toupper. Menos de 2 letra = tudo minusculo.
#include <iostream> 
#include <cctype>
using namespace std;

void ModificarNome(char* strInicio, char* strFim) {

	int j = strFim - strInicio; // tamanho da palavra
	if (j > 2) {
		strInicio[0] = towupper(strInicio[0]);
		for (strInicio++; strInicio != strFim; strInicio++)
			*strInicio = towlower(*strInicio);
	}
	else {
		for (strInicio; strInicio != strFim; strInicio++)
			*strInicio = towlower(*strInicio);
	}
}

bool CorrigirNome(char* str) {
	bool foiCorrigido = 0;
	char *copiaStr = new char[strlen(str) +1] {}; // comparar no final //cout << copiaStr;
	strcpy_s(copiaStr, strlen(str)+1, str );

	for (int i = 0; i < strlen(str); )
	{
		if (!isspace(str[i])) {
			int j = 1;
			while (!isspace(str[i + j]) && str[i + j] != '\0')
			{
				j++;
			}
			// enviar para func, e la sera decidido se eh um nome ou 2 letras minusculas.
			ModificarNome(str + i, str + i + j); // endereço de inicio e fim.

			i += j;
		}
		else i++;
	}
	
	foiCorrigido = strcmp(str, copiaStr); // 0= igual / outro= diferente string
	delete[]copiaStr;

	return foiCorrigido;
}



int main() {

	cout << "\nEntre com os nomes dos aprovados (fim para encerrar):\n";

	char nome[50];
	cin.getline(nome, 50);
	while (!(nome[0] == 'f' && nome[1] == 'i' && nome[2] == 'm'))
	{
		bool foiCorrigido = CorrigirNome(nome);

		cout << nome << "\t <--- ";
		foiCorrigido ? (cout << "Corrigido\n") : (cout << "OK\n");

		cin.getline(nome, 50);
	}


	return 0;
}

/*
Entre com os nomes dos aprovados (fim para encerrar): 
Pedro henrique augustiNO 
Pedro Henrique Augustino <-- Corrigido 
joão baldo de albuquerque 
João Baldo de Albuquerque <-- Corrigido
RIVALDO VIANA DA CRUZ 
Rivaldo Viana da Cruz <-- Corrigido
Eveline da Silva Bastos 
Eveline da Silva Bastos <-- OK 
fim
*/