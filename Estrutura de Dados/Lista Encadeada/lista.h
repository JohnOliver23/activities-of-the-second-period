
typedef int telem;

typedef struct no{
telem dado;
struct no* prox;
}tno;
typedef tno* TLista;

void criar(TLista *l);
int tamanho(TLista l);
int vazia(TLista l);
int posicao(TLista l, telem valor);
int inserir(TLista *l, telem valor, int pos);
int remover(TLista *l, int pos, telem *valor);
int elemento(TLista l, int pos, telem *valor);
TLista clone(TLista l);




