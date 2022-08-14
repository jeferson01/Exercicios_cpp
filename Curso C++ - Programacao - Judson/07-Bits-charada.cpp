#include <iostream>
#include <bitset>
using namespace std;
void showChar(int);
void testeCharada();
char charada(char, int);

int main() {
    int a = 16, b = a >> 2, c = -315;

    std::cout << "a = " << std::bitset<8>(a) << std::endl;
    std::cout << "b = " << std::bitset<8>(b) << std::endl;
    std::cout << "c = " << std::bitset<16>(c) << std::endl;

    //showChar(80);
    //showChar(114);

    //testeCharada();

    charada(60, 20);
    charada(-25, 90);
    charada(8, 72);
    charada(21, 48);
    charada(-31, 107);
    //20, 90, 72, 48, 107
}

void showChar(int a) {
    char ch = a;
    cout << ch << endl;
}
char charada(char ch, int num) {
    ch += num; // num is the number that will shift the char in ASCII list.
    cout << ch << "\t";
    return ch;
}

void testeCharada() {
    char test0 = 'P';
    char test1 = 'A';
    char test2 = 'P';
    char test3 = 'E';
    char test4 = 'L';
    cout << (int)test0 << "\\\\";
    cout << (int)test1 << "\\\\";
    cout << (int)test2 << "\\\\";
    cout << (int)test3 << "\\\\";
    cout << (int)test4 << "\\\\";
}