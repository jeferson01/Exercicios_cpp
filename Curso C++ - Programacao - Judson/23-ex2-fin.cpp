#include <iostream>
#include <fstream>
using namespace std;
int main()
{

	ifstream fin;
	fin.open("sol.txt");
	if (!fin.is_open())
	{
		cout << "Abertura do arquivo sol.txt falhou!" << endl;
		cout << "Programa encerrando.\n";
		exit(EXIT_FAILURE);
	}
	ofstream fout;
	fout.open("num.txt");
	if (!fout.is_open())
	{
		cout << "Abertura do arquivo num.txt falhou!" << endl;
		cout << "Programa encerrando.\n";
		exit(EXIT_FAILURE);
	}
	
	int num;
	char ch[40];
	//fin >> num;
	while (!fin.eof())
	{
		if (fin >> num) {
			cout << num << endl;
			fout << num << endl;
		}
		else {
			fin.clear(); // limpa o erro de leitura
			fin >> ch;
		}
		//fin >> num;
	}
	
	fin.close();
	fout.close();
	cout << "Pronto!" << endl;

	return 0;
}