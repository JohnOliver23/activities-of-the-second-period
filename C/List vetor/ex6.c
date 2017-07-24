#include <stdio.h>

int main(){

int c, i,repit=0, vetor[10];

for (c=0;c<=9;c++){
    printf("Digite um numero");
    scanf("%d", &vetor[c]);
}
for(i=0; i<=9; i++){
        for(c=i+1;c<=9;c++){
            if(vetor[i] == vetor[c]){
                repit++;
            }
        }

}
printf("aconteceu %d repeticoes",repit);


return 0;
}
