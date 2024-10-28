#include <stdio.h>
#include <math.h>

int main (){
	int i=0, vetor[6], somapar=0, somaimpar=0, p=0, ip=0;
	
	printf ("Digite os 6 numeros inteiros:\n");
	
	for (i=0; i < 6; i++){
		scanf ("%d", &vetor[i]);
		
		if (vetor[i] % 2==0){
			somapar=somapar + vetor[i];
			p++;
		}else{
			somaimpar=somaimpar + vetor[i];
			ip++;
		}
	}
	
	printf ("\nA quantidade de numeros pares digitados foi de: %d\n", p);
	printf ("A soma dos numeros pares digitados eh de: %d\n", somapar);
	printf ("A quantidade de numeros impares digitados foi de: %d\n", ip);
	printf ("A soma dos numeros impares digitados eh de: %d\n", somaimpar);
	
	return 0;
}

