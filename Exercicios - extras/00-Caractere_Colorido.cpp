#include <iostream>
using namespace std;

#define black "\033[7;37;40m"
#define yellow "\033[1;33;44m"
#define green "\033[32m" // normal color
#define red "\033[4;31m" // underline
#define foreg "\033[38;5;154m"
#define backg "\033[38;5;080;48;5;154m"
#define default "\033[m"


int main()
{
	cout << black << "Preto no Branco" << default << endl;
	cout << yellow << "Amarelo Intenso com Azul" << default << endl;
	cout << green << "Verde Normal" << default << endl;
	cout << "\033[1;32m" << "Verde Bold" << default << endl;
	cout << "\033[7;32m" << "Verde Invertido" << default << endl;
	cout << red << "Vermelho Sublinhado" << default << endl;
	cout << foreg << "256 Cores" << default << endl;
	cout << backg << "256 Cores" << default << endl << endl;

	for (int i = 0; i < 256; i++)
	{
		cout << "\033[48;5;" << i << "m" << " "<<i<<" " << default; // print all 256 colors
		(i % 20) == 0 ? (cout << endl) : cout; // pular linha a cada 10 cores
	}
	cout << "\033[m" << endl;
	return 0;
}

//(i %10) == 0 ? (cout << 10) : 5;