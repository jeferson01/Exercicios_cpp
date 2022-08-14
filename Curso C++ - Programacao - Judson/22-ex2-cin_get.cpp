#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;


int main()
{
	char ch;
	cin.get(ch);
	while (ch != '@')
	{
		if (!isdigit(ch)) {
			if (islower(ch))
				cout << char(toupper(ch));
			else if (isupper(ch))
				cout << char(tolower(ch));
			else
				cout << ch;
		}
		
		cin.get(ch);
	}

	//cout << "letras: " << letras;
	return 0;
}

/*até achar o caractere @ e que exiba os caracteres, 
exceto os dígitos, convertendo maiúsculas para minúsculas*/