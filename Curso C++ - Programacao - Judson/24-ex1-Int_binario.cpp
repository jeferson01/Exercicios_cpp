// **funciona com varios cout's por linha. =)
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	int num;
	ifstream fin; 
	ofstream fout;

	fin.open("interger.bin", ios_base::in | ios_base::binary);
	if (fin.is_open()) {
		fin.read((char*) &num, sizeof(int));
		cout << "Arquivo integer.bin encontrado!\n";
		cout << "Ele contem o numero " << num << ".\n\n";
	}

	fout.open("interger.bin", ios_base::out | ios_base::trunc | ios_base::binary);

	cout << "Digite um inteiro: ";
	cin >> num;

	fout.write( (char*) &num, sizeof(int));
	cout << "Numero armazenado no arquivo integer.bin." << endl;

	fin.close();
	fout.close();

	return 0;
}

//if (!fin.is_open())
//{
//	cout << "Abertura do arquivo listagem.txt falhou!" << endl;
//	cout << "Programa encerrando.\n";
//	exit(EXIT_FAILURE);
//}
//if (!fout.is_open())
//{
//	cout << "Abertura do arquivo listagem_m.txt falhou!" << endl;
//	cout << "Programa encerrando.\n";
//	exit(EXIT_FAILURE);
//}
