
#include <iostream>
#include <cstdlib>
#include<time.h>
#include <locale>
using namespace std;
void UmTres(void);
void Dois(void);

int main()
{
	locale::global(locale{ "pt-BR" });

	cout << "Começando agora : \n";
	UmTres();
	cout << "\nPronto!";

}

void UmTres()
{
	cout << "Um";
	Dois();
	cout << "Três";
}

void Dois() {
	cout << " Dois ";
}
