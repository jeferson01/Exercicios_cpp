// o sizeof de uma const string* vai retornar 4, o tamanho do ponteiro e nao da string
// exemplo: const char* ch = "Charge"; sizeof(ch) ->> retorna 4.
#include <iostream>
#include <fstream>
using namespace std;

struct Guloseima
{
	char marca[24]; 
	double peso; 
	int calorias;
};

void SetGuloseima(Guloseima& ref, const char* ch = "Charge", double peso = 40.0, int cal = 187) {
	strcpy_s(ref.marca, strlen(ch)+1, ch);
	ref.peso = peso;
	ref.calorias = cal;
}
void ExibirGuloseima(const Guloseima& ref) {
	cout << "Marca: " << ref.marca << endl;
	cout << "Peso: " << ref.peso << endl;
	cout << "Calorias: " << ref.calorias << endl;
}

int main()
{
	Guloseima doce;

	SetGuloseima(doce, "Sonho de Valsa", 55);
	ExibirGuloseima(doce);

	return 0;
}

/*
registro Guloseima, um ponteiro para char, um double e um int e use
os três últimos argumentos como valores do registro. 
Os últimos parâmetros devem ter os valores padrão “Charge”, 40.0, 187.*/