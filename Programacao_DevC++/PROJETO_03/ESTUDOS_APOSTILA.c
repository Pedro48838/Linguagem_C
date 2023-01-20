#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	float nota1, nota2, nota3, nota4;
	float media;
	nota1 = nota2 = nota3 = nota4 = media = 0; 
	
	printf("========== Média Final ==========\n\n");
	printf("Como nos aproximamos do final do ano escolar, iremos calcular e fechar a média dos alunos.\n");
	printf("Aqueles que não obtiverem a média necessária, infelizmente estará reprovado(a).\n");
	printf("Digite a sua primeira nota bimestral: \n");
	scanf("%f", &nota1);
	printf("Digite a sua segunda nota bimestral: \n");
	scanf("%f", &nota2);
	printf("Digite a sua terceira nota bimestral: \n");
	scanf("%f", &nota3);
	printf("Digite a sua quarta nota bimestral: \n");
	scanf("%f", &nota4);
	
	media = (nota1 + nota2 + nota3 + nota4) / 4;
	printf("A sua média escolar foi de: %f\n", media);
	printf("Para passar de ano é necessário que a média seja maior que 7.\n");
	
	if(media >= 7)
	{
		printf("Você está aprovado.\n");
	}else {
		printf("Você está reprovado.\n");
	}
	
	return 0;
	
}
