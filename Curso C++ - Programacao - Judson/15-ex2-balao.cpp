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
	balao* bal = new balao;
	cout << "digite o diametro do balao : ";
	cin >> bal->diametro;
	cout << "digite a marca do balao : ";
	cin >> bal->marca;
	cout << "digite o numero do balao : ";
	cin >> bal->modelo;
	cout << bal->diametro << " - " << bal->marca << endl;
	cout << bal << endl;
	
	delete bal;
}