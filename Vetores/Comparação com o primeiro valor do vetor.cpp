#include <stdio.h>
#include <math.h>

int main (){
	int i=0, vetor[10], comparar=0, maior=0, igual=0, menor=0;
	
	printf ("Digite os valores do vetor:\n");
	
	for (i=0; i < 10; i++){
		scanf ("%d", &vetor[i]);
	}
	
	comparar=vetor[0];

	for (i=1; i < 10; i++){
		if (vetor[i] == comparar){
			igual++;
		}
		if (vetor[i] < comparar){
			menor++;
		}
		if (vetor[i] > comparar){
			maior++;
		}
	}

	printf ("\n%d elementos possuem valor igual, %d possuem valor maior e %d possuem valor menor ao primeiro elemento do vetor", igual, maior, menor);

	return 0;
}
