//std::cout << std::setw(5) << std::setfill('0') << 1;
#include <iostream>
using namespace std;

int main()
{
	

	for (int i = 1; i < 10; i++) {
		if (i <= 5) {
			for (int j = 0; j < i; j++)
			{
				cout << "*";
			}
			cout << endl;
		}
		
		else {
			for (int k = 10; k > i; k--)
			{
				cout << "*";
			}
			cout << endl;
		}
		
		
	}
	
}

