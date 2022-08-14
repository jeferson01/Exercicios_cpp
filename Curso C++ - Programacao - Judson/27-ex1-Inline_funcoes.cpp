// funcao inline substituem as chamadas da funcao por codigo p/ o compilador.
// utiliza-se em pequenas funções (1 linha) que são chamadas extensivamente. +desempenho
#include <iostream> 
#include <cctype>
#include <fstream>
using namespace std;

inline int Maximo (int a, int b) {
	return a > b ? a : b; }
inline int Minimo(int a, int b) {
	return a < b ? a : b; }

inline int Absoluto(int num) {
	return num < 0 ? -num : num;
}

inline char Maiusculo(char ch) {
	return islower(ch) ? toupper(ch) : ch;
}

int main() {
	cout << Maximo(18, 15) << endl;
	cout << Minimo(18, 15) << endl;
	cout << Absoluto(-9) << endl;
	cout << Maiusculo('e') << endl;

	return 0;
}

