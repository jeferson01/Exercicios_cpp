#include <iostream>
using namespace std;

void (*OnClick)(void); // ponteiro global

void CreateButton(int x, int y, void (*pt) (void)) {
	cout << "Bot�o criado na posi��o " << x << "," << y << endl;
	
	OnClick = pt; // setar ponteiro para funcao recebida
}

void Mensagem()
{ cout << "Bot�o Pressionado!" << endl; }
void Mensagem2()
{ cout << "Meuzovo!" << endl; }

int main()

{
	CreateButton(10, 10, Mensagem2);

	// simulando pressionamento
	cout << "Pressionar Bot�o? ";
	char resposta;
	cin >> resposta;
	if (resposta == 'S' || resposta == 's')
		OnClick(); 
	return 0;
}