#include <iostream>
using namespace std;

struct balao
{
	float diametro; // diâmetro em metros
	char marca[20]; // nome da marca
	int modelo; // número do modelo
};

int main()
{
	int* pt = new int {100};
	cout << "Conteúdo armazenado: " << *pt << endl;
	cout << "Digite novo valor para esse bloco de memória: ";
	cin >> *pt;
	cout << *pt << endl;
	delete pt;
}