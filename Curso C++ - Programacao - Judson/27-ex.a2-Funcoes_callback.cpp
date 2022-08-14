// funcao Enumerate chama a funcao passada p/ cada membro Controller criado
// a vantagem q é possivel adicionar novas funcoes sem mudar a Enumerate. Ex: ListarBotoes()
#include <iostream>
using namespace std;

struct Controller
{
	char name[40];
	int buttons;
	int axis;
};

void ListarNomes(Controller controll) {
	cout << controll.name << endl;
}
void ListarEixos(Controller controll) {
	cout << "eixos: " << controll.axis << endl;
}

void Enumerate(void(*f)(Controller))
{
	Controller vet[] = { {"Joy", 8, 4}, {"Xbox", 10, 3}, {"Play", 8, 6} };
	for (Controller i : vet) // auto i
		f(i); // funcao que foi recebida
}

int main()
{
	Enumerate(ListarNomes); 
	Enumerate(ListarEixos);


	return 0;
}
/*

*/
