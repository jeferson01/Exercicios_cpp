//std::cout << std::setw(5) << std::setfill('0') << 1;
#include <iostream>
using namespace std;

int main()
{
	cout << "Você quer que eu conte de 1 até que número? ";
	int num; cin >> num;

	for (int i = 0; i < num; i++)
		{ cout << i+1 << " "; }
	cout << endl;

	for (int i = num; i > 0; i--) { cout << i  << " "; }
	cout << endl;
	for (int i = 1; i < num; i+=2) { cout << i << " "; }
	cout << endl;
	for (int i = num-1; i > 0; i -= 2) { cout << i << " "; }
	cout << endl;
	for (int i = 2 ; i <= num; i +=2) { cout << i << " "; }
	cout << endl;
}

