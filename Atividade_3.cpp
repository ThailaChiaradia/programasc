// Crie uma estrutura capaz de armazenar o nome e a data de nascimento de uma pessoa.
// Faça uso de estruturas aninhadas e definição de novo tipo de dado.
// Agora, escreva um programa que leia os dados de seis pessoas.
// Calcule e exiba os nomes da pessoa mais nova e da mais velha.

#include <stdio.h>
#include <locale.h>
#include <windows.h>

main()
{
	setlocale(LC_ALL,"portuguese");
	
	struct data
	{
		int dia;
		int mes;
		int ano;
	};
	struct dados_pessoa
	{
		char nome[70];
		struct data niver;
	};
	
	struct dados_pessoa dados[6];
	
	int i, anos=2021, aux1, aux2, maisnovo =0;
	
	for(i=0; i<6; i++)
	{
		fflush(stdin);
		printf("\n\n Digite o seu nome: ");
		gets(dados[i].nome);
		
		printf("\nDigite o dia que nasceu: ");
		scanf("%d",&dados[i].niver.dia);
		
		printf("\n Digite o mês que nasceu: ");
		scanf("%d",&dados[i].niver.mes);
		
		printf("\n Digite o ano que nasceu: ");
		scanf("%d",&dados[i].niver.ano);
		
		
		// DEFINIÇÃO DAPESSOA MAIS VELHA //
		if(dados[i].niver.ano < anos)
		{
			anos = dados[i].niver.ano;
			aux1 = i; 
		}
				
		else if(dados[i].niver.ano == anos)
		{
			if(dados[i].niver.mes < dados[aux1].niver.mes)
			{
				aux1 = i;	
			}	
			
			else if(dados[i].niver.mes == dados[aux1].niver.mes)
			{
				if(dados[i].niver.dia < dados[aux1].niver.dia)
				{
					aux1 = i;
				}
			}
		}
		
		// DEFINIÇÃO DA PESSOA MAIS NOVA //		
		if(dados[i].niver.ano > maisnovo)
		{
			maisnovo = dados[i].niver.ano;
			aux2 = i;
		}		
		
		else if(dados[i].niver.ano == maisnovo)
		{
			
			if(dados[i].niver.mes > dados[aux2].niver.mes)
			{
				aux2 = i;
			}
			
			else if(dados[i].niver.mes == dados[aux2].niver.mes)
			{
				if(dados[i].niver.dia > dados[aux2].niver.dia)
				aux2 = i;
			}
		}
		
	}
	
	system("cls");
	
	//  SAIDA DE DADOS//	
	for(i=0; i<6; i++)
	{
		printf("\n\n Nome: %s",dados[i].nome);
		printf("\n Data de nascimento: %d/%d/%d",dados[i].niver.dia, dados[i].niver.mes, dados[i].niver.ano);
	}
	
	printf("\n\n A pessoa mais velha é: %s",dados[aux1].nome);	
	printf("\n A pessoa mais nova é: %s",dados[aux2].nome);
}




























