// **funciona com varios cout's por linha. =)
#include <iostream>
#include <fstream>
#include <cctype>
#include <cstring>
using namespace std;

int main()
{
	ifstream fin;
	fin.open("teste_texto.cpp");
	//fin.open("21-ex.a3-Multiplos_for.cpp"); 
	ofstream fout;
	fout.open("teste_texto_m.cpp");

	if (!fin.is_open())
	{
		cout << "Abertura do arquivo teste_texto.cpp falhou!" << endl;
		cout << "Programa encerrando.\n";
		exit(EXIT_FAILURE);
	}

	if (!fout.is_open())
	{
		cout << "Abertura do arquivo teste_texto_m.cpp falhou!" << endl;
		cout << "Programa encerrando.\n";
		exit(EXIT_FAILURE);
	}

	fout << "// teste_m.cpp" << endl;
	fout << "#define print cout" << endl;

	const char *replace = "cout";
	char ch; // copiar todo o arquivo
	char palavra[10] = {};
	int contagem = 0;

	char linha[100];
	char novaLinha[100] = {};

	while (fin.getline(linha, 100))
	{
		strcpy_s(novaLinha, linha);
		for (int i=0 ; linha[i]; i++) // "cout << num << endl;"
		{
			//poderia fazer for aninhado p/ procurar qualquer palavra
			if (linha[i] == replace[0] && linha[i+1] == replace[1] &&
			linha[i+2] == replace[2] && linha[i+3] == replace[3]) {
				// achou "cout"
				novaLinha[i] = 'p';
				novaLinha[i+1] = 'r';
				novaLinha[i+2] = 'i';
				novaLinha[i+3] = 'n';
				novaLinha[i+4] = 't';

				for (int j = i+4; linha[j] != 0; j++) // inicia depois do print(cout +1 char)
				{
					novaLinha[j+1] = linha[j];

					if (linha[j + 1] == '\0') // add \0 no fim, o laço para nele.
						novaLinha[j + 2] = 0;
				}
				
				strcpy_s(linha, novaLinha);// copiar novalinha->linha, se tiver + de 1 "cout" na linha.
				//i = -1; // resetar posicao da linha, e executar de novo.
				// deve usar um contador, se tiver mais de 1 cout na mesma linha.
								
			}
		}
		fout << linha << endl;
	}
	
	fin.close();
	fout.close();
	cout << endl << "Foram feitas: " << contagem << " substituicoes de " << replace << endl;
	return 0;
}
/*
// teste_m.cpp
#define print cout
Inserir no início do arquivo um comentário com o nome do arquivo // nomeDoArquivo.cpp
• Inserir no início do arquivo a instrução #define print cout
• Substituir as ocorrências de cout por print

		if (!strcmp(palavra, "cout") && linha[0]) { // linha[0] estava pegando um \0, linha vazia
			fout << "	print << num << endl;" << endl;
			palavra[0] = 'z'; //reset
		}
*/