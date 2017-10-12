typedef int telem;
typedef struct no{
telem dado;
struct no *prox;
}tno;
typedef tno *tpilha;
void inicializa(tpilha *p);
int vazia(tpilha p);
int tamanho(tpilha p);
void imprimir(tpilha p);
int topo (tpilha p, telem *valor);
int push(tpilha *p, telem valor);
int pop(tpilha *p, telem *valor);
