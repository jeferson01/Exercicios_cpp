//std::cout << std::setw(5) << std::setfill('0') << 1;
#include <iostream>
using namespace std;

struct Login {
	char nome[12];
	int senha;
	
};


int main()
{
	cout << boolalpha; // show true or false
	Login admin = { "Jose", 35 };

	cout << "Digite seu nome e senha :";
	Login user;
	cin >> user.nome >> user.senha;
	bool verificarNome, verificarSenha;
	int i;
	for (i = 0; admin.nome[i] == user.nome[i]; i++)
		{void;}
	cout << i;

	verificarNome = (i-1) == strlen(admin.nome);
	verificarSenha = admin.senha == user.senha;
	cout << "\n***Login e senha :***\t" << (verificarNome && verificarSenha);
}

