#include "pilhad.h"
#include <stdio.h>
#include <stdlib.h>

void inicializa(tpilha *p){///inicializa a pilha
*p = NULL;
}

int vazia(tpilha p){///verifica se a pilha estar vazia
return p==NULL;
}
int tamanho(tpilha p){
int n=0;
while(p!=NULL){
    n++;
    p=p->prox;
}
return n;

}
void imprimir(tpilha p){///imprime os elementos da pilha
while(p !=NULL){
printf("%d ", p->dado);
p = p->prox;
}
 }
int topo(tpilha p, telem *valor){///retorna o valor q estar no topo da pilha
if(vazia(p)){
    return 0;
}else{
    *valor = p->dado;
return 1;
}

}
int push(tpilha *p, telem valor){///empilha
tpilha aux;
aux = malloc(sizeof(tno));
if(aux==NULL){
    return 0;
}else{
aux->dado = valor;
aux->prox = *p;
*p = aux;
}


}
int pop(tpilha *p, telem *valor){///desempilha
tpilha aux = *p;
if(vazia(*p)){
    return 0;
}else{
*valor = (*p)->dado;
*p = (*p)->prox;
free(aux);
return 1;


}


}

void inverter(tpilha *p){//inverter a pilha
tpilha temp1;
tpilha temp2;
int i, valor;

inicializa(&temp1);
inicializa(&temp2);

 while(!vazia(*p)){
    pop(p, &valor);
    push(&temp1, valor);

 }
 while(!vazia(temp1)){
    pop(&temp1, &valor);
    push(&temp2, valor);
 }
 while(!vazia(temp2)){
    pop(&temp2, &valor);
    push(p , valor);
 }


}
