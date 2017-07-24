#include <stdio.h>
#define row 4
#define column 6
#define ano 2011


int main(){
	int i, j,totalanual,maiortotalano =0, maiorano=2011 ,vendaanual,  maiorvendas = 0,somavendas, matriz[row][column];
	float mediadosfabricantes;
	for(i=0;i<row;i++){//for de inserção
		for(j=0;j<column;j++){
			printf("digite a quantidade de vendas no ano de %d do %d fabricante  \n",ano+j, i+1);
			scanf("%d",&matriz[i][j]);
		}
	}
	for(j=0;j<column;j++){//for de vendas em cada ano
        vendaanual=0;
		for(i=0;i<row;i++){
		if(matriz[i][j] > vendaanual){
		    vendaanual=matriz[i][j];
			maiorvendas = i+1;
		}


	}
	printf("o fabricante com maior quantidade de vendas no ano de %d foi o fabricante %d\n",ano+j, maiorvendas);
}
    for(j=0;j<column;j++){//for do maior volume de vendas
            totalanual=0;
            //printf("DEBUG %d%d", maiorano, j);
        for(i=0;i<row;i++){
            totalanual += matriz[i][j];


        }
        if(totalanual>maiortotalano){
           maiorano = ano+j ;
           maiortotalano = totalanual;
        }
    }
    printf("o ano que teve maior numero de  vendas foi o ano de %d com o total de %d\n",maiorano, maiortotalano);
    for(i=0;i<row;i++){//for da média
    	somavendas =0;
    	for(j=0;j<column;j++){
    		somavendas += matriz[i][j];
		}
		mediadosfabricantes= somavendas/6;
		printf("a media de vendas do fabricante %d e de %.2f\n",i+1, mediadosfabricantes);
	}


	return 0;
}
