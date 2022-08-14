#include <iostream>
using namespace std;

int main()
{
	float torques[] = { 2.5, 8.1, 3.4, 9.2, 5.7, 9.6, 6.3, 8.0, 5.4, 4.9 };
	float *ptr = torques;

	cout << *ptr << endl;
	ptr = &torques[9];
	cout << *ptr << endl;
}