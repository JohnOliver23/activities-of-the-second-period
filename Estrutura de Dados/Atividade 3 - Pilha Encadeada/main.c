#include <stdio.h>
#include <stdlib.h>
#include "pilhad.h"

int main()
{
    tpilha *p;
   int indPilha = 0;///indice da pilha
   int valorEmp;/// valor a ser empilhado
   int valor;/// valor desempilhado
   char opcao;///opcao do q o usuario seseja realizar
   int tampi; ///tamanho da pilha
   inicializa(&p);

   for(;;){
         system("cls");
        printf("Editor de Pilha v1.1\n");
        printf("======================\n");
        printf("Pilha Selecionada: %d \n",indPilha+1);
        printf("<- Topo [");
        imprimir(  p);
        printf("]");
        printf("\n======================\n");
        printf("(e) Empilhar \n");
        printf("(d) Desempilhar\n");
        printf("(t) Tamanho\n");
        printf("(o) obter topo\n");
        printf("(v) teste de vazia\n");
        printf("(r) inverter os elementos da pilha\n");
        printf("(z) esvaziar pilha\n");
        printf("(c) concatenar duas pilhas\n");
        printf("(m) mudar de  pilha\n");
        printf("(n) conversão dec/bin\n");
        printf("(p) verificar se um texto e palindromo\n");
        printf("(s) sair\n");
        printf("-------------------------------------\n");
        printf("Digite sua Opcao [ ]\b\b");
        do{
            opcao = tolower(getche());
            printf("\b");
         }while(!strchr("edtovrzcmnsp", opcao));
        switch(opcao){
            case 'e':
                printf("Digite o valor que você deseja empilhar");
                scanf("%d", &valorEmp);
                push(&p, valorEmp);
                break;
            case 'd':
                if(!pop(&p, &valor)){
                    printf("pilha Vazia!");
                }else{
                    printf("\n\nvalor desempilhado = %d", valor);
                }
                printf("\n\tDigite qualquer tecla para continuar...");
                getch();
                break;
            case 't':
                ///tampi = tamanho(p)? printf("tamanho da pilha %d", tampi) :printf("Pilha Vazia!");
                tampi = tamanho(p);
                if(tampi){
                    printf("tamanho da pilha = %d", tampi);
                }else{
                    printf("Pilha Vazia!");
                }
                getch();
                break;
        }///fim do switch

   }///fim do for
   return 0;
}
