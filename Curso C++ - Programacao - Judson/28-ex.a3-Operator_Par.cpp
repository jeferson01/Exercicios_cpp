// 
#include <iostream>
#include <fstream>
using namespace std;

struct par { int x; int y; };

// definir cout para "par"
ostream& operator<<(ostream& os, par xy) {
	os << "[" << xy.x << "," << xy.y << "]";

	return os;
}


int main()
{
	par myPar;

	fstream fin;
	fin.open("pares_struct.txt", fstream::in);
	if (fin.is_open()) {
		while (fin >> myPar.x && fin >> myPar.y)
			cout << myPar << " ";
	}

	par par1 = { 15, 20 };
	par par2 = { 33, 37 };
	//cout << par1 << par2;
	cout << endl << "fim." << endl;

	return 0;
}