
#include <iostream>
#include <cstdlib>
#include<time.h>
#include <locale>
#include <cmath>

using namespace std;
float Distancia(float[], float[]);

int main()
{
	locale::global(locale{ "pt-BR" });

	//float pontoP[2] = {5, 8};
	//float pontoQ[2] = {20, 4 };
	float pontoP[2];
	float pontoQ[2];

	cout << "Ponto Px e Py: ";
	cin >> pontoP[0] >> pontoP[1];

	cout << "Ponto Qx e Qy: ";
	cin >> pontoQ[0] >> pontoQ[1];

	cout << "\aA distância entre P e Q é :" << Distancia(pontoP, pontoQ);

	//cout << pontoP[0] << endl << pontoP[1];
}


float Distancia(float p[], float q[]) {
	float dist;
	dist = sqrt( powf((q[0] - p[0]), 2) + powf( (q[1] - p[1]), 2 ));

	return dist;

}
