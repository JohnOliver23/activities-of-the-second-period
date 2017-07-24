#include <stdio.h>
int main(){
int troca, vetor[20], c, i=19, e=19;

for(c=0;c<=19;c++){
printf("digite o %d numero",c);
scanf("%d", &vetor[c]);
}
for (c=0;c<=9;c++){
troca = vetor[c];
vetor[c] = vetor[i--];
vetor[e--] = troca;

}
for (c=0;c<=19;c++){
    printf("numero %d posicao %d\n", vetor[c], c);
}



return 0;
}
