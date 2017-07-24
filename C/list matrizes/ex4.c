#include <stdio.h>
#define column 5
#define row 3

int main(){
int i, j, aprovado=0, soma, matriz[row][column];
for(i=0;i<row;i++){
        soma =0;
        printf("Digite sua matricula");
        scanf("%d", &matriz[i][0]);
    for(j=1;j<column-1;j++){
        printf("digite sua %d nota",j);
        scanf("%d", &matriz[i][j]);
        soma = soma + matriz[i][j];

    }
    matriz[i][4] = soma/3;
}
	for(i=0;i<row;i++){
		if(matriz[i][4]>=70){
			printf("aluno da matricula %d APROVADO\n",matriz[i][0]);
			aprovado++;
		}else{
			printf("Aluno da matricula %d REPROVADO\n",matriz[i][0]);
		}
		
	}
	printf("a quantidade de alunos aprovados foram de %d",aprovado);







return 0;
}
