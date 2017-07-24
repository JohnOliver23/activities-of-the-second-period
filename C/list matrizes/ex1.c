#include <stdio.h>

int main(){
int matriz[3][3], i, j, soma1=0, soma2=0, soma3=0, v=0;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Digite o %d numero da %d coluna",j+1, i+1);
            scanf("%d",&matriz[i][j]);
        }
    }

for(i=0;i<3;i++){//soma da primeira linha
    soma1 = soma1+matriz[0][i];
}
for(i=0;i<3;i++){//soma da terceira coluna
    soma2 = soma2+matriz[i][2];
}
for(i=0;i<3;i++){
    soma3 = soma3+matriz[i][v+i];
}
printf("a soma dos valores da primeira linha e %d\n", soma1);
printf("a soma dos valores da terceira coluna e %d\n", soma2);
printf("a soma dos valores da diagonal e%d\n", soma3);

return 0;
}
