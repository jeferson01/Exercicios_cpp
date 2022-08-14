#include <iostream>
#include <bitset>
#define black "\033[7;37;40m"
#define default "\033[m"
using namespace std;

int BitsBaixos(int);
int BitsAltos(int);


int main() {
    unsigned int bit;
    cin >> bit;
    cout << bitset<32>(bit) << endl;
    cout << bitset<32>(BitsAltos(bit)) << endl;

    unsigned short newBit = BitsBaixos(bit); // convert to 16 bits
    cout << bitset<16>(newBit) << endl << newBit;
    
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
