#include "pilha.h"
#include<stdio.h>
#include<string.h>
void inicializa(pilha *p ){

        p->topo = -1;

}

int vazia( pilha p ){///teste de vazia
/*    if( p.topo == -1)
        return 1;
    else
        return 0; */

    return ( p.topo == -1);
}


int cheia( pilha p ){
    return(p.topo == MAX-1);
}

int tamanho( pilha p){
    return p.topo + 1 ;
}

int empilha( pilha *p, telem valor){///função empilha pilha

    if( cheia(*p))
        return 0;
    else {
        p->elemento[++p->topo] = valor;

        return 1;
    }
}

void imprimir( pilha p){
    int i;
    /*if( vazia(p))
        return; */

    for(i=0; i<= p.topo; i++ )
        printf("%d", p.elemento[i]);
}

int topo( pilha p, telem *valor){///função q retorna 0 se a pilha estiver vazia e 1 se nao estiver e altera o valor do topo
    if( vazia(p))
        return 0;
    else {
        *valor = p.elemento[p.topo];
        return 1;
    }
}

int desempilha( pilha *p, telem *valor){///função desempilhar retorna 0 se vazia e 1 se nao e modifica os valores do topo e do valor
    if( vazia(*p))
        return 0;
    else {
        *valor = p->elemento[p->topo--];
        return 1;
    }
}
///Outra forma de se inverter uma pilha
/*
void inverter2(pilha *p, int vl){///Função q inverte os valores da pilha
int i, aux;
for (i=0; i< vl-i-1; i++){
    aux = p->elemento[i];
    p->elemento[i]= p->elemento[p->topo-i];
    p->elemento[p->topo-i]=aux;
}

}
*/
void inverter(pilha *p, int vl){///função q inverte os valores de uma pilha
typedef struct{
int elementos[MAX];
int topo;

}tpilha;///inicialização das pilhas
tpilha tem[2];
int i, aux;
for(i=0; i<2; i++){
inicializa(&tem[i]);
}

///desempilha os valores da pilha e coloca numa auxiliar 1, supondo q p = 10,20,30, aux1 = 30,20,10
while(p->topo >-1){
    desempilha(p, &aux);
    empilha(&tem[0], aux);
}
///desempilha os valores da auxiliar 1 e coloca numa auxiliar 2, supondo q auxiliar 1 = 30, 20, 10, aux2 = 10,20,30
while(tem[0].topo>-1){
    desempilha(&tem[0], &aux);
    empilha(&tem[1], aux);
}
///desempilha os valores da auxiliar 2 e coloca na pilha com seus valores iniciais invertidos, supondo q auxiliar 2 = 10, 20, 30, pilha  = 30,20,10
while(tem[1].topo >-1){
    desempilha(&tem[1], &aux);
    empilha(p, aux);
}


}
void esvaziar (pilha *p){///função q serve pra esvaziar a pilha
while(p->topo!=-1 ){
    p->elemento[p->topo--];

}


}
void concatenar(pilha *p, pilha *p2){///concatena duas pilhas : Supondo que p = 10,20,30 e p2 = 40, 50, 60
    typedef struct {
    int elementos[MAX];
    int topo;
}tpilha;

tpilha tem;
inicializa(&tem);
int i;
int aux;
while (p2->topo >-1){
    desempilha(p2, &aux);///desempilha os elementos de p2 para uma auxiliar, supondo , o valor desempilhado do p2 e 60
    empilha(&tem, aux);///logo 60 e empilhado na pilha auxiliar, logo pilha auxiliar = 60, 50, 40 e p2 é zerada

    }
while(tem.topo > -1){
    desempilha(&tem, &aux);///desempilha os elementos da pilha auxiliar para a pilha que se deseja receber a concatenação
    empilha(p, aux);///se temporia estava com 60,50,40 e a pillha 1 com 10,20,30 logo a pilha 1 vai ficar : 10, 20, 30, 40, 50, 60
}


}
void decToBin(int vl){///função q converte numero decimal para binario
typedef struct{
int elementos[50];
int topo;


}tpilha[2];
tpilha pt;
int aux,  i, t =0 ;
for(i=0; i<2; i++){
inicializa(&pt[i]);
}

while((vl != 0) &&(vl !=1)){///enquanto o valor do inicio for diferente de 1 e de 0
      aux = vl % 2;///auxiliar recebe o resto da divisao do valor por 2
      vl = vl/2;///o valor se divide por 2 para poder continuar a transformação
      empilha(&pt[0], aux);///a primeira pilha vai recebendo os valores do resto da divisão
      t++;
      }
    empilha(&pt[0], vl);///empilha o primeiro valor do numero binario na primeira pilha
    t++;
    for(i=0;i<=t;i++){///
        desempilha(&pt[0], &aux);
        empilha(&pt[1], aux);
    }
    printf("\n\tO valor convertido para binario e = ");

    for( i =0; i<t; i++){
        printf("%d", pt[1].elementos[i]);
    }
}
int palindromo(int *valor, int t){///função verifica se uma string é palindroma
typedef struct{
int elementos[100];
int top;

}tpilha;
tpilha pt[3];

int i, tam2 =0, aux, flag=0;///se o flag incrementar e porq a função nao e palindroma
for(i=0; i<3; i++){
    inicializa(&pt[i]);
}
for(i=0; i<t ; i++){
if((valor[i] >58) &&(valor[i]<=126)){///verificacao pra retirar espacos em branco e numero e alguns caracteres especiais de acordo com sua numeração na tabela ASC
    if((valor[i]>=65) &&(valor[i]<=90)){///verificacao de case sensitive
       valor[i]+=32;/// se o char for maiusculo ele fica minusculo pra nao destinguir maiusculas e minusculas
       }
empilha(&pt[0], valor[i]);///se os criterios acima forem satisfeitos o valor dessa verificação e empilhado na p1
empilha(&pt[1], valor[i]);///se os criterios acima forem satisfeitos o valor dessa verificação e empilhado na p2
tam2++;
   }

}


for(i=0; i<tam2; i++){///desempilha a primeira pilha e empilha para uma segunda c os valores da string invertido
    desempilha(&pt[1], &aux);
    empilha(&pt[2], aux);
}
for(i=0; i<tam2; i++){

        if(pt[2].elementos[i]!=pt[0].elementos[i]){///se algum valor for diferente, flag é incrementado, logo nao é palindromo
            flag++;
        }

}
if(flag==0){
    return 1;
}else{
    return 0;

}

}
