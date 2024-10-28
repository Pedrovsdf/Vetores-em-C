#include <stdio.h>
#include <math.h>

int main (){
	float F1=0, F2=0, F3=0, F4=0, F5=0, F6=0, F7=0, F8=0, F9=0, F10=0;
	float C1=0, C2=0, C3=0, C4=0, C5=0, C6=0, C7=0, C8=0, C9=0, C10=0;
	
	printf ("Digite a temperatura 1 em graus Fahrenheit: ");
	scanf ("%f", &F1);
	printf ("Digite a temperatura 2 em graus Fahrenheit: ");
	scanf ("%f", &F2);
	printf ("Digite a temperatura 3 em graus Fahrenheit: ");
	scanf ("%f", &F3);
	printf ("Digite a temperatura 4 em graus Fahrenheit: ");
	scanf ("%f", &F4);
	printf ("Digite a temperatura 5 em graus Fahrenheit: ");
	scanf ("%f", &F5);
	printf ("Digite a temperatura 6 em graus Fahrenheit: ");
	scanf ("%f", &F6);
	printf ("Digite a temperatura 7 em graus Fahrenheit: ");
	scanf ("%f", &F7);
	printf ("Digite a temperatura 8 em graus Fahrenheit: ");
	scanf ("%f", &F8);
	printf ("Digite a temperatura 9 em graus Fahrenheit: ");
	scanf ("%f", &F9);
	printf ("Digite a temperatura 10 em graus Fahrenheit: ");
	scanf ("%f", &F10);
	
	C1=(5.0/9.0)*(F1-32.0);
	C2=(5.0/9.0)*(F2-32.0);
	C3=(5.0/9.0)*(F3-32.0);
	C4=(5.0/9.0)*(F4-32.0);
	C5=(5.0/9.0)*(F5-32.0);
	C6=(5.0/9.0)*(F6-32.0);
	C7=(5.0/9.0)*(F7-32.0);
	C8=(5.0/9.0)*(F8-32.0);
	C9=(5.0/9.0)*(F9-32.0);
	C10=(5.0/9.0)*(F10-32.0);

	printf ("\nO equivalente em graus Celsius da temperatura 1 eh: %.2f", C1);
	printf ("\nO equivalente em graus Celsius da temperatura 2 eh: %.2f", C2);
	printf ("\nO equivalente em graus Celsius da temperatura 3 eh: %.2f", C3);
	printf ("\nO equivalente em graus Celsius da temperatura 4 eh: %.2f", C4);
	printf ("\nO equivalente em graus Celsius da temperatura 5 eh: %.2f", C5);
	printf ("\nO equivalente em graus Celsius da temperatura 6 eh: %.2f", C6);
	printf ("\nO equivalente em graus Celsius da temperatura 7 eh: %.2f", C7);
	printf ("\nO equivalente em graus Celsius da temperatura 8 eh: %.2f", C8);
	printf ("\nO equivalente em graus Celsius da temperatura 9 eh: %.2f", C9);
	printf ("\nO equivalente em graus Celsius da temperatura 10 eh: %.2f", C10);

	return 0;
}
