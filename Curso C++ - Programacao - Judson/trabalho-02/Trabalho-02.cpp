//std::cout << std::setw(5) << std::setfill('0') << 1;
#include <iostream>
#include <cstring>
#include <Windows.h>
#include "concurso.h"
using namespace std;

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);
	
	GerarTracos('*', 40);
	cout << "Concurso de Programação\n\n";
	int participantes, questoes;
	cout << "Qual o número de participantes? ";
	cin >> participantes;
	cout << "Qual o número de questões? ";
	cin >> questoes;
	GerarTracos('*', 40);

	// Vetor dinamico de todas questoes e o de participantes.
	Questoes *vetQuestoes = new Questoes[participantes * questoes];
	Participantes* vetParticipantes = new Participantes[participantes];

	for (int i = 0; i < participantes; i++)
	{
		GerarTracos('-', 20);
		cout << "Participante: ";
		cin >> vetParticipantes[i].nome;
		GerarTracos('-', 20);
		vetParticipantes[i].pt = &vetQuestoes[(i * questoes)];

		for (int j = 0; j < questoes; j++)
		{
			int num = (questoes * i) + j; // contador do step acima
			char letraQuestao = 'A' + j;
			cout << "Questão " << letraQuestao << endl;
			cout << "\tDificuldade: ";
			cin >> vetQuestoes[num].dificuldade;
			cout << "\tInicio: ";
			cin >> vetQuestoes[num].inicio.hora; cin.get(); cin >> vetQuestoes[num].inicio.minuto;
			cout << "\tFim: ";
			cin >> vetQuestoes[num].fim.hora; cin.get(); cin >> vetQuestoes[num].fim.minuto;
		}
		GerarTracos('-', 20);
	}

	GerarTracos('*', 40);
	GerarTracos('-', 20);
	cout << "Resumo por Participante\n";
	GerarTracos('-', 20);
	for (int i = 0; i < participantes; i++)
	{
		cout << vetParticipantes[i].nome << endl;
		ResumoParticipante(vetParticipantes[i].pt, questoes);
	}

	GerarTracos('-', 20); cout << endl; GerarTracos('-', 20);
	cout << "Resumo por Questão\n"; 
	GerarTracos('-', 20);

	Media *vetMedia = new Media[questoes];
	for (int i = 0; i < questoes; i++) // exibe resumo e guarda a media no vetor
	{
		vetMedia[i] = ResumoQuestao(vetQuestoes, (participantes * questoes),i , questoes, vetParticipantes);
	}

	ExibirEstatisticas(vetMedia, questoes);
	cout << endl;

	delete []vetMedia; delete []vetQuestoes; delete []vetParticipantes;
	return 0;
}

// Jef 3 4:50 5:20	 Joao 2 4:32 6:00
	//cout << endl << "Media dific quest A: " << vetMedia[0].dificuldade;
	//cout << endl << "Media tempo quest A: " << vetMedia[0].tempo << " minutos.";