#include <stdio.h>
#include <math.h>

int main (){
	int i=0;
	float F[10];
	float C[10];
	
	printf ("Digite as temperaturas em graus Fahrenheit:\n");
	for (i=0; i < 10; i++){
		scanf ("%f", &F[i]);
	}
	
	for (i=0; i < 10; i++){
		C[i]=(5.0/9.0)*(F[i]-32.0);
	}
	
	printf ("\nO equivalente em graus Celsius das temperaturas digitadas, respectivamente, eh:\n");
	for (i=0; i < 10; i++){
		printf ("%f\n", C[i]);
	}
		
	return 0;
}

