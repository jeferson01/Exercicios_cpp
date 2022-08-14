#include <iostream>
#include <bitset>
#define black "\033[7;37;40m"
#define default "\033[m"
using namespace std;

char Codificar(char);
char Decodificar(char);


int main() {
    char myChar, myChar2;
    bool choose;
    cout << "Digite uma letra: ";
    cin >> myChar;
    
    cout << "Digite 1 para codificar ou 0 para decodificar: ";
    cin >> choose;

    if (choose) {
        cout << black"\t" << Codificar(myChar) << default;
    }
    else
        cout << black"\t" << Decodificar(myChar) << default;

    //myChar2 = Codificar('JJ');
    //cout << black "char codificado: " << myChar2 << endl << default;
    //cout << "char decodificado: " << Decodificar(myChar2) << endl;
}

char Codificar(char ch) {
    return char(ch + 3);
}
char Decodificar(char ch) {
    return char(ch - 3);
}