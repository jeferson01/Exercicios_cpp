
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

	cout << "Come�ando agora : \n";
	UmTres();
	cout << "\nPronto!";

}

void UmTres()
{
	cout << "Um";
	Dois();
	cout << "Tr�s";
}

void Dois() {
	cout << " Dois ";
}
