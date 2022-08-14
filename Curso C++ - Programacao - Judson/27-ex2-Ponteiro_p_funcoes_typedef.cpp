// funcao Calcular() recebe um ponteiro para uma funcao q retorna 
// double e recebe 2 doubles como argumento.
#include <iostream> 
#include <fstream>
using namespace std;
typedef double (*funcPt) (double, double); // apelido de ponteiro p/ funcao

double soma(double x, double y)
{
	return x + y;
}
double multiplicar(double x, double y)
{
	return x * y;
}

double Calcular(double x, double y, funcPt pt)
{
	// pt = ponteiro para funcao que retorna double
	return pt(x, y);
}

int main() {

	cout << "Digite pares de numeros:\n";
	double a, b;
	while (cin >> a && cin >> b) {
		cout << "soma: " << Calcular(a, b, soma) << endl;
		cout << "mult: " << Calcular(a, b, multiplicar) << endl;
	}

	cout << "fim de calculo." << endl;
	return 0;
}

