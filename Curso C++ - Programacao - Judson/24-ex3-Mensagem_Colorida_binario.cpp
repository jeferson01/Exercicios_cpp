// **funciona com varios cout's por linha. =)
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

#define colDefault "\033[m"

int main()
{
	char mensagem[80];
	int texto, fundo;

	ifstream fin; 
	ofstream fout;

	cout<< "Mensagens Coloridas\n------------------\n"
		<< "[A]rmazenar\n"
		<< "[E]xibir\n"
		<< "[S]air\n"
		<< "------------------\n";
	cout << "Opcao: [ ]\b\b";
	char escolha;
	cin >> escolha;

	while (escolha != 'S' &&  escolha != 's')
	{
		switch (escolha)
		{
		case 'A': // armazenar
			fout.open("mensagem_colorida.dat", ios_base::out | ios_base::trunc | ios_base::binary);

			cout << "Sua mensagem: "; 
			cin.get(); // limpar \n do buffer
			cin.getline(mensagem, 80);
			cout << "Cor do texto: ";
			cin >> texto;
			cout << "Cor do fundo: ";
			cin >> fundo;

			fout.write((char*)&mensagem, sizeof(mensagem));
			fout.write((char*)&texto, sizeof(int));
			fout.write((char*)&fundo, sizeof(int));
			fout.close();
			cout << "Texto colorido foi armazenado." << endl;

			break;

		case 'E': // exibir
			fin.open("mensagem_colorida.dat", ios_base::in | ios_base::binary);

			if (fin.is_open()) {
				fin.read((char*)&mensagem, sizeof(mensagem));
				fin.read((char*)&texto, sizeof(int));
				fin.read((char*)&fundo, sizeof(int));

				cout << "Sua mensagem: " << mensagem << endl
					 << "Cor do texto: " << texto << endl 
					 << "Cor do fundo: " << fundo << endl;
				string mensagemCol = "\033[38;5;";  // "\033[38;5;000;48;5;154m"
				mensagemCol += to_string(texto) + ";48;5;" + to_string(fundo) + "m";
				cout << "Mensagem colorida: ";
				cout << mensagemCol << mensagem << colDefault << endl; // exib mensagem colorida
			}
			else
				cout << "Arquivo nao foi aberto!";
			fin.close();
			break;

		default:
			break;
		}
		cout << "-----------" << endl << "Opcao: [ ]\b\b";
		cin >> escolha;
	}
	

	cout << "end.";
	return 0;
}

/*
Mensagens Coloridas
-------------------
[A]rmazenar 
[E]xibir
[S]air
-------------------
Opção: [A]

Sua mensagem: Feliz Aniversário! 
Cor do texto: 130
Cor do fundo: 038

Texto colorido foi armazenado.
*/
