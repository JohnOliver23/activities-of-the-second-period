#include "lista.h"
#include <stdlib.h>
void criar(TLista *l){
*l = NULL;
}
int tamanho(TLista l){
if (vazia(l))
    return 0;
int c=0;
while (l!=NULL){
    l = l->prox;
    c++;
}
return c;
}
int vazia (TLista l){
return l==NULL;
}
int posicao(TLista l, telem valor){
if(vazia(l))
    return 0;
int c = 1;
int tamli = tamanho(l);
while (c <= tamli){
    if(l->dado == valor)
        return c;
    c++;
    l = l->prox;
}
return 0;

}
int inserir(TLista *l, telem valor, int pos){
///inserindo em lista vazia
if (vazia(*l)){
    if(pos!=1)
        return 0;
    TLista aux = malloc(sizeof(tno));
    if(aux==NULL)
        return 0;
    aux->dado = valor;
    aux->prox = NULL;
    *l = aux;
    return 1;
}
///inserindo na primeira posicao em lista não vazia
if(pos == 1){
    TLista aux = malloc(sizeof(tno));
    if(aux == NULL)
        return 0;
    aux->dado = valor;
    aux->prox = *l;
    *l = aux;
    return 1;
}
///inserindo em qualquer posição em lista não vazia
int n = 1;
TLista temp = *l;
TLista aux = malloc(sizeof(tno));
if(aux==NULL)
    return 0;
while (n < pos-1 && pos!=NULL){
    temp = temp->prox;
    if(temp == NULL)
        return 0;
    n++;

}
aux->dado = valor;
aux->prox = temp->prox;
temp->prox = aux;
return 1;
}
imprimir(TLista l){
while (l!= NULL){
    printf("%d ", l->dado);
    l = l->prox;
}
}
int remover(TLista *l, int pos, telem *valor){
if(vazia(*l))
    return 0;
TLista aux = *l;
if(pos==1){///remover na primeira posição
    *valor = aux->dado;
    *l = aux->prox;
    free(aux);
    return 1;
}
TLista ant;
int n=1;

while(n <pos && pos!=NULL){
    if(aux == NULL)
        return 0;
    ant = aux;
    aux = aux->prox;
    n++;
}
*valor = aux->dado;
ant->prox = aux->prox;
free(aux);
return 1;


}
int elemento (TLista l, int pos, telem *valor){
if(vazia(l))
    return 0;

int n =1;
while(n<=pos && l!=NULL){
    if(n==pos){
        *valor = l->dado;
        return 1;
    }
    l = l->prox;
    n++;
}
return 0;
}
TLista clone(TLista l){
TLista  aux, ant, clone = NULL;
if(vazia(l))
    return NULL;
while(l!=NULL){
    aux = malloc(sizeof(tno));
    if(aux==NULL)
        return 0;
    aux->dado = l->dado;
    aux->prox = NULL;
    if(clone == NULL){
        clone = aux;
        ant = aux;
        l = l->prox;
    }else{
        ant->prox = aux;
        ant = ant->prox;
        l = l->prox;
    }
}

//imprimir(clone);
return clone;
}
void esvaziar(TLista *l){
*l= NULL;
}
