// exibi cout um numero de vezes que a funcao foi chamada (se bool for true)
#include <iostream>
#include <fstream>
using namespace std;

void ExibirStr(const char* str, bool b = 0) {
	static int count = 0;
	count++;

	if (b == true)
		for (int i = 0; i < count; i++)
		{
			cout << str << endl;
		}
	else cout << str << endl;
}


int main()
{
	ExibirStr("meuzovo");
	ExibirStr("meuzovo", 0);
	ExibirStr("meuzbago", 1);

	return 0;
}