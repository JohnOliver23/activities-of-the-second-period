#include <stdio.h>
#include <stdlib.h>
#include "pilhad.h"

int main()
{
    tpilha p[3];
    tpilha clone;
   int i;
   int indPilha = 0, indPilha2;///indice da pilha
   int valorEmp;/// valor a ser empilhado
   int valor;/// valor desempilhado
   char opcao;///opcao do q o usuario seseja realizar
   int tampi; ///tamanho da pilha
   int valortop;///variavel q recebe o valor do topo
   char option;///serve pra guardar ocao do usuario no case esvaziar
   char confirm;///serve pra receber do usuario a confirmação da concatenação
   int recebeconc, transferconc;///recebem os indices da pilha na função concatenar
   int decbin;///guarda o valor para ser convertido em binario
   for(i=0; i<3;i++){
    inicializa(&p[i]);
   }

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
        printf("(b) clonar uma pilha \n");
        printf("(s) sair\n");
        printf("-------------------------------------\n");
        printf("Digite sua Opcao [ ]\b\b");
        do{
            opcao = tolower(getche());
            printf("\b");
         }while(!strchr("edtovrzcmnspb", opcao));
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
             case 'o':
                if(!topo(p, &valortop)){
                    printf("\n\nPilha vazia !");
                }else{
                    printf("\n\no valor que estar no topo e = %d  ", valortop);
                }
                printf("\n\tDigite qualquer tecla para continuar...");
                getch();
                break;
            case 'v':
                vazia(p)?printf("\n\nPilha Vazia"):printf("\n\nPilha NAO Vazia");
                printf("\n\tdigite qualquer tecla para continuar");
                getch();
                break;
            case 'r':
                if(!vazia(p)){
                inverter(&p);
                printf("\n\nPilha invertida com Sucesso!");
                }else{
                    printf("\n\nPilha Vazia!");

                }
                printf("\n\tdigite qualquer tecla para continuiar...");
                getch();
                break;
              case 'z':
                printf("\n\nDeseja realmente esvaziar a pilha (S/N");
                option = tolower(getche());
                if(option=='s'){
                    esvaziar(&p[indPilha]);
                    printf("\n\tPilha esvaziada com sucesso !");
                    getch();
                }

                break;
            case 'm':
                printf("Digite a o indice da pilha que voce deseja mudar de (1 a 3)");
                scanf("%d", &indPilha2);
                if ((indPilha2>=1)||(indPilha2<=3)){
                    indPilha = indPilha2-1;
                }
                break;
            case 'c':
                 printf("\nSelecione a pilha que recebe os novos elementos(1 a 3): \n");
                scanf("%d",&recebeconc);
                printf("\nSelecione a pilha que sera transferida: \n");
                scanf("%d",&transferconc);
                printf("\nDeseja realmente concatenar a pilha  %d para a pilha %d: (S/N): \n",transferconc,recebeconc);
                confirm = tolower(getche());
                if(confirm == 's'){
                    concatenar(&p[recebeconc-1], &p[transferconc-1]);
                    printf("\n\tPilha concatenada com Sucesso !");
                    printf("\n\tDigite qualquer tecla para continuar...");
                    getch();
                }

                break;
             case 'n':
                printf("\n\nDigite um numero inteiro natural");
                scanf("%d", &decbin);
                if(decbin >=0){
                    decToBin(decbin);
                }else{
                    printf("\n\tnumero digitado nao eh um numero valido");

                }
                printf("\n\tDigite qualquer tecla para continuar...");
                getch();
                break;
              case 'b':
                printf("\nDigite a o indice da pilha que voce deseja clonar de (1 a 3)");
                scanf("%d", &indPilha2);
                if ((indPilha2>=1)||(indPilha2<=3)){
                    indPilha = indPilha2-1;
                    if(!clonar (p[indPilha], &clone)){
                        printf("\n\nPilha Vazia");
                    }else{
                        printf("\nPilha clonada com Sucesso !");
                        printf("\n Valor da nova Pilha = ");
                        imprimir(clone);


                    }
                    printf("\n\tDigite qualquer tecla para continuar...");
                    getch();
                    break;
        }///fim do switch

   }///fim do for
   return 0;
}
