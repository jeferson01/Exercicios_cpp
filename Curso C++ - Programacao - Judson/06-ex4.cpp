#include <iostream>
using namespace std;

long long calculo(long long, long long);

int main()
{
	long long resultado = 200530ll * 420800; // changed from int to long long in expression direct
	cout << "Direto: " << resultado << endl;
	cout << "Função: " << calculo(200530, 420800) << endl;

	cout << sizeof(int) << sizeof(long) << sizeof(long long); // int same bytes as long, but longlong 8 bytes
	return 0;
}

long long calculo(long long a, long long b)
{
	return a * b;
}