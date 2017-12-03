#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

int main()
{
    TLista l[3];
    TLista clone, resultadofinal, lstseparado;
    char opcao;
    int i;
    int indlista = 0;///indice da lista atual
    int indl1, indl2;///guarda os indices da lista para as funcçoes de interceção e diferença
    int valor;
    int tamli;//serve pra guardar o tamanho da lista
    int index;///serve para guardar a posição do valor na função posição
    int position;///serve para ler do usuario a posição q ele eseja obter o elemento
    for(i=0; i<3; i++){
    criar(&l[i]);
    }

     for(;;){
         system("cls");
        printf("Editor de Lista v1.1\n");
        printf("======================\n");
        printf("Lista Selecionada Selecionada: \n");
        printf("<- Elementos [");
        imprimir(l[indlista]);
        printf("]");
        printf("\n======================\n");
        printf("(i) Inserir Elemento\n");
        printf("(o) Inserir Elementos Ordenadamente\n");
        printf("(r) remover !\n");
        printf("(t) Tamanho\n");
        printf("(v) vazia\n");
        printf("(p) posicao\n");
        printf("(e) elemento\n");
        printf("(z) Esvaziar Lista\n");
        printf("(x) Remover elementos repetidos\n");
        printf("(d) clonar Lista\n");
        printf("(m) Mudar de Lista\n");
        printf("(n) intersecao\n");
        printf("(u) uniao\n");
        printf("(z) diferenca\n");
        printf("(h) separa lista\n");
        printf("(s) sair\n");
        printf("-------------------------------------\n");
        printf("Digite sua Opcao [ ]\b\b");
        do{
            opcao = tolower(getche());
            printf("\b");
         }while(!strchr("iptveszrdxmnudxho", opcao));
        switch(opcao){
            case 'i':
                printf("\nDigite o valor que voce deseja inserir na Lista");
                scanf("%d", &valor);
                printf("\nDigite a posicao q vc deseja inserir");
                scanf("%d", &index);
                if(inserir(&l[indlista], valor, index)){
                    printf("\nElemento inserido com Sucesso!");
                }else{
                    printf("Não foi possível inserir o elemento...");
                }
                printf("Digite qualquer tecla para continuar...");
                getch();

                break;
            case 't':
                tamli = tamanho(l[indlista]);
                printf("\nTamanho da lista = %d", tamli);
                printf("\n\tDigite qualquer tecla para continuar...");
                getch();
                break;
            case 'v':
                if(vazia(l[indlista])){
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
                index = posicao(l[indlista], valor);
                if(posicao(l[indlista], valor)){
                    printf("\n o valor digitado esta nao posicao : %d", index);
                }else{
                    printf("\nValor nao encontrado na Lista !");

                }
                printf("\n\tDigite qualquer tecla para continuar...");
                getch();
                break;
            /*case 'e':
                printf("\nDigite a posicao para obter o valor");
                scanf("%d", &position);
                if(elemento(l, position, &valor)){
                    printf("\no elemento que esta na posicao %d e : %d", position, valor);
                }else{
                    printf("\nposicao digitada invalida...");

                }
                printf("\n\tDigite qualquer tecla para continuar...");
                getch();
                break;*/
            /*case 'z':
                esvaziar(&l);
                break;*/

            case 'r':
                printf("\nDigite a posicao do valor que voce deseja remover");
                scanf("%d", &index);
                if (!remover(&l[indlista], &valor, index )){
                    printf("\nImpossivel remover");
                }else{
                    printf("\nElemento removido com sucesso !");
                    printf("\nValor removido = %d ", valor);


                }
                printf("\nDigite qualquer tecla para continuar...");
                getch();
                break;
            case 'd':
                criar(&clone);
                clone = clonar(l[indlista]);
                if (clone){
                    printf("Lista clonada com Sucesso !\n");
                    imprimir(clone);
                }else{
                    printf("\nImpossivel clonar lista");
                }
                printf("\nDigite qualquer tecla para continuar...");
                getch();
                break;
            case 'm':
                printf("\nDigite  o indice lista q vc deseja usar");
                scanf("%d", &index);
                if(index >=1 && index <=3){
                    indlista = index-1;
                }else{
                    printf("\nIndice invalido...\n");
                    getch();
                }

                break;
            case 'n':///função da interseção
                printf("\nDigite o indice da primeira lista ");
                scanf("%d", &index);
                if(index >=1 && index <=3){
                    indl1 = index-1;
                }else{
                    printf("\nIndice invalido...\n");
                    getch();
                }
                printf("Digite o indice da segunda lista ");
                scanf("%d", &index);
                if(index >=1 && index <=3){
                    indl2 = index-1;
                }else{
                    printf("\nIndice invalido...\n");
                    getch();
                }
                criar(&resultadofinal);
                if(intersecao(l[indl1], l[indl2], &resultadofinal)){
                    printf("Operacao realizado com sucesso\n");
                    printf("Resultado = ");
                    imprimir(resultadofinal);
                }else{
                    printf("nao foi possivel a operacao\n");
                }
                printf("\n\tDigite qualquer tecla para continuar...");
                getch();
                break;
            case 'u':///função da uniao
                printf("\nDigite o indice da primeira lista ");
                scanf("%d", &index);
                if(index >=1 && index <=3){
                    indl1 = index-1;
                }else{
                    printf("\nIndice invalido...\n");
                    getch();
                }
                printf("Digite o indice da segunda lista ");
                scanf("%d", &index);
                if(index >=1 && index <=3){
                    indl2 = index-1;
                }else{
                    printf("\nIndice invalido...\n");
                    getch();
                }
                criar(&resultadofinal);
                if(uniao(l[indl1], l[indl2], &resultadofinal)){
                    printf("Operacao realizado com sucesso\n");
                    printf("Resultado = ");
                    imprimir(resultadofinal);
                }else{
                    printf("nao foi possivel a operacao\n");
                }
                printf("\n\tDigite qualquer tecla para continuar...");
                getch();
                break;
            case 'z':

                printf("\nDigite o indice da primeira lista ");
                scanf("%d", &index);
                if(index >=1 && index <=3){
                    indl1 = index-1;
                }else{
                    printf("\nIndice invalido...\n");
                    getch();
                }
                printf("Digite o indice da segunda lista ");
                scanf("%d", &index);
                if(index >=1 && index <=3){
                    indl2 = index-1;
                }else{
                    printf("\nIndice invalido...\n");
                    getch();
                }
                criar(&resultadofinal);
                if(diferenca(l[indl1], l[indl2], &resultadofinal)){
                    printf("Operacao realizado com sucesso\n");
                    printf("Resultado = ");
                    imprimir(resultadofinal);
                }else{
                    printf("nao foi possivel a operacao\n");
                }
                printf("\n\tDigite qualquer tecla para continuar...");
                getch();
                break;
                if(diferenca(l[indl1], l[indl2], &resultadofinal)){
                    printf("Operacao realizado com sucesso\n");
                    printf("Resultado = ");
                    imprimir(resultadofinal);
                }else{
                    printf("nao foi possivel a operacao\n");
                }
                printf("\n\tDigite qualquer tecla para continuar...");
                getch();
                break;

            case 'x':
                if(!removerRepetido(&l)){
                    printf("\nNao foi possivel remover!");
                }else{
                    printf("\nElementos repetidos removidos com Sucesso !");
                }
                printf("\nDigite qualquer tecla para continuar...");
                getch();
                break;
            case 'h':
                criar(&lstseparado);
                printf("Digite o ponto de quebra da lista\n");
                scanf("%d", &index);
                lstseparado = separa(l[indlista], index);
                if(vazia(lstseparado)){
                    printf("não foi possivel a operacao\n");
                }else{
                    printf("Lista separada com sucesso!\n");
                    printf("nova lista =>");
                    imprimir(lstseparado);
                }
                printf("\n\tDigite qualquer tecla para continuar");
                getch();
            case 'o':
                printf("Digite o valor a ser inserido");
                scanf("%d", &valor);
                if(!inserirOrdenadamente(&l[indlista], valor)){
                    printf("Não doi possivel inserir...\n");
                    printf("Digite qualquer tecla para continuar\n");
                    getch();
                }
                break;



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
