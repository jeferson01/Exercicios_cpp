// color red,yellow,cyan
#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

template <typename T>
void print(T a, T b)
{
	T c = a + b;
	cout << a << " + " << b << " = " << c << endl;
}

int main()
{
	for (int i = 0; i < 100; i++)
	{
		cout << endl << "[";
		for (int i = 0; i < 100; i++)
		{
			cout << "#";
			Sleep(200);

		}
		cout << "]";

	}


	return 0;
}

/*

*/