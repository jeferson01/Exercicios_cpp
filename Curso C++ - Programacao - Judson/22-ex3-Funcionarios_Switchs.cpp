#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

struct bop {
	char nome[50]; // nome do funcionário
	char cargo[50]; // cargo que ocupa na empresa
	char apelido[50]; // apelido do funcionário
	int pref; // 0 = nome, 1 = cargo, 2 = apelido
};
void ExibirMenu() {
	cout << std::endl
		 << "a. Mostrar por nome\n"
		 << "b. Mostrar por cargo\n"
		 << "c. Mostrar por apelido\n"
		 << "d. Mostrar por preferência\n"
		 << "e. Sair\n";
}

int main()
{
	bop registros[3] = {
		{"Jose", "Seguranca", "Piruleta", 0},
		{"Carlos", "CEO", "Oreia", 1},
		{"Francisco", "Porteiro", "Marquito", 2},
	};

	cout << "Listagem de Funcionários\n";
	ExibirMenu();
	
	char escolha;
	cout << endl << "Digite a sua opcao: ";
	cin.get(escolha);

	bool saida = false;
	while (!saida)
	{
		switch (escolha)
		{
		case 'a':
			for (int i = 0; i < 3; i++)
				cout << registros[i].nome << endl; 
			break;
		case 'b':
			for (int i = 0; i < 3; i++)
				cout << registros[i].cargo << endl; 
			break;
		case 'c':
			for (int i = 0; i < 3; i++)
				cout << registros[i].apelido << endl; 
			break;
		case 'd':
			for (int i = 0; i < 3; i++) {
				if (registros[i].pref == 0)
					cout << registros[i].nome << endl;
				if (registros[i].pref == 1)
					cout << registros[i].cargo << endl;
				if (registros[i].pref == 2)
					cout << registros[i].apelido << endl;
			}
			break;
		case 'e':
			cout << "Tchau!" << endl; 
			saida = true;
			break;

		default: break;
		}
		if (!saida) {
			cout << "\nDigite a sua opcao: ";
			cin.ignore(); cin.get(escolha); // limpa o /n do buffer
		}
	}
}
