#include <stdio.h>
#include <stdlib.h>
void selectionSort(int vet[], int n){
	int i, j, aux, menor;
	
	for(i=0; i<n-1; i++){
		menor =i;
		for(j=i+1; j<n; j++){
			if(vet[menor]> vet[j])
				menor = j;
			
		}
		if(i!=menor){
			troca(&vet[i], &vet[menor]);
		}
	}
}

void troca(int *a, int *b){
	int aux;
	aux = *a;
	*a = *b;
	*b = aux;
}
int main(){
	int n=5;
	int vet[5]={3,5, 1, 2, 4};
	int i;
	
	selectionSort(vet, n);
	for (i=0; i<n; i++){
		printf("%d - ", vet[i]);
	}
	
	
	
	
	
	return 0;
}
