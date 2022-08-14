#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main()
{
	cout << "Menu do Sistema" << endl << endl;
	cout << "a) Inserir\nb) Remover\nc) Buscar\nd) Sair\n";

	char ch;
	cout << "\nEscolha :";
	cin.get(ch);

	while (ch != 'd')
	{
		switch (ch)
		{
		case 'a':
			cout << "Inserindo elementos..." << endl; break;

		case 'b':
			cout << "Removendo elementos..." << endl; break;

		case 'c':
			cout << "Buscando elementos..." << endl; break;

		//case 'd':
		//	cout << "Inserindo elementos..." << endl; break;

		default:
			cout << "Opcao Invalida" << endl;
			break;
		}
		cout << "\nEscolha :";
		cin.get(); cin.get(ch);
	}
	
	cout << "Tchau!";
	return 0;
}
