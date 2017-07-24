#include <stdio.h>

int main(){
int c, vetor[10];

for(c =0; c<=9; c++){
    printf("Digite o %d numero", c+1);
    scanf("%d",&vetor[c]);
}
for(c=9; c>=0; c--){
    printf("%d\n", vetor[c]);
}

}
