#include <stdio.h>

void incrementar(int *x){
	*x *=2;
}
int main(){
	
	
	int num =9;
	
	incrementar(&num);
	
	printf("%d", num);
	
	
	
	
	return 0;
}
