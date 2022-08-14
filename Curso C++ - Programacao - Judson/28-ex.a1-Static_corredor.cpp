// static nao eh liberada no fim da funcao
#include <iostream>
using namespace std;


float TempoDaVolta( float tempo) {
	static float tempoTotal = 0;
	return tempoTotal += tempo;
}


int main()
{
	float tempo;
	cout << "Digite a quantidade de segundos da volta: ";
	while (cin >> tempo)
	{
		cout << "Tempo total: " << TempoDaVolta(tempo) << " segundos." << endl;
		cout << "Volta: ";
	}
	
	//cout << TempoDaVolta(2.0) << endl;

	return 0;
}