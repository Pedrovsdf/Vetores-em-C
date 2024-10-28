#include <stdio.h>
#include <math.h>

int main (){
	int i=0, vetor[7];
	
	printf ("Digite os valores do vetor:\n");
	
	for (i=0; i < 7; i++){
		scanf ("%d", &vetor[i]); 
	}
	
	printf ("\nOs valores digitados na ordem inversa sao:\n");
	
	for (i=6; i >= 0; i--){
		printf ("%d\n", vetor[i]); 
	}

	return 0;
}
