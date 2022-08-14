#include <iostream>
using namespace std;
#define black "\033[7;37;40m"
#define underline "\033[4m"

int main() {
	short myShort = sizeof(myShort);
	int myInt = sizeof(myInt);
	long myLong = sizeof(myLong);
	long long myLLong = sizeof(myLLong);

	cout << underline;
	cout << "short:     " << sizeof(myShort) << " bytes\n";
	cout << "int:       " << sizeof(myInt) << " bytes\n";
	cout << "long:      " << sizeof(myLong) << " bytes\n";
	cout << "long long: " << sizeof(myLLong) << " bytes\n";
	cout << "TOTAL:     " << myShort + myInt + myLong + myLLong << " bytes" << endl;

}



/*
short: 2 bytes
int : 4 bytes
long : 4 bytes
long long : 8 bytes
Total : 18 bytes
*/