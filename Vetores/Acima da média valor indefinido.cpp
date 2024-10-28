#include <stdio.h>
int main(){
	int i, n;
		
	printf("Digite a quantidade de alunos: ");
	scanf("%d", &n);

	float nota1[n], nota2[n], nota3[n], mediaind[n], mediatotal=0;

	for( i = 0; i < n; i++ ){
		printf("\nDigite as 3 notas do aluno: %d \n", i + 1);
		scanf("%f", &nota1[i]);
		scanf("%f", &nota2[i]);
		scanf("%f", &nota3[i]);
	}
	
	for( i = 0; i < n; i++ ){
		mediaind[i] = (nota1[i]+nota2[i]+nota3[i])/3;
	}
	
	for( i = 0; i < n; i++ ){
		mediatotal = mediaind[i] + mediatotal;
	}
	
	mediatotal = mediatotal/n;
	
	printf("\nOs alunos que estao acima da media e suas notas sao: \n ");
	
	for( i = 0; i < n; i++ ){
		if ( mediaind[i] >= mediatotal )
			printf("\nAluno: %d\nEsta acima da media, com media: %.2f\nSuas notas sao: %.2f, %.2f e %.2f\n", i + 1, mediaind[i], nota1[i], nota2[i], nota3[i]);
	}
	return 0;
}
