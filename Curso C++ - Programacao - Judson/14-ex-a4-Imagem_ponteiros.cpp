#include <iostream>
using namespace std;

struct Imagem {
	char nome[16];
	short altura;
	short largura;
	
	enum class tipo {JPG, PNG, BMP};
	tipo tipoVar;

	const char tipoChar[3][10] = { "JPG", "PNG", "BMP" };
};

void Detalhes(Imagem* pt) {
	cout << "A imagem "		<< pt->nome
		 << " com tamanho "	<< pt->altura
		 << "x"				<< pt->largura
		 << " tem formato " << pt->tipoChar[int(pt->tipoVar)] << "." << endl;

	//“backg.png” com tamanho 1920x1080 tem formato PNG.
}

int main()
{
	Imagem myImg = { "wallpaper.png", 1920, 1080, Imagem::tipo::JPG };
	myImg.tipoVar = Imagem::tipo::BMP; // alterado para tipo bmp.
	Imagem* pt = &myImg;

	Detalhes(pt);
}