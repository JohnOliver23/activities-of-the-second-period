#include "estoque.h"
#include <stdio.h>

TProduto leProduto(void){
    TProduto p;

    printf("\n");
    printf("ID..: ");
    scanf("%d", &p.id);
    fflush(stdin);
    printf("Nome: ");
    scanf("%40s[^\n]", p.nome);
    fflush(stdin);
    printf("Quantidade: ");
    scanf("%d", &p.quant);
    fflush(stdin);
    printf("Preco Compra: ");
    scanf("%f", &p.precoCompra);
    fflush(stdin);
    printf("Preco Venda: ");
    scanf("%f", &p.precoVenda);
    fflush(stdin);

    return p;
}

void imprimeProduto(TProduto p){
    printf("\nID..: %d\n", p.id);
    printf("Nome: %s\n", p.nome);
    printf("Quantidade: %d\n", p.quant);
    printf("Preco Compra: %.2f\n", p.precoCompra);
    printf("Preco Venda: %.2f\n", p.precoVenda);
}

void reajusta( TProduto prods[], float porcentagem, int n){
    int i;
    for(i=0; i<n; i++)
        prods[i].precoVenda *=  (1 + (1/porcentagem));
}

TProduto prodLucrativo( TProduto prods[], int n){
    int i;

    float lucro = 0;
    int iLucro = -1;
    for(i=0; i<n; i++){
        if( prods[i].precoVenda - prods[i].precoCompra > lucro){
            lucro = prods[i].precoVenda - prods[i].precoCompra;
            iLucro = i;
        }
    }

    return prods[iLucro];
}
// Deve retornar:
//  (1) o indice do produto mais lucrativo e
//   (2) o valor do maior lucro encontrado
int prodLucrativo2( TProduto prods[], int n, float *mLucro){
   int i;

    float lucro = 0;
    int iLucro = -1;
    for(i=0; i<n; i++){
        if( prods[i].precoVenda - prods[i].precoCompra > lucro){
            lucro = prods[i].precoVenda - prods[i].precoCompra;
            iLucro = i;
        }
    }
    *mLucro = lucro;
    return iLucro;
}
///Questão E- Aleterar o valor do produto
void alteraPreco(int index, float valor, TProduto prods[]){
    prods[index].precoVenda = valor;
}

/// Questao F- Deletar último registro

void apagaLastRegister(TProduto prods[], int indice){
printf("\n\nO iten %s foi removido\n\n", prods[indice].nome);
}
///Questão G Da baixa em uma quantidade fornecida pelo usuario
void baixaEstoque(int indice, int qtd, TProduto prods[]){
    prods[indice].quant =  prods[indice].quant - qtd;

}
///Lista os produtos que tem o estoque minimo
void menorQtdMinimo(int minimo, int indice,  TProduto prods[]){
  int  i;

    for (i=0; i< indice; i++){
        if ( prods[i].quant < minimo){
            printf("\n\nPRODUTO : %s\n\n", prods[i].nome);
        }
    }
}



