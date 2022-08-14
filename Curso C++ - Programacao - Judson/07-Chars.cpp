#include <iostream>;
using namespace std;

int main() {

	char cha = '0'; //char is stored as a integer number, and converted from a list
	char cha1 = '8';
	char cha2 = 56;  //uses the char in position 56 (ASCII), which is the number 8

	cout << cha1 << endl << cha2 << endl;

	for (int i = 0; i < 150; i++)
	{
		//break;
		cout << "\"" << cha << "\" ";
		cha = cha + 1;
	}
	cout << cha;

}