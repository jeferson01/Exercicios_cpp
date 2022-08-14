#include <iostream>
#include <Windows.h>
#include <bitset>
#include "trabalho1-genetico.h"
#define green "\033[32m"
#define red "\033[1;31m"
#define black "\033[7;37;40m"
#define default "\033[m"
using namespace std;

bool Avaliacao(unsigned short);
int BitsBaixos(int);
int BitsAltos(int);


int main() {
    SetConsoleCP(1252);
    SetConsoleOutputCP(1252);
    unsigned short peso[] = { 12, 3, 5, 4, 9, 1, 2, 3, 4, 1, 2, 4, 5, 2, 4, 1 };
    unsigned short valor[] = { 4,4,8,10,15,3,1,1,2,10,20,15,10,3,4,12 };
    unsigned short solutionsDefault[] = {60504, 25000, 12329, 38054, 1259, 732};
    
    //cout << "Entre com 6 soluções iniciais(números entre 0 e 65535) :\n";
    unsigned short soluc1, soluc2, soluc3, soluc4, soluc5, soluc6;
    unsigned short newSoluc1, newSoluc2, newSoluc3, newSoluc4;

    //cin >> soluc1;
    //cout << Avaliacao(soluc1);

    newSoluc1 = CruzamentoPontoUnico(60504, 25000);
    newSoluc2 = CruzamentoAritmetico(12329, 38054);
    newSoluc3 = MutacaoSimples(1259);
    newSoluc4 = MutacaoDupla(732);
    unsigned short newSolutions[] = { newSoluc1, newSoluc2, newSoluc3, newSoluc4 };

    cout << "Resultado da Avaliação\n-------------------------\n";

    for (char i = 0; i < size(solutionsDefault); i++)
    {
        bool aval = Avaliacao(solutionsDefault[i]);
        if (aval) { cout << green "OK" default << endl; }
        else      { cout << red "X" default << endl; }
    }
    cout << "-------------------------\n";

    for (char i = 0; i < size(newSolutions); i++)
    {
        bool aval = Avaliacao(newSolutions[i]);
        if (aval) { cout << green "OK" default << endl; }
        else { cout << red "X" default << endl; }
    }
}

bool Avaliacao(unsigned short num) {
    unsigned short peso[] = { 12, 3, 5, 4, 9, 1, 2, 3, 4, 1, 2, 4, 5, 2, 4, 1 };
    unsigned short valor[] = { 4, 4, 8, 10, 15, 3, 1, 1, 2, 10, 20, 15, 10, 3, 4, 12 };
    short somaPeso = 0; 
    short somaValor = 0;

    bitset<16>bits(num); // inverter ordem dos bits!
    //cout << bits << endl << bits.test(0) << bits.test(1) << bits.test(2) << bits.test(3) << endl;

    for (int i = 0; i < 16; i++) // invert order for correct bit position
    {  
        if (bits.test(15-i) == true) {
            somaPeso += peso[i];
            somaValor += valor[i];
        }
    }
    
    cout << right; cout.width(6);
    cout << num << " - $" << somaValor << " - ";
    cout << right; cout.width(3);
    cout << somaPeso << "Kg - ";
    
    return (somaPeso <= 20);
}



/*Resultado da Avaliação
---------------------- -
60504 – $69 – 40Kg – X
25000 – $45 – 22Kg – X
12329 – $60 – 17Kg – OK
38054 – $46 – 29Kg – X
1259 – $61 – 18Kg – OK
732 – $41 – 18Kg – OK
---------------------- -
60584 – $66 – 41Kg – X
4128 – $30 – 6Kg – OK
1771 – $62 – 20Kg – OK
4820 – $41 – 17Kg – OK
*/