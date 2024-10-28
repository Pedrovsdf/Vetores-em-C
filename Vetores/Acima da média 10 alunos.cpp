#include <stdio.h>
int main(){
	int i;
	float nota1[10], nota2[10], nota3[10], mediaind[10], mediatotal=0;

	for( i = 0; i < 10; i++ ){
		printf("\nDigite as 3 notas do aluno: %d \n", i + 1);
		scanf("%f", &nota1[i]);
		scanf("%f", &nota2[i]);
		scanf("%f", &nota3[i]);
	}
	
	for( i = 0; i < 10; i++ ){
		mediaind[i] = (nota1[i]+nota2[i]+nota3[i])/3;
	}
	
	for( i = 0; i < 10; i++ ){
		mediatotal = mediaind[i] + mediatotal;
	}
	
	mediatotal = mediatotal/10;
	
	printf("\nA media total eh de: %.2f\n", mediatotal);
	printf("\nOs alunos que estao acima da media e suas notas sao: \n ");
	
	for( i = 0; i < 10; i++ ){
		if ( mediaind[i] >= mediatotal )
			printf("\nAluno: %d\nEsta acima da media, com media: %.2f\nSuas notas sao: %.2f, %.2f e %.2f\n", i + 1, mediaind[i], nota1[i], nota2[i], nota3[i]);
	}
	return 0;
}
