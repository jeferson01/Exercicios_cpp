// variavel static eh liberada apenas quando a funcao termina.
#include <iostream>
using namespace std;

struct Caixa
{
	char marca[40]; 
	float altura; 
	float largura; 
	float comprimento; 
	float volume; // a * l * c
};

void ExibirCaixa(const Caixa& cx) {
	
	cout << "marca: " << cx.marca << endl;
	cout << "altura: " << cx.altura << endl;
	cout << "largura: " << cx.largura << endl;
	cout << "comprimento: " << cx.comprimento << endl;
	cout << "volume: " << cx.volume << endl;
}
void VolumeCaixa(Caixa& cx) {
	cx.volume = cx.altura * cx.largura * cx.comprimento;
}

int main()
{
	Caixa cubo = { "Amanco", 1.5, 1.0, 2.2 };
	VolumeCaixa(cubo);
	ExibirCaixa(cubo);


	return 0;
}