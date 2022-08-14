// cria memoria dinamica do tamanho da const 'teste' e copia o conteudo desse endereço.
// o valor do argumento padrão deve ser definido no prototipo, na implementacao sera ignorado.
#include <iostream>
#include <cstring>
using namespace std;

struct String
{
	char* str; // ponteiro para a string
	int comp; // comprimento da string (sem contar '\0')
};

// protótipos para ajustar(), mostrar() e mostrar()
void ajustar(String& str, const char chVet[]) {
	str.comp = strlen(chVet);
	str.str = new char[str.comp+1];

	strcpy_s(str.str, str.comp + 1, chVet);
}

void mostrar(const String str, int n = 1) {
	for (int i = 0; i < n; i++)
		cout << "String: " << str.str;
}
void mostrar(const char* ch, int n = 1) {
	for (int i = 0; i < n; i++)
		cout << "Char*: " << ch;
}

int main()
{
	String msg;
	char teste[] = "Realidade de ponteiros e strings\n";

	ajustar(msg, teste); // primeiro argumento é uma referência
	// aloca espaço para guardar cópia de teste
	// ajusta o membro str de msg para apontar
	// para novo bloco, copia teste para o novo
	// bloco e ajusta o membro comp

	mostrar(msg); // mostra o membro String uma vez
	mostrar(msg, 2); // mostra o membro String duas vezes
	teste[0] = 'D';
	teste[1] = 'u';
	mostrar(teste); // mostra a string uma vez
	mostrar(teste, 3); // mostra a string três vezes
	mostrar("Pronto!");
	
	delete[] msg.str;
	return 0;
}

/*
uma para o tipo String e outra para constantes strings, cada uma usando argumentos padrão.
*/