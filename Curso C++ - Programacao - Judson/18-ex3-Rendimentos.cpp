//std::cout << std::setw(5) << std::setfill('0') << 1;
#include <iostream>
#include <Windows.h>
#include "concurso.h"
using namespace std;



int main()
{
	const int daiane = 100, celia  = 100; // 10% fixo > 5% atual
	float rendDaiane = 0, rendCelia = 0;
	int anos = 0;

	while ((daiane+rendDaiane) >= (celia + rendCelia))
	{
		rendDaiane += daiane * 0.10;
		rendCelia += (rendCelia + celia) * 0.05;
		anos++;
	}
	cout << "Se passaram " << anos << " anos para os saldos atingirem os valores\n";
	cout << "Daiane: " << daiane + rendDaiane << endl;
	cout << "Celia: " << celia + rendCelia << endl;
}

