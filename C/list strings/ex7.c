#include <stdio.h>

int main(){
int i;
char string[50];
	printf("Digite uma frase");
	scanf("%[^\n]s",&string);
	for(i=0;string[i]!='\0';i++){
		if(string[i]==' '){
			string[i]='#';
		}
	}
	for(i=0;string[i]!='\0';i++){
		printf("%c",string[i]);
	}










return 0;
}
