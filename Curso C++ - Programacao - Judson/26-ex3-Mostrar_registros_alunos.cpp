#include <iostream> 
using namespace std;

const int TAM_NOME = 30;

struct aluno {
	char nome[TAM_NOME]; 
	int nivel;
};

// solicita e armazena informações de alunos: 
// // - encerrando ao preencher o vetor ou quando o usuário 
// // entrar com uma linha em branco para o nome do aluno 
// // - a função retorna o número de alunos lidos 
int PegarInfo(aluno va[], int n) {
	int lidos = 0;

	cout << "Digite o nome do aluno: ";
	cin.getline(va[0].nome, TAM_NOME);

	while (va[lidos].nome[0] != '\0' && lidos < n)
	{
		cout << "Digite o nivel do aluno: ";
		cin >> va[lidos].nivel;
		cin.ignore();
		lidos++;

		if (lidos < n) {
			cout << "Digite o nome do aluno: ";
			cin.getline(va[lidos].nome, TAM_NOME);
		}
	}
	
	return lidos;
}

// mostra o conteúdo de um registro aluno (COPIA)
void Mostrar1(aluno a) {
	cout << a.nome << " " << a.nivel << endl;
}

// mostra o conteúdo do registro aluno apontado (original)
void Mostrar2(const aluno* pa) {
	cout << pa->nome << " " << pa->nivel << endl;
}

// mostra o conteúdo do vetor de alunos 
void Mostrar3(const aluno va[], int n) {
	cout << endl;
	for (int i = 0; i < n; i++)
		Mostrar1(va[i]);
}

int main() {
	cout << "Tamanho da classe: "; 
	int tam; 
	cin >> tam;

	// remove \n para uso do cin.getline 
	cin.ignore();

	aluno* ptr = new aluno[tam];
	int inscritos = PegarInfo(ptr, tam);

	for (int i = 0; i < inscritos; ++i)
	{
		Mostrar1(ptr[i]); 
		Mostrar2(&ptr[i]);
	}
	Mostrar3(ptr, inscritos);

	delete[] ptr;
	cout << "Feito!\n";
	return 0;
}