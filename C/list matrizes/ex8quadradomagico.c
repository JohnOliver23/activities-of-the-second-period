#include <stdio.h>
#define row 3
#define column 3
int main(){
	int i, j,soma, somacerta=0, flag=0, matriz[row][column];
	for(i=0;i<row;i++){//for de inserção
		for(j=0;j<column;j++){
			printf("digite o %d numero da %d linha",j+1,i+1);
			scanf("%d",&matriz[i][j]);
		}
	}
		for(i=0;i<row;i++){//for q pega a primeira soma
			for(j=0;j<1;j++){
				somacerta+=matriz[i][j];
			
		}
	}
	
	
		for(i=0;i<row;i++){//for q verifica as linhas
			soma=0;
			for(j=0;j<column;j++){
				soma+=matriz[i][j];
		}
		if(soma!=somacerta){
			flag++;
		}
	}
	
		for(j=0;j<column;j++){//for q verifica as columns
			soma=0;
			for(i=0;i<row;i++){
				soma+=matriz[j][i];
		}
		if(soma!=somacerta){
			flag++;
		}
	}
		for(i=0;i<row;i++){//for de print
			for(j=0;j<column;j++){
				printf("%d ",matriz[i][j]);
		}
		printf("\n");
	}
	
	if(flag==0){
		printf("\nquadrado magico");
	}else{
		printf("\nnao e um quadrado magico");
	}
	
	
	
	
	
	return 0;
}
