#include <iostream>
using namespace std;

struct peixe
{
	char tipo[20];
	float peso;
	unsigned comp;
};

int main()
{
	cout << "Digite o número de alunos(mínimo 2) : ";
	int vec;
	cin >> vec;
	float* notas = new float[vec];

	cout << "Digite a nota de dois alunos: ";
	cin >> notas[0] >> *(notas+1); // alternative with warning: notas[0] >> notas[1]
	cout << "As notas digitadas foram " << *notas << " e " << *(notas + 1);
	cout << endl;

	delete []notas;

}