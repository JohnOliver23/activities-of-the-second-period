#define MAX 100
typedef int telem;

typedef struct {
    telem elemento[MAX];
    int topo;
}pilha;

void inicializa(pilha *p);
int vazia( pilha p );
int cheia( pilha p );
int tamanho( pilha p);
int empilha( pilha *p, telem valor);
void imprimir( pilha p);
int topo( pilha p, telem *valor);
int desempilha( pilha *p, telem *valor);
void inverter(pilha *p, int vl);///Questao q inverte valores da pilha
void esvaziar (pilha *p);///Questão q esvazia a pilha
void mudaPilha(pilha *p);///Função muda pilha
void concatenar(pilha *p, pilha *p2);///função de concatenar
void decToBin(int vl);///função q converte numero decimal em binario
int palindromo(int *valor, int t);///função q verifica se uma string é palíndroma
int clonar (pilha p, pilha *clone);
