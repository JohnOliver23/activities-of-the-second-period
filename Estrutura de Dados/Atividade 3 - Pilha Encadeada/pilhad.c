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
esvaziar (tpilha *p){//função esvaziar
   int valor;
while (!vazia(*p)){
    pop(p, &valor);
}

}
concatenar(tpilha *p, tpilha *p2){//concatenar pilha
tpilha temp;
int aux;
inicializa(&temp);

while(!vazia(*p2)){
    pop(p2, &aux);
    push(&temp, aux);
}
while(!vazia(temp)){
    pop(&temp, &aux);
    push(p, aux);
}

}
void decToBin(int value){
int aux, i,  tampi;
tpilha temp;
inicializa(&temp);
while (value >=0 && value >=1){
    aux = value % 2;
    push(&temp, aux);
    value = value /2;

}
printf("Valor transformado para binario = ");
while(temp !=NULL){
    printf("%d", temp->dado);
    temp = temp->prox;
}




}
int clonar (tpilha p, tpilha *clone){
if(vazia(p))
    return 0;

tpilha temp;
int aux, i;
inicializa(&temp);
inicializa(clone);
while(p !=NULL){
    aux = p->dado;
    push(&temp, aux);
    p = (*p).prox;
}
while(!vazia(temp)){
    pop(&temp, &aux);
    push(clone, aux);
}
return 1;





}
