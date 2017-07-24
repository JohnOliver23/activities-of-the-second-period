#include <stdio.h>
#define row 3
#define column 3

int main(){
	int i, j,cont =0,cont2=0, flag=0, matriz[row][column];
	for(i=0;i<row;i++){//for de inserção
		for(j=0;j<column;j++){
			printf("digite o %d valor da %d linha [0 ou 1]",j+1,i+1 );
			scanf("%d", &matriz[i][j]);
			}
		}
		
		for(i=0;i<row;i++){//for do print
			for(j=0;j<column;j++){
				printf("%d ",matriz[i][j]);
			}
			printf("\n");
		}
		for(j=0;j<column;j++){//for verificando as linhas
			cont=0;
			for(i=0;i<row;i++){
				if(matriz[i][j]==1){
					cont++;
			}
			if(cont>1){
				flag=1;
			}
		}
			
		}
			for(j=0;j<column;j++){//for verificando as colunas
			cont=0;
			for(i=0;i<row;i++){
				if(matriz[j][i]==1){
					cont++;
			}
			if(cont>1){
				flag=1;
			}
		}
			
		}
		if(flag==0){
			printf("essa matriz e uma permutacao");
		}else{
			printf("essa matriz nao e uma permutacao");
		}
		
		return 0;
	}
	
