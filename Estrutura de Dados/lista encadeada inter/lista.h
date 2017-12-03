
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
int remover(TLista *l, telem *valor, int pos);
TLista clonar(TLista l);
int intersecao(TLista l1, TLista l2, TLista *resultadofinal);
int uniao(TLista l1, TLista l2, TLista *resultadofinal);
int diferenca(TLista l1, TLista l2, TLista *resultadofinal);
int removerRepetido(TLista *l);
TLista separa(TLista l , int n);
int inserirOrdenadamente(TLista *l, telem valor);


