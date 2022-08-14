#include <iostream>
#include <bitset>
using namespace std;

char LigarBits(char, short);
char DesligarBits(char, short);
bool TestarBits(char, short);

int main() {
    int a = 16;
    std::cout << "a = " << std::bitset<8>(a) << std::endl;

    unsigned char bit = 16;
    cout << bitset<8>((int)LigarBits(bit, 5)) << endl;

    unsigned char bit2 = 31;
    cout << "bit2: \t" << bitset<8>(bit2) << endl;
    cout << "bit2: \t" << bitset<8>(DesligarBits(bit2, 2)) << endl;

    cout << "bit2: \t" << TestarBits(bit2, 5) << endl;
}

char LigarBits(char ch , short pos) {
    unsigned char mask = 1 << pos;
    ch = mask | ch;
    return ch;
}
char DesligarBits(char ch, short pos) {
    unsigned char mask = ~(1 << pos);
    ch = mask & ch;
    return ch;
}
bool TestarBits(char ch, short pos) {
    unsigned char mask = (1 << pos);
    return (mask & ch);
}