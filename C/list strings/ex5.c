#include <stdio.h>

int main(){
    int i, vogal=0, consoante=0, crcespecial=0, numeros=0;
    char string[50];
    printf("Digite uma frase\n\n");
    scanf("%[^\n]s", string);
    for(i=0;string[i]!='\0';i++){
        if((string[i]>='0')&&(string[i]<='9')){
            numeros++;
        }else {
            if((string[i]>='a')&&(string[i]<='z')||(string[i]>='A')&&(string[i]<='Z')){
                if((string[i]=='a')||(string[i]=='e')||(string[i]=='i')||(string[i]=='o')||(string[i]=='u')||(string=='A')||(string=='E')||(string=='I')||(string=='O')||(string=='U')){
                    vogal++;
                }else{
                    consoante++;
                }
            }
            else{
                crcespecial++;
            }
        }
    }
    printf("a frase informada possui %d numeros\n %d consoantes \n%d vogais e\n %d caracteres especiais ",numeros, consoante, vogal, crcespecial);



return 0;
}
