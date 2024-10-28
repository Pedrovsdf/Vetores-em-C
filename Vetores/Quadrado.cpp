#include <stdio.h>

int main(){
      
	int i, vetorA[4],vetorB[4];

	printf("Digite os valores do vetorA:\n");
	
	for(i=0; i<4; i++){
		scanf("%d", &vetorA[i]);  
	}
	
	for(i=0; i<4; i++){
		vetorB[i] = vetorA[i] * vetorA[i];
		printf("\nO quadrado de %d eh: %d", vetorA[i], vetorB[i]);
	}
	
	return 0;	
} 
