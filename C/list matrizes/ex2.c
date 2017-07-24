#include <stdio.h>

int main(){
int i, j, matriz1[2][3], matriz2[2][3], matriz3[2][3];
    //matriz 1
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            printf("Digite o %d numero da %d coluna da primeira matriz",j+1, i+1);
            scanf("%d",&matriz1[i][j]);
        }
    }
        //matriz2
        for(i=0;i<2;i++){
            for(j=0;j<3;j++){
            printf("Digite o %d numero da %d coluna da segunda matriz",j+1, i+1);
            scanf("%d",&matriz2[i][j]);
        }
    }
    //soma da matriz 3
          for(i=0;i<2;i++){
              for(j=0;j<3;j++){
              matriz3[i][j]=matriz1[i][j]+matriz2[i][j];
        }
    }
    printf("a soma dos valores das matrizes e :\n");
    //mostra o resultado
          for(i=0;i<2;i++){
              for(j=0;j<3;j++){
              printf("%d ",matriz3[i][j]);
        }
        printf("\n");

    }





return 0;
}
