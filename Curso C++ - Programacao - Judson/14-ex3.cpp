#include <iostream>
using namespace std;

void Mais(int*);
int main()
{
	int num = 0;
	int* pt = &num;

	Mais(pt);
	Mais(pt);
	cout << num << endl;

}

void Mais(int* pt) {
	*pt += 1;
}