//Crie um programa que leia o nome, idade e salário de uma pessoa e logo após mostre na tela os 3
//valores na mesma linha, no formato “Nome: …, Idade: …, Salário: ...”

#include <stdio.h>
#include <locale.h>
#include <windows.h>

main()
{
	setlocale(LC_ALL,"portuguese");
	
	char nome[1000];
	int idade;
	float salario;
	
	
	
	printf("Escreva o seu nome: ");
	gets(nome);
	
	printf("\nEscreva a sua idade: ");
	scanf("%d",&idade);
	
	printf("\nEscreva o seu salario: ");
	scanf("%f",&salario);
	
	printf("\n%15s %15s %15s\n","Nome","Idade","Salário");
	printf("%15s %15.2d %15.2f",nome,idade,salario);	
	
}
