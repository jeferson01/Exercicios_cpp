// uniao de 2 vetores em 1 vet dinamico
#include <iostream>
#include <fstream>
using namespace std;

struct candidato {
	char nome[30];
	int notas[3];
};

void ExibirCandidato(candidato cand) {
	cout << cand.nome << ", notas: "
		<< cand.notas[0] << ", " << cand.notas[1] << ", " << cand.notas[2] << ".\n";
}
void ExibirCandidatoPtr(const candidato* cand) {
	cout << cand->nome << ", notas: "
		<< cand->notas[0] << ", " << cand->notas[1] << ", " << cand->notas[2] << ".\n";
}

void ExibirCandidatoVetor(const candidato* cand, int n) {

	for (int i = 0; i < n; i++)
	{
		cout << (cand+i)->nome << ", notas: "
			<< cand[i].notas[0] << ", " << cand[i].notas[1] << ", " << cand[i].notas[2] << ".\n";
	}
}

int main() {
	candidato jeff = { "Jeff Freire", {9,7,8} };

	ExibirCandidato(jeff);

	ExibirCandidatoPtr(&jeff); // endereço & foi passado p/ func

	candidato candVet[2] = { jeff };
	candVet[1] = { "Joaozinho Silva", {5,7,10} };
	cout << endl;
	ExibirCandidatoVetor(candVet, 2);

	return 0;
}


/*

*/
