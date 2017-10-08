#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"
#include <string.h>
#define TAM 3

int main()
{
    pilha p[TAM];
    int i, t, conv[50];
    int valor;///valor desempilhado do case d
    char opcao;///opcao q o usuario deseja executar
    int valortopo;///variavel q guarda o valor do topo do case o
    int valoremp;///valor fornecido pelo usuario para inserir na pilha do case e
    int tampi = 0;/// variavel q guarda o tamanho da pilha do case t
    char confirm;///variavel q serve pra ler a confirmaçõa do usuario no teste de inversao de pilha case r
    int indPilha = 0;///guarda o indice da pilha atual
    int indPilha2=0;///guarda a pilha atual digitada pelo usuario
    int recebeconc;///variavel q serve pra guardar o indice da pilha q receberar os elementos da concatenação
    int transferconc;///variavel q serve pra guardar o indice da pilha q ira transferir os elementos da concatenação
    int decbin;///numero fornecido pelo usuario para converter em binário do case n
    char texto[80], texto2[80];
    for(i=0; i<TAM; i++){
    inicializa(&p[i]);
    }
        for(;;){
        system("cls");
        printf("Editor de Pilha v1.1\n");
        printf("======================\n");
        printf("Pilha Selecionada: %d \n",indPilha+1);
        printf("<- Topo [");
        for(i=0; i<=p[indPilha].topo; i++){///imprimi a sequencia de numeros da pilha
            printf("%d ",p[indPilha].elemento[i]);
        }
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

            printf("\nDigite um numero que voce deseja inserir na pilha \n");
            scanf("%d", &valoremp);
            if(!empilha(&p[indPilha], valoremp)){///referencia
                printf("\nValor %d nao empilhado.", valoremp);
                printf("\n\tDigite qualquer tecla para continuar\n");
                getch();
                break;
            }
            else{
                break;
            }
            case 'd':
                if(desempilha(&p[indPilha], &valor))///referencia
                    printf("\n\nvalor desempilhado = %d\n", valor);
                else
                    printf("\nPilha Vazia!");
                printf("\ndigite qualquer tecla para continuar...");
                getch();
                break;
            case 't':
                tampi = tamanho(p[indPilha]);
                printf("\n\nTamanho da Pilha =  %d \n", tampi);

                printf("\tdigite qualquer tecla para continuar...");
                getch();
                break;
            case 'o':
                if (!topo(p[indPilha], &valortopo)){
                    printf("\n\n\t Pilha vazia\n\n");


                }else{
                    printf("\n\n\t o valor que esta no topo e = %d\n", valortopo);

                }
                printf("\n\t Digite qualquer tecla para continuar...");
                getch();
                break;
            case 'v':
                if(!vazia(p[indPilha])){
                    printf("\n\n\t Pilha NAO esta vazia");
                }else{
                    printf("\n\n\t Pilha  Vazia ");
                }
                printf("\n\t Digite qualquer tecla para continuar");
                getch();
                break;
            case 'r':
                printf("\n\nDeseja realmente inverter os conteudos da pilha ? (S/N)");
                confirm = tolower(getche());
                if((confirm == 's')&&(!vazia(p[indPilha]))){
                    tampi = tamanho(p[indPilha]);
                    inverter(&p[indPilha], tampi);///referencia
                    printf("\n\n\t Pilha Invertida com sucesso");
                    printf("\n\tDigite qualquer tecla para continuar...");
                    getch();
                }

                break;
            case 'z':
                printf("\n\nvoce deseja realmente esvaziar a pilha ? (S/N)\n");
                confirm = tolower(getche());
                if((confirm=='s')&& (!vazia(p[indPilha]))){
                    esvaziar(&p[indPilha]);///referencia
                    printf("\n\tPilha esvaziada com Sucesso!\n");
                    printf("\n\n\tDigite qualquer tecla para continuar");
                    getch();
                }


                break;
            case 'm':
                printf("\n\nDigite uma pilha valida de (1 a 3)");
                scanf("%d", &indPilha2);
                if((indPilha2 <= 3) && (indPilha2 >=1)){
                    indPilha = indPilha2-1;
                }else{
                    printf("\n\nPilha Inexistente !");
                    printf("\t\n Digite qualquer tecla para continuar");
                    getch();

                }

                break;
            case 'c' :
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
            case 'p':
                printf("\nDigite um texto para verificar se e palindromo");
                gets(texto);
                t = strlen(texto);


                for(i=0; i<t; i++){
                    conv[i] = texto[i];
                }

                if(!palindromo(conv, t)){
                    printf("\n\n\tnao e palindromo");
                }else{
                    printf("\n\n\te palindromo");
                }
                printf("\n\tDigite qualquer tecla para continuar...");
                getch();


                break;
            case 's':
                return 0;


        }///fim do switch

    }///fim do for

    return 0;
}
