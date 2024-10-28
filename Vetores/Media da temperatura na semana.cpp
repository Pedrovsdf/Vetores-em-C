#include <stdio.h>
#include <math.h>

int main (){
	int i=0, qtd=0;
	float Temp[7], media=0;
	
	printf ("Digite a temperatura registrada em cada dia da semana:\n");
	
	for (i=0; i < 7; i++){
		scanf ("%f", &Temp[i]);
		media=media + Temp[i];
	}
	
	media=media/7;
	
	for (i=0; i < 7; i++){
		if(Temp[i] > media){
			qtd++;
		}
	}
	
	printf ("A media eh: %.2f", media);
	printf ("\nA quantidade de dias da semana em que a temperatura esteve acima da media eh de %d dias", qtd);
	
	return 0;
}
