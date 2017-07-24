#include <stdio.h>

int main(){
    int i, tam=0;
char string[10];
        printf("Digite uma frase\n");
        scanf("%[^\n]s",&string);

        for(i=0;string[i]!='\0';i++){
            tam++;
        }
        for(i=tam-1;i>=0;i--){
            printf("%c",string[i]);
        }




return 0;
}
