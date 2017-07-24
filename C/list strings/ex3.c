#include <stdio.h>
#include <string.h>
int main(){
	int i;
	char string1[200], string2[50], string3[10]="acabou";
	for(i=0;i<1;i++){//for q pega a primeira palavra
		printf("digite uma palavra :");
		gets(string2);
		strcpy(string1,string2);
	}
	for(i=0;strcmp(string2, string3)!=0;i++){//for de concatenação das strings
		printf("digite uma palavra");
		gets(string2);
		if(strcmp(string2, string3)==0){
			continue;
		}
		strcat(string1, " ");
		strcat(string1, string2);
		
	}
	printf("voce digitou %d pavavras\n", i);
	printf("a frase montada ficou \n%s", string1);
	
	
	
	return 0;
}
