// variavel static eh liberada apenas quando a funcao termina.
#include <iostream>
using namespace std;

void Mensagem() {
	static int count = 0;
	cout << ++count << "a chamada da funcao." << endl;
}


int main()
{
	for (int i = 0; i < 3; i++)
	{
		Mensagem();
	}
	

	return 0;
}