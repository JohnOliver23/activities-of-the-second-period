#include <stdio.h>
void boublesort (int vet[],int  n){
	int i, j, aux;
	
	for(i=0; i<n; i++){
		
		for(j=0; j<n-1-i; j++){
			
			if (vet[j] > vet[j+1]){
				troca(&vet[j], &vet[j+1]);
			}
		}
	}
}

void troca (int *a, int *b){
	int aux;
	aux = *a;
	*a = *b;
	*b = aux;
}


int main(){
	
	int i,  n =5, vet[5]={3, 5, 2, 4, 1};
	for (i=0; i<n;i++){
		printf("%d ", vet[i]);
	}
	printf ("\n");
	
	boublesort(vet, n);
	
	printf("\n\n");
	
	for (i=0; i<n; i++){
		printf("%d ", vet[i]);
	}
	
	
	
	
	
	
	
	
	return 0;
}
