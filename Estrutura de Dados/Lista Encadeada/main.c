#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

int main()
{
    TLista l, c;
    char opcao;
    int i;
    int valor;
    int tamli;//serve pra guardar o tamanho da lista
    int index;///serve para guardar a posição do valor na função posição
    int position;///serve para ler do usuario a posição q ele eseja obter o elemento
    criar(&l);

     for(;;){
         system("cls");
        printf("Editor de Lista v1.1\n");
        printf("======================\n");
        printf("Lista Selecionada Selecionada: \n");
        printf("<- Elementos [");
        imprimir(l);
        printf("]");
        printf("\n======================\n");
        printf("(i) Inserir Elemento\n");
        printf("(r) remover !\n");
        printf("(t) Tamanho\n");
        printf("(v) vazia\n");
        printf("(p) posicao\n");
        printf("(e) elemento\n");
        printf("(z) Esvaziar Lista\n");
        printf("(x) Remover elementos repetidos\n");
        printf("(d) clonar Lista \n");
        printf("(s) sair\n");
        printf("-------------------------------------\n");
        printf("Digite sua Opcao [ ]\b\b");
        do{
            opcao = tolower(getche());
            printf("\b");
         }while(!strchr("iptveszrdx", opcao));
        switch(opcao){
            case 'i':
                printf("\nDigite o valor que voce deseja inserir na Lista");
                scanf("%d", &valor);
                printf("\nDigite a posicao q vc deseja inserir");
                scanf("%d", &index);
                if(inserir(&l, valor, index)){
                    printf("\nElemento inserido com Sucesso!");
                }else{
                    printf("Não foi possível inserir o elemento...");
                }
                printf("Digite qualquer tecla para continuar...");
                getch();

                break;
            case 't':
                tamli = tamanho(l);
                printf("\nTamanho da lista = %d", tamli);
                printf("\n\tDigite qualquer tecla para continuar...");
                getch();
                break;
            case 'v':
                if(vazia(l)){
                    printf("\nLista Vazia !");
                }else{

                    printf("\nLista NAO Vazia");
                }
                printf("\n\tDigite qualquer tecla para continuar...");
                getch();
                break;

            case 'p':
                printf("\nDigite o valor que voce deseja :");
                scanf("%d", &valor);
                index = posicao(l, valor);
                if(posicao(l, valor)){
                    printf("\n o valor digitado esta nao posicao : %d", index);
                }else{
                    printf("\nValor nao encontrado na Lista !");

                }
                printf("\n\tDigite qualquer tecla para continuar...");
                getch();
                break;
            case 'e':
                printf("\nDigite a posicao para obter o valor");
                scanf("%d", &position);
                if(elemento(l, position, &valor)){
                    printf("\no elemento que esta na posicao %d e : %d", position, valor);
                }else{
                    printf("\nposicao digitada invalida...");

                }
                printf("\n\tDigite qualquer tecla para continuar...");
                getch();
                break;
            case 'z':
                esvaziar(&l);
                break;



            case 'r':
                printf("\nDigite a posicao do valor que voce deseja remover");
                scanf("%d", &index);
                if (!remover(&l, index, &valor)){
                    printf("\nImpossivel remover");
                }else{
                    printf("\nElemento removido com sucesso !");
                    printf("\nValor removido = %d ", valor);


                }
                printf("\nDigite qualquer tecla para continuar...");
                getch();
                break;

            case 'd':
                c = clone(l);
                if(c){
                    printf("\nLista clonada com Sucesso !");
                    printf("\n Lista clonada = ");
                    imprimir(c);


                }else{
                    printf("\nImpossivel clonar lista");
                }
                printf("\nDigite qualquer tecla para continuar...");
                getch();
                break;
            /*case 'x':
                if(!removerRepetido(&l)){
                    printf("\nNao foi possivel remover!");
                }else{
                    printf("\nElementos repetidos removidos com Sucesso !");
                }
                printf("\nDigite qualquer tecla para continuar...");
                getch();
                break;*/




        }

   /*TLista l;
    telem elem;
   criar(&l);
   inserirFinal(&l, 10);
   inserirFinal(&l, 20);
   inserirFinal(&l, 30);
   for (i=1; i<=tamanho(l); i++){
    elemento(l, i, &elem);
    printf("%d ", elem);
   }
   printf("\n");
   return 0;*/

}
return 0;
}
