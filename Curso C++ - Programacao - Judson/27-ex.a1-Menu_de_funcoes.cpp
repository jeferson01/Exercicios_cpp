// 
#include <iostream> 
#include <fstream>
using namespace std;
//typedef double (*funcPt) (double, double); // apelido de ponteiro p/ funcao

void Inserir() {
	cout << "Item inserido." << endl;
}
void Remover() {
	cout << "Item removido." << endl;
}
void Buscar() {
	cout << "Buscando item.." << endl;
}
void Sair() {
	cout << "Saindo..programa terminado." << endl;
}

int main() {

	void (*pt[4])(void) = {Inserir, Remover, Buscar, Sair};

	cout << "\nMenu do Sistema \n"
		"1) Inserir\n"
		"2) Remover\n"
		"3) Buscar\n"
		"4) Sair\n"
		"Escolha: ";

	int num = 0;
	// primeiro verifica se o ultimo (num) escolhido foi 4 (Sair), depois escolhe num.
	while (num != 4 && cin >> num) 
	{
		if (num >= 1 && num <= 4) {
			pt[num - 1](); // chama a funcao do ponteiro pt[x]()
		}
		else cout << "numero invalido..\n";
	}

	cout << endl << "fim de programa.";
	return 0;
}
/*
Menu do Sistema
1) Inserir
2) Remover
3) Buscar
4) Sair
Escolha:
*/
