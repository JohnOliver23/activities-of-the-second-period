#include <stdio.h>

int main(){
int i, palavras=0;
char string[50];
    printf("Digite uma frase");
    scanf("%[^\n]s",string);
    for(i=0;string[i]!='\0';i++){
            if(string[i]==' '){
                palavras++;
            }
        }
    printf("a quantidade de palavras e de %d", palavras+1);





return 0;
}
