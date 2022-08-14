// funcao Calcular() recebe um ponteiro para uma funcao q retorna 
// double e recebe 2 doubles como argumento.
#include <iostream> 
#include <fstream>
using namespace std;
typedef double (*funcPt) (double, double); // apelido de ponteiro p/ funcao


double soma(double x, double y)
{ cout << "soma: "; return x + y; }

double multiplicar(double x, double y)
{ cout << "multip: "; return x * y; }

double quadradoSoma(double x, double y)
{
	cout << "soma do quadrado: ";
	return (x * x) + (y * y);
}


double Calcular(double x, double y, funcPt pt)
{
	// pt = ponteiro para funcao que retorna double
	return pt(x, y);
}

int main() {

	cout << "Digite pares de numeros:\n";
	double a, b;
	funcPt ptVet[3] = { soma, multiplicar, quadradoSoma }; // vetor de ponteiro de funcoes

	while (cin >> a && cin >> b) {
		for (int i = 0; i < 3; i++)
		{
			cout << "calculo " << i+1 << "- " << Calcular(a, b, ptVet[i]) << endl;
		}
		//cout << "soma: " << Calcular(a, b, soma) << endl;
		//cout << "mult: " << Calcular(a, b, multiplicar) << endl;
	}

	cout << "fim de calculo." << endl;
	return 0;
}

