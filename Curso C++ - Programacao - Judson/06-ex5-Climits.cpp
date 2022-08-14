#include <iostream>
#include <windows.h> 
#include <climits>
using namespace std;

bool isShort(long long);
bool isInt(long long);

int main()
{
	SetConsoleCP(1252); // entrada
	SetConsoleOutputCP(1252); // saída
	cout << SHRT_MIN;

	cout << "Digite um valor inteiro : ";
	long long num;
	cin >> num;

	if (isShort(num)) { cout << num << " cabe em 16 bits\n"; }
	else              { cout << num << " não cabe em 16 bits\n"; }

	if (isInt(num)) { cout << num << " cabe em 32 bits\n"; }
	else { cout << num << " não cabe em 32 bits\n"; }

	return 0;
}

bool isShort(long long a)
{
	return (a > SHRT_MIN && a < SHRT_MAX);
}

bool isInt(long long a)
{
	return (a > INT_MIN && a < INT_MAX);
}

/*
Digite um valor inteiro : 300
300 cabe em 16 bits
300 cabe em 32 bits
*/