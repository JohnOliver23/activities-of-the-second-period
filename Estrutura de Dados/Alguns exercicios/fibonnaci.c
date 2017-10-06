#include <stdio.h>
fibonnaci ( int *x, int *y){
	int soma = *x + *y;
	int aux = *y;
	*y = soma;
	*x = aux;
	return soma;
	
}


int main(){
	int r,  a = 0, b = 1;
	printf ("%d %d", a, b);
	while (b<32){
	
	r = fibonnaci (&a, &b);
	printf(" %d", r);

}
	
	return 0;
	
}
