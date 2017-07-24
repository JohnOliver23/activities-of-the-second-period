#include <stdio.h>
#define row 2
#define column 3

int main(){
int i, j, matriz1[row][column], transposta[column][row];
    //matriz 1
    for(i=0;i<row;i++){
        for(j=0;j<column;j++){
            printf("Digite m[%d][%d] = ",i, j);
            scanf("%d",&matriz1[i][j]);
        }
    }
        //matriz2
        for(i=0;i<row;i++){
            for(j=0;j<column;j++){
            transposta[j][i]=matriz1[i][j];
            }
        }
            printf("o resultado e :\n");
        //mostrar o resultado
        for(i=0;i<column;i++){
            for(j=0;j<row;j++){
                printf("%d ", transposta[i][j]);
            }
            printf("\n");
        }






return 0;
}
