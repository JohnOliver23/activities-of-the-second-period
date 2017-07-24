#include <stdio.h>

int main(){
int c, vetor[10];

for(c =0; c<=9; c++){
    printf("Digite o %d numero", c+1);
    scanf("%d",&vetor[c]);
}
for(c=9; c>=0; c--){
    if(vetor[c] <0){
        printf("NEGATIVO\n");
    }else{
    printf("%d\n", vetor[c]);
}

}
return 0;
}
