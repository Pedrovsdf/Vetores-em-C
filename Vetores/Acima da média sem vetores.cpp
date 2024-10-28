#include <stdio.h>
int main(){
	float nota1=0, nota2=0, nota3=0, nota4=0, nota5=0, nota6=0, nota7=0, nota8=0, nota9=0, nota10=0, nota11=0, nota12=0;
	float nota13=0, nota14=0, nota15=0, nota16=0, nota17=0, nota18=0, nota19=0, nota20=0, nota21=0, nota22=0, nota23=0;
	float nota24=0, nota25=0, nota26=0, nota27=0, nota28=0, nota29=0, nota30=0, mediaind1=0, mediaind2=0, mediaind3=0;
	float mediaind4=0, mediaind5=0, mediaind6=0, mediaind7=0, mediaind8=0, mediaind9=0, mediaind10=0, mediatotal=0;


	printf("\nDigite as 3 notas do aluno 1:\n");
	scanf("%f", &nota1);
	scanf("%f", &nota2);
	scanf("%f", &nota3);

	printf("\nDigite as 3 notas do aluno 2:\n");
	scanf("%f", &nota4);
	scanf("%f", &nota5);
	scanf("%f", &nota6);
	
	printf("\nDigite as 3 notas do aluno 3:\n");
	scanf("%f", &nota7);
	scanf("%f", &nota8);
	scanf("%f", &nota9);
	
	printf("\nDigite as 3 notas do aluno 4:\n");
	scanf("%f", &nota10);
	scanf("%f", &nota11);
	scanf("%f", &nota12);
	
	printf("\nDigite as 3 notas do aluno 5:\n");
	scanf("%f", &nota13);
	scanf("%f", &nota14);
	scanf("%f", &nota15);
	
	printf("\nDigite as 3 notas do aluno 6:\n");
	scanf("%f", &nota16);
	scanf("%f", &nota17);
	scanf("%f", &nota18);
	
	printf("\nDigite as 3 notas do aluno 7:\n");
	scanf("%f", &nota19);
	scanf("%f", &nota20);
	scanf("%f", &nota21);
	
	printf("\nDigite as 3 notas do aluno 8:\n");
	scanf("%f", &nota22);
	scanf("%f", &nota23);
	scanf("%f", &nota24);
	
	printf("\nDigite as 3 notas do aluno 9:\n");
	scanf("%f", &nota25);
	scanf("%f", &nota26);
	scanf("%f", &nota27);
	
	printf("\nDigite as 3 notas do aluno 10:\n");
	scanf("%f", &nota28);
	scanf("%f", &nota29);
	scanf("%f", &nota30);
	
	mediaind1 = (nota1 + nota2 + nota3)/3;
	mediaind2 = (nota4 + nota5 + nota6)/3;
	mediaind3 = (nota7 + nota8 + nota9)/3;
	mediaind4 = (nota10 + nota11 + nota12)/3;
	mediaind5 = (nota13 + nota14 + nota15)/3;
	mediaind6 = (nota16 + nota17 + nota18)/3;
	mediaind7 = (nota19 + nota20 + nota21)/3;
	mediaind8 = (nota22 + nota23 + nota24)/3;
	mediaind9 = (nota25 + nota26 + nota27)/3;
	mediaind10 = (nota28 + nota29 + nota30)/3;
	
	mediatotal = (mediaind1 + mediaind2 + mediaind3 + mediaind4 + mediaind5 + mediaind6 + mediaind7 + mediaind8 + mediaind9 + mediaind10)/10;
	
	printf("\nA media total eh de: %.2f\n", mediatotal);
	printf("\nOs alunos que estao acima da media e suas notas sao: \n ");
	
	if (mediaind1 >= mediatotal){
		printf("\nAluno: 1\nEsta acima da media, com media: %.2f\nSuas notas sao: %.2f, %.2f e %.2f\n", mediaind1, nota1, nota2, nota3);
	}
	if (mediaind2 >= mediatotal){
		printf("\nAluno: 2\nEsta acima da media, com media: %.2f\nSuas notas sao: %.2f, %.2f e %.2f\n", mediaind2, nota4, nota5, nota6);
	}
	if (mediaind3 >= mediatotal){
		printf("\nAluno: 3\nEsta acima da media, com media: %.2f\nSuas notas sao: %.2f, %.2f e %.2f\n", mediaind3, nota7, nota8, nota9);
	}
	if (mediaind4 >= mediatotal){
		printf("\nAluno: 4\nEsta acima da media, com media: %.2f\nSuas notas sao: %.2f, %.2f e %.2f\n", mediaind4, nota10, nota11, nota12);
	}
	if (mediaind5 >= mediatotal){
		printf("\nAluno: 5\nEsta acima da media, com media: %.2f\nSuas notas sao: %.2f, %.2f e %.2f\n", mediaind5, nota13, nota14, nota15);
	}
	if (mediaind6 >= mediatotal){
		printf("\nAluno: 6\nEsta acima da media, com media: %.2f\nSuas notas sao: %.2f, %.2f e %.2f\n", mediaind6, nota16, nota17, nota18);
	}
	if (mediaind7 >= mediatotal){
		printf("\nAluno: 7\nEsta acima da media, com media: %.2f\nSuas notas sao: %.2f, %.2f e %.2f\n", mediaind7, nota19, nota20, nota21);
	}
	if (mediaind8 >= mediatotal){
		printf("\nAluno: 8\nEsta acima da media, com media: %.2f\nSuas notas sao: %.2f, %.2f e %.2f\n", mediaind8, nota22, nota23, nota24);
	}
	if (mediaind9 >= mediatotal){
		printf("\nAluno: 9\nEsta acima da media, com media: %.2f\nSuas notas sao: %.2f, %.2f e %.2f\n", mediaind9, nota25, nota26, nota27);
	}
	if (mediaind10 >= mediatotal){
		printf("\nAluno: 10\nEsta acima da media, com media: %.2f\nSuas notas sao: %.2f, %.2f e %.2f\n", mediaind10, nota28, nota29, nota30);
	}
	
	return 0;
}
