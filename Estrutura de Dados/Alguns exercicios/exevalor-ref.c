#include <stdio.h>
#include <stdlib.h>
void adv1(){
	printf("\n Divisão por zero! ERRO\n\n");

}
void adv2(){
	printf("Operação inválida ! Erro\n\n");

}
int operador_a(){
	int a;
	printf("\n Digite o valor para A:");
	scanf("%d", &a);
	return a;
}

int operador_b(){
	int b;
	printf("\n Digite o valor para B:");
	scanf("%d", &b);
	return b;
}
void operacao (int *a, int *b){
	char op;
	printf("\nDigite sua operacao / %:");
	fflush(stdin);
	scanf("%c", &op);
	
	switch(op){
		case '/':
		if (*b==0){
			adv1();
		}	
			printf("\n\n Divisão %d / %d = %d\n\n", *a, *b, *a / *b);
			break;
		case '%':
			printf("\n\n Resto A = %d B= %d Resto = %d\n\n", *a, *b,  *a % *b);
			break;
		default:
			adv2();
			
	}
	
}
int main (){
	
	int a, b;
	a = operador_a();
	b = operador_b();
	operacao(&a, &b);
	
	
	
	return 0;
}
