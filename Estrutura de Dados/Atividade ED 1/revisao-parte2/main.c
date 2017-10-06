#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include "estoque.h"
#include <string.h>
#define MAX 10

int main()
{
    TProduto itens[MAX];
    TProduto p;
    char opcao;
    float iReajuste;
    int index = 0;
    int codProd;
    int indvalor;///variaveis da funcao alteraValor - Questão E
    float novovalor;///variavel da funcao alteraValor
    int indbaixa, qtderemove;///variaveis da funcao baixaEstoque
    int minimo= 20;///quantidade de estoque minimo

    for(;;){
        printf("l - ler produto a partir do teclado\n");
        printf("i - Imprimir determinado produto\n");
        printf("e - Exibir o produto mais lucrativo\n");
        printf("r - Aplicar reajuste\n");
        printf("a - alterar preco do produto\n");
        printf("d para deletar o ultimo produto cadastrado\n");
        printf("b para diminuir quantidade de um produto\n");
        printf("m para ver produtos que tem a quantidade minima no estoque");
        printf("-------------------------------------\n");
        printf("s - Sair do programa\n");
        printf("Opcao [ ]\b\b");

        do{
            opcao = tolower(getche());
            printf("\b"); // ler um caractere do teclado
        }while(!strchr("lieradbms", opcao));

        switch(opcao){
        case 'l': // lerProduto()
            itens[index] = leProduto();
            index++;
            break;
        case 'i': // imprimir()
            printf("\nNeste momento, existe %d produtos cadastrados.\n", index);
            printf("Digite o numero do produto desejado (1 a %d): ", index);
            scanf("%d", &codProd);

            if( codProd <= 0 || codProd > index )
                printf("Numero do produto invalido!\n");
            else
                imprimeProduto(itens[codProd-1]);
            getche();
            break;
        case 'e': // prodLucrativo()
        {
            //int iLucro;
            //float maiorLucroEncontrado;

            p = prodLucrativo(itens,index);

            printf("\nO produto mais lucrativo eh %s\n\n", p.nome);
            getch();

            //iLucro = prodLucrativo2(itens, index, &maiorLucroEncontrado);
            //printf("O produto mais lucrativo eh o de indice %d. O maior lucro eh %f\n", iLucro,maiorLucroEncontrado);
            break;

        }
        case 'r':
        {

            printf("\n**** ANTES ******\n");
            int i;
            for(i=0; i<index; i++)
                imprimeProduto(itens[i]);

            printf("\n");
            printf("Digite o indice de reajuste: ");
            scanf("%f", &iReajuste);

            reajusta(itens, iReajuste, index);

            printf("\n**** DEPOIS ******\n");
            for(i=0; i<index; i++)
                imprimeProduto(itens[i]);
            printf("\n");

            break;
        }
         case 'a':///altera o valor de venda de um produto especifico
        {
            printf("Digite o indice do valor que deseja alterar");
            scanf("%d", &indvalor);
            printf("digite o novo valor");
            scanf("%f", &novovalor);
            alteraPreco(indvalor, novovalor, itens);
            break;
        }

        case 'd':///apaga o ultimo registro
            {
            apagaLastRegister(itens, index-1);
            index--;
            break;
            }

        case 'b':/// diminui uma quantidade especifica do produto desejado
            {
            printf("Digite o indice do produto que quer dar baixa");
            scanf("%d", &indbaixa);
            printf("digite a quantidade que voce deseja diminuir");
            scanf("%d", &qtderemove);
            baixaEstoque(indbaixa, qtderemove, itens);
            break;
            }
        case 'm':
        {

        menorQtdMinimo(minimo,  index , itens);///lista os produtos com quant min no estoque
        break;

        }
        case 's':
            return 0;
        }



    } // fim do for


    printf("Hello world!\n");
    return 0;
}
