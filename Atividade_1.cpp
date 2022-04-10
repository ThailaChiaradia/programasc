// Implemente um programa em C que leia o nome, a idade e o endereço de uma pessoa e armazene esses dados em uma estrutura.
// Em seguida, imprima na tela os dados da estrutura lida.
  
#include <stdio.h>
#include <locale.h>
#include <windows.h>

main()
{
	setlocale(LC_ALL,"portuguese");
	
	struct pessoa_dados 
	{
		char nome[30];
		int idade;
		char endereco[100];
	};
	
	struct pessoa_dados dados;
	
	printf("\nDigite o seu nome: ");
	fgets(dados.nome,30,stdin);
	
	printf("\nDigite a sua idade: ");
	scanf("%d",&dados.idade);
	
	printf("\nDigite seu endereço: ");
	scanf("%s",&dados.endereco);
	
	
	printf("\n\n --- SAIDA DE DADOS ---\n\n");
	
	printf(" Nome: %s",dados.nome);
	
	printf(" Idade: %d",dados.idade);
	
	printf("\n Endereço: %s",dados.endereco);
}  

