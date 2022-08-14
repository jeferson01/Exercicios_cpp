#pragma once
//#include "Trabalho-02.cpp"

struct Horario {
	int hora, minuto;
};
struct Questoes
{
	int dificuldade;
	Horario inicio;
	Horario fim;
};
struct Participantes
{
	char nome[16];
	Questoes* pt;
};
struct Media {
	float dificuldade;
	float tempo;
};

void GerarTracos(char, int);
void ExibirHorario(Horario);
int DiferencaHorario(Horario, Horario);
int operator-(Horario h1, Horario h2);

void ResumoParticipante(Questoes* , int );
Media ResumoQuestao(Questoes[], int tamanho,int inicial, int passo, Participantes[]);

void ExibirEstatisticas(Media[], int);