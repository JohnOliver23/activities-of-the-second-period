#include <stdio.h>

int main(){
int c, num, sorte=21, numero, vetor[20];

for(c=0; c<=19;c++){
    printf("digite o %d numero",c+1);
    scanf("%d",&vetor[c]);
}

printf("Digite um numero");
scanf("%d",&num);

for(c=0; c<=19;c++){
    if(num==vetor[c]){
        sorte = c;
    }
}
if (sorte==21){
    printf("-1");
}else{
printf("%d",sorte);

}

}
