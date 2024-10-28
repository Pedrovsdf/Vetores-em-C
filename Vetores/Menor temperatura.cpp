#include <stdio.h>
#include <math.h>
int main(){
	int i;
	float temp[10], menor=0;

	for( i = 0; i < 10; i++ ){
		printf ("\nDigite o valor da temperatura %d: ", i + 1);
		scanf ("%f", &temp[i]);
	}
	
	for( i = 0; i < 10; i++ ){
		if (temp[i] > temp[i+1]){
			menor = temp[i+1];
		}
	}
	
	for( i = 0; i < 10; i++ ){
		if (temp[i] < menor){
			menor = temp[i];
		}
	}
	
	printf ("\nAs temperaturas inseridas foram:\n");
	for( i = 0; i < 10; i++ ){
		printf ("%.2f\n", temp[i]);
	}
	
	printf ("\nA menor temperatura encontrada foi %f", menor);
	
	return 0;
}
