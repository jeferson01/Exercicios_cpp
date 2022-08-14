#include <iostream>
using namespace std;

int main()
{
	char senha[8] = { "123" };
	char tentativa[8];

	cout << "Digite a senha: ";
	cin.get(tentativa, 8); 
	cout << tentativa << endl;

	if (strcmp(tentativa,senha) == 0) { // string comparte strcmp
		cout << "Senha correta!" << endl;
	}
	else { cout << "Senha incorreta!"; }

	return 0;
}

