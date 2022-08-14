#include <iostream>
using namespace std;

struct peixe
{
	char tipo[20];
	float peso;
	unsigned comp;
};

void exibir(peixe* pt) {
	cout << "Tipo: " << pt[1].tipo;
	cout << " Peso: " << pt[1].peso;
	cout << " Comprimento: " << pt[1].comp;
}
void exibirPeso(peixe * pt) {
	pt[1].peso += 1;
	cout << endl;
	cout << "O peso do peixe eh " << pt[1].peso <<" gramas." << endl;
}

int main()
{
	peixe tilapia = { "tilapia", 3.2, 54 };

	cout << "Tamanho do vetor: ";
	int vetSize;
	cin >> vetSize;

	peixe *pt = new peixe[vetSize] {};
	
	strcpy_s(pt[1].tipo, "baguari");
	pt[1].peso = 3.8;
	pt[1].comp = 64;

	exibir(pt);
	exibirPeso(pt);
	cout << "O peso do peixe eh " << pt[1].peso << " gramas." << endl;

	//pt->tipo[0] = 'T';
	delete []pt;
}