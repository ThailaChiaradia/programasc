//Crie uma estrutura representando um aluno de uma disciplina. 
//Essa estrutura deve conter o número de matrícula do aluno, seu nome e as notas de três provas.
//Defina também um tipo para esta estrutura. Agora, escreva um programa que leia os dados de cinco alunos e os armazena nessa estrutura. 
//Em seguida, exiba o nome e as notas do aluno que possui a maior média geral dentre os cinco.


#include <stdio.h>
#include <locale.h>
#include <windows.h>

main()
{
	setlocale(LC_ALL,"portuguese");
	
	struct ficha_aluno
	{
		char nome[30];
		int matricula;
		float nota1;
		float nota2;
		float nota3;	
		float media;	
	};
	
	struct ficha_aluno aluno[5];
	int i, pos;
	float maior=0.0;
	
	for(i=0; i<5; i++)
	{
		
	printf("\n\n Digite o nome do aluno: ");
	fflush(stdin);
	gets(aluno[i].nome);
	
	printf("\n Digite o número de matrícula do aluno: ");
	scanf("%d",&aluno[i].matricula);
	
	printf("\n Digite a nota 1 do aluno: ");
	scanf("%f",&aluno[i].nota1);
	
	printf("\n Digite a nota 2 do aluno: ");
	scanf("%f",&aluno[i].nota2);
	
	printf("\n Digite a nota 3 do aluno: ");
	scanf("%f",&aluno[i].nota3);
	
	aluno[i].media=((aluno[i].nota1 + aluno[i].nota2 + aluno[i].nota3)/3);
	
		if(aluno[i].media> maior)
		{
			maior = aluno[i].media;
			pos=i;
		}
	}
	
	system("cls");
	
	printf("\n --- SAIDA DE DADOS ---");
	
		for(i=0; i<5; i++)
	{
		
	printf("\n\n Aluno: %s",aluno[i].nome);
	printf(" Matricula: %d",aluno[i].matricula);
	printf("\n Nota 1: %2.f",aluno[i].nota1);
	printf("\n Nota 2: %2.f",aluno[i].nota2);
	printf("\n Nota 3: %2.f",aluno[i].nota3);	
	}	
	

	printf("\n\n  A maior media é do aluno: %s \n Média do aluno: %2.f", aluno[pos].nome, aluno[pos].media);

}
