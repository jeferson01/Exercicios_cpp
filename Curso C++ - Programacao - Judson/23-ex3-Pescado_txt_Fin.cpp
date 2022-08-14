#include <iostream>
#include <fstream>
using namespace std;

int main()
{

	ifstream fin;
	fin.open("pescado.txt");
	if (!fin.is_open())
	{
		cout << "Abertura do arquivo sol.txt falhou!" << endl;
		cout << "Programa encerrando.\n";
		exit(EXIT_FAILURE);
	}
	
	int quilo;
	int somaQuilos = 0;
	char line[50];
	for (int i = 0; !fin.eof(); i++)
	{
		char ch[16];
		fin >> ch;
		fin >> quilo;
		fin.getline(line, 50); // ler toda a linha
		cout << quilo << endl;
		somaQuilos += quilo;
	}
	

	fin.close();
	cout << "Soma dos quilos: " << somaQuilos << endl;
	return 0;
}
