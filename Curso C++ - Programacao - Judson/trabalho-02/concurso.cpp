#include <iostream>
#include "concurso.h"
//#include "Trabalho-02.cpp" // mudar
using namespace std;

void GerarTracos(char ch, int num) {
	for (int i=0;i<num ;i++) {
		cout << ch;
	}
	cout << endl;
}

void ExibirHorario(Horario h) {
	cout.fill('0');  cout.width(2);
	cout << h.hora << ":";
	cout.fill('0'); cout.width(2);
	cout << h.minuto;
	//std::setw(5) << std::setfill('0') << 1;
}
int DiferencaHorario(Horario a, Horario b) {
	int hora,min,dif = 0;
	min = b.minuto - a.minuto;
	hora = (b.hora - a.hora) * 60;
	dif = min + hora;
	return dif;
}
int operator-(Horario h1, Horario h2) {
	int h3;
	h3 = (h1.hora - h2.hora) * 60;
	h3 = abs(h3 + (h1.minuto - h2.minuto));
	return h3;
}

void ResumoParticipante(Questoes* pt, int num) {

	for (int i = 0; i < num; i++) {
		char letra = 'A' + i;
		Questoes* vetPos = pt + i;
		cout << "\t" << letra << " ";

		cout << "(" << (vetPos)->dificuldade << ") ";
		ExibirHorario(vetPos->inicio);
		cout << " às ";
		ExibirHorario(vetPos->fim);
		cout << " (" << DiferencaHorario(vetPos->inicio, vetPos->fim) << " min)";
		cout << endl;
	}
}

Media ResumoQuestao(Questoes vet[], int tamanho, int inicial, int passo, Participantes nomes[]) {
	Media mediaQ = {0, 0};
	char letra = 'A' + inicial;
	cout << "Questão " << letra << ":" << endl;
	int num = 0; // contador

	// loop 0 -> joao A, loop 1-> pedro A
	// loop 0 -> joao B, loop 1-> pedro B
	// primeiro loop -> participante[0]nome, segundo loop -> participante[1]nome
	for (int i = inicial; i < tamanho; i += passo) {
		cout << "\t" << nomes[num].nome << " ";
		cout << "(" << vet[i].dificuldade << ") ";
		ExibirHorario(vet[i].inicio);
		cout << " às ";
		ExibirHorario(vet[i].fim);
		cout << " (" << DiferencaHorario(vet[i].inicio, vet[i].fim) << " min)";
		cout << endl;
		num++;
		mediaQ.dificuldade += vet[i].dificuldade;
		mediaQ.tempo += (vet[i].inicio - vet[i].fim);
	}

	mediaQ.dificuldade = mediaQ.dificuldade / num;
	mediaQ.tempo = mediaQ.tempo / num;

	return (mediaQ);
}
void ExibirEstatisticas(Media vet[], int tamanho) {
	GerarTracos('-', 20);
	cout << "Estatísticas\n";
	GerarTracos('-', 20);
	cout << fixed; cout.precision(2);

	float totalDif = 0, totalTempo = 0;

	for (int i = 0; i < tamanho; i++)
	{
		cout << "Questão " << char('A' + i) << ":\t";
		cout << "Dificuldade (" << vet[i].dificuldade << ") - ";
		cout << "Tempo ("		<< vet[i].tempo << " minutos)\n";
		
		totalDif += vet[i].dificuldade;
		totalTempo += vet[i].tempo;
	}

	totalDif = totalDif / tamanho;
	totalTempo = totalTempo / tamanho;
	cout << "Concurso:\t";
	cout << "Dificuldade (" << totalDif << ") - Tempo (" << totalTempo << " minutos)\n";
	GerarTracos('*', 40);
							
}