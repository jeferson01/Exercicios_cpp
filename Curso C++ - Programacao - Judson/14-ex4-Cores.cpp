#include <iostream>
using namespace std;

union Cores {
	unsigned short rgba[4];
	int val;
};
void LerRgba(Cores* pt) {
	cout << "RGBA :";
	cin >> pt->rgba[0];
	cin >> pt->rgba[1];
	cin >> pt->rgba[2];
	cin >> pt->rgba[3];
}
void Ler32bits(Cores* pt) {
	cout << "32 bits :";
	cin >> pt->val;
}

int main()
{
	//Cores cor1 = { 25, 25, 50, 0 };
	Cores cor1, cor2;
	Cores* pt = &cor1;
	Cores* pt2 = &cor2;

	cout << "Digite uma cor no formato :\n";
	LerRgba(pt);
	Ler32bits(pt2);

	cout << cor1.rgba[0] << "/" << cor1.rgba[1] << "/"
		 << cor1.rgba[2] << "/" << cor1.rgba[3] << endl;

	cout << cor2.val << endl;
}

