#include <iostream>
#include <cstring>
#include <stdlib.h> 
//using namespace std;
using std::cout;
using std::cin;

struct Nadador {
	char nome[20];
	int idade;
	char categoria[16];
	const char* listaCat[5] = { "Infantil", "Juvenil", "Adolescente", "Adulto", "Senior" };
	//enum class categoria {Infantil, Juvenil, Adolescente, Adulto, Senior};
	// poderia usar enum para digitar a categoria como palavras e não numeros [0] [1] etc.
};
int main()
{
	Nadador atleta;
	cout << "Digite o nome do nadador: ";
	cin.getline(atleta.nome, 20);
	cin.clear();
	cout << "Digite a idade do nadador: ";

	// repete enquanto nao cin invalido ou idade nao for 5 ou mais.
	while (!(cin >> atleta.idade) || atleta.idade < 5) 
	{
		cout << "\nDigite a idade do nadador (maior que 5): ";
		//cin >> atleta.idade;
	}

	if(atleta.idade >= 5 && atleta.idade <= 7)
		strcpy_s(atleta.categoria, atleta.listaCat[0]);
	else if(atleta.idade >= 8 && atleta.idade <= 10)
		strcpy_s(atleta.categoria, atleta.listaCat[1]);
	else if(atleta.idade >= 11 && atleta.idade <= 15)
		strcpy_s(atleta.categoria, atleta.listaCat[2]);
	else if (atleta.idade >= 16 && atleta.idade <= 30)
		strcpy_s(atleta.categoria, atleta.listaCat[3]);
	else if (atleta.idade > 30)
		strcpy_s(atleta.categoria, atleta.listaCat[4]);

	cout << "\nAtleta (nome,idade,categoria):\n";
	cout << atleta.nome << std::endl;
	cout << atleta.idade << std::endl;
	cout << atleta.categoria << std::endl;
	return 0;
}

/* Na função principal, declare um nadador e 
peça ao usuário que digite o nome e a idade do nadador
Infantil
5 a 7
Juvenil
8 a 10
Adolescente
11 a 15
Adulto
15 a 30
Sênior
Acima de 30
*/