#include <stdio.h>
void troca (int *x, int *y){
	int aux;
	aux = *x;
	*x = *y;
	*y = aux;
	
	
}
int main(){
	int a = 10, b = 9;
	
	troca (&a, &b);
	printf(" A = %d  B = %d", a, b);
	
	
}
