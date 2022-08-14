// 
#include <iostream>
using namespace std;

struct tupla
{
	int a;
	int b;
	int c;
};

void Inverter( tupla& tupA, tupla& tupB) {
	tupla tempA = tupA;
	cout << "Invertendo...\n";

	tupA = tupB;
	tupB = tempA;
}


int main()
{
	tupla tupA = { 15, 20, 25 };
	tupla tupB = { 40, 50, 60 };
	Inverter(tupA, tupB);

	cout << tupA.a << " " << tupA.b << " " << tupA.c << endl;
	cout << tupB.a << " " << tupB.b << " " << tupB.c << endl;

	return 0;
}