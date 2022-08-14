#include <iostream>
using namespace std;

struct Tigela {
	char estado[12] = "cheia";
	char tipo[12];
};

void Fome(Tigela* pt) {
	strcpy_s(pt->estado, "vazia");
	//pt->tipo[1] = 'a';
}

int main()
{
	Tigela tigela1 = {"cheia", "sopa"};
	Tigela* pt = &tigela1;
	cout << "Antes da janta, tigela: " << tigela1.estado << endl;

	Fome(pt);

	cout << "Depois da janta, tigela: " << tigela1.estado << endl;
	cout << tigela1.tipo << endl;
}

