#include <stdio.h>
#include <math.h>

int main (){
	int i=0;
	float vetor[10], razao=0;
	
	printf ("Digite o valor inicial da progressao aritmetica: ");
	scanf ("%f", &vetor[0]); 

	printf ("Digite o valor da razao: ");
	scanf ("%f", &razao);
	
	for (i=0; i < 10; i++){
		vetor[i+1] = vetor[i] + razao;
	}
	
	printf ("A progressao aritmetica eh:\n");
	
	for (i=0; i < 10; i++){
		printf ("%.2f\n", vetor[i]);
	}
	
	return 0;
}
