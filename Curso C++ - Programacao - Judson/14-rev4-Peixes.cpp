#include <iostream>
using namespace std;

struct Peixe
{
	char tipo[16];
	float peso;
	int comprimento;
};
void exibir(Peixe* peixe) {
	cout << peixe->tipo << endl
		 << peixe->peso << " Kg" << endl
		 << peixe->comprimento << " cm" << endl;
}

int main()
{
	Peixe tilapia = { "Tilapia", 2.5, 60 };

	Peixe *pt = &tilapia;
	exibir(pt);
}