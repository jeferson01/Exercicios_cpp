// calcula preço de produtos, normal/atacado dependendo da quantidade.
// abre os 2 arquivos(Produtos.txt e Pedidos.txt) juntos, e seta 2 vetores em um loop.
#include <iostream> 
#include <cctype>
#include <fstream>
using namespace std;

struct Produto
{
	float precoNo;
	float precoAt;
	int quant;
};

float CalcularPedido(Produto prod, int n) {
	float total = 0;
	if (n >= prod.quant)
		total = prod.precoAt * n;
	else total = prod.precoNo * n;

	return total;
}

float CalcularProdutoVet(Produto* vetProd, int* vetN, int tam) {
	float total = 0;
	for (int i = 0; i < tam; i++)
	{
		total += CalcularPedido(vetProd[i], vetN[i]);
	}
	return total;
}


int main() {
	fstream fin, fin2;
	int tam;
	fin.open("Produtos.txt", ios_base::in);
	fin2.open("Pedido.txt", ios_base::in); // abrir e salvar os 2 vetores no mesmo loop?
	
	fin >> tam; 
	fin2 >> tam; // tam é setado 2 vezes

	Produto* prodVet = new Produto[tam];
	int* pedidoVet = new int[tam];

	char tempStr[12];
	float tempFloat;
	int quant;

	for (int i = 0; i < tam; i++)
	{
		fin >> tempStr; // consumir caracteres
		fin >> tempFloat;
		prodVet[i].precoNo = tempFloat; // set preço normal
		fin >> tempStr;
		fin >> tempFloat;
		prodVet[i].precoAt = tempFloat; // set preço atacado
		fin >> tempStr;
		fin >> tempFloat;
		prodVet[i].quant = int(tempFloat); // set quantidade

		fin2 >> quant;
		pedidoVet[i] = quant; // set pedido
	}
	fin.close();
	fin2.close();

	float totalPedido = CalcularProdutoVet(prodVet, pedidoVet, tam);

	cout.setf(ios_base::fixed, ios_base::floatfield) << cout.precision(2);
	cout << "\nValor total do pedido: " << totalPedido << endl;
	// ler arquivo, vetor dinamico= primeiro int lido.

	return 0;
}

/*
Utilize essa função dentro de outra função, cuja tarefa é receber um vetor de produtos 
e um vetor de pedidos e retornar o total do pedido.
receber os produtos e os pedidos através de dois arquivos texto separados.
O primeiro número de cada arquivo é sempre a quantidade de linhas de informação.
6
N: 3.50 A: 2.95 Q: 5
N: 9.80 A: 8.90 Q: 3
N: 5.00 A: 4.00 Q: 5
N: 7.85 A: 6.95 Q: 2 
N: 1.95 A: 1.50 Q: 8
N: 4.90 A: 4.70 Q: 6

6 3 4 10 5 5 8
10.5 + 35.6 + 40 + 34.75 + 9.75 + 37.6
*/