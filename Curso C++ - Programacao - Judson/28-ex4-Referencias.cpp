// modificando referencias
#include <iostream>
using namespace std;

struct par { int x; int y; };

void Calcular(const par& xy, int& soma, int& mult) {
	soma = xy.x + xy.y;
	mult = xy.x * xy.y;
}


int main()
{
	int soma = 0, mult = 0;
	par xy = { 2,5 };
	Calcular(xy, soma, mult);

	cout << "soma: " << soma << endl;
	cout << "mult: " << mult << endl;

	return 0;
}