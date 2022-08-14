// funcoes agora recebem endereço de Gastos, e modificam/exibem sem fazer copia.
#include <iostream> 
#include <array>
#include <string> 
using namespace std;

const char* Mes[] = {"Marco", "Abril", "Junho", "Julho"};

struct Gastos
{
	double gastos[4];
};

void preencher(Gastos *);
void mostrar(const Gastos*);

int main()
{
	Gastos gastos;

	preencher(&gastos);
	mostrar(&gastos);
	return 0;
}

void preencher(Gastos* vet) {
	for (int i = 0; i < 4; i++) {
		cout << "Entre com o gasto de " << Mes[i] << ": ";
		cin >> vet->gastos[i]; // (*vet)[i]; 
	}
}
void mostrar(const Gastos* vet)
{
	double total = 0.0;
	cout << "\nGastos\n";
	for (int i = 0; i < 4; i++)
	{
		cout << Mes[i] << ": R$" << vet->gastos[i] << endl; 
		total += vet->gastos[i];
	}
	cout << "Total de gastos: R$" << total << endl;
}

/*
use vetores comuns de const char * para 
as strings representando os meses, e use um vetor comum de double’s para os gastos.
*/