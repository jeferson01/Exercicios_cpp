#include <iostream>
using namespace std;

enum semana {SEG, TER, QUA, QUI , SEX, SAB, DOM};

int main()
{

	char semanas[7][8] = {"segunda", "terca","quarta", "quinta", "sexta", "sabado","domingo"};

	for (semana ind = SEG; ind <= DOM; ind = semana(ind + 1))
		cout << semanas[ind] << endl;
	return 0;
}