#include <iostream>
using namespace std;

struct balao
{
	float diametro; // di�metro em metros
	char marca[20]; // nome da marca
	int modelo; // n�mero do modelo
};

int main()
{
	int* pt = new int {100};
	cout << "Conte�do armazenado: " << *pt << endl;
	cout << "Digite novo valor para esse bloco de mem�ria: ";
	cin >> *pt;
	cout << *pt << endl;
	delete pt;
}