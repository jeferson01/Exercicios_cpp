#include <iostream>
#include <bitset>
using namespace std;

short CruzamentoPontoUnico(unsigned short numA, unsigned short numB) {
    unsigned int mask = (~1) << 7;  //first bit is zero, then 8 bits are zeros <<
    //cout << bitset<16>(numA) << endl << bitset<16>(numB) << endl;
    numA = (numA & mask);
    
    mask = ~((~1) << 7); // invert 2 times
    numB = (numB & mask);

    unsigned short solution = numA | numB;
    return solution;
}

short CruzamentoAritmetico(unsigned short numA, unsigned short numB) {
    unsigned short mask1 = (1) << 5;  
    unsigned short mask2 = (1) << 12;
    unsigned short maskArit = mask1 | mask2;

    unsigned short solution = numA & numB & maskArit;
    //cout << bitset<16>(solution) << endl;
    return solution;
}
short MutacaoSimples(unsigned short numA) {
    unsigned short mask = (1) << 9;
    unsigned short solution = mask ^ (numA);
    //cout << bitset<16>(solution) << endl;
    return solution;
}
short MutacaoDupla(unsigned short numA) {
    unsigned short mask1 = (1) << 3;
    unsigned short mask2 = (1) << 12;
    unsigned short mask = mask1 | mask2;
    unsigned short solution = mask ^ (numA);
    //cout << bitset<16>(solution) << endl;
    return solution;
}


int BitsBaixos(int bit) {
    unsigned int mask = (~0) << 16;  //mask 0, invert all to 1, and shift 16 zeros to left.
    mask = ~mask;  // invert mask again
    //cout << bitset<32>(mask) << endl;
    bit = mask & bit;
    return bit;
}
int BitsAltos(int bit) {
    unsigned int mask = (~0) << 16;
    bit = (mask & bit) >> 16;  // shift to the first 16 bits
    return bit;
}