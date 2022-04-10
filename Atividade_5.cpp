// Um clube social com 37 associados deseja que você faça um programa para armazenar os dados cadastrais desses associados.
// Os dados são: nome, dia, mês e ano de nascimento, valor da mensalidade e quantidade de dependentes.
// O programa deverá ler os dados e imprimir depois na tela. 
// Deverá também informar o associado (ou os associados) com o maior número de dependentes.

#include <stdio.h>
#include <locale.h>
#include <windows.h>

main()
{
	setlocale(LC_ALL,"portuguese");
	
	struct nascimento
	{
		int dia, mes, ano;		
	};
	
	struct dados 
	{
		char nome[70];
		float mensalidade;
		int dependentes;
		
		struct nascimento data;
	};
	int i, n=37, aux1=0;
	
	struct dados dados[n];	
	
	
	for(i=0; i<n; i++)
	{
		fflush(stdin);
		printf("\n\n Digite o nome do associado: ");
		gets(dados[i].nome);
		
		printf("\n Digite o dia da data de nascimento: ");
		scanf("%d",&dados[i].data.dia);
		
		printf("\n Digite o mês da data de nascimento: ");
		scanf("%d",&dados[i].data.mes);
		
		printf("\n Digite o ano da data de nascimento: ");
		scanf("%d",&dados[i].data.ano);
		
		printf("\n Digite a mensalidade do associado: R$");
		scanf("%f",&dados[i].mensalidade);
		
		printf("\n Digite a quantidade de dependentes: ");
		scanf("%d",&dados[i].dependentes);
		
		if(dados[i].dependentes == dados[0].dependentes)
		{
			aux1=i;
		}
		
		 if(dados[i].dependentes > dados[aux1].dependentes)
		{
			aux1=i;
		}
	}
	
		system("cls");
		
		for(i=0; i<n; i++)
		{
			printf("\n\n Nome do associado: %s",dados[i].nome);
			
			printf("\n Data de nascimento: %d/%d/%d",dados[i].data.dia, dados[i].data.mes, dados[i].data.ano);
			
			printf("\n Mensalidade: R$%0.2f",dados[i].mensalidade);
			
			printf("\n Número de dependentes: %d",dados[i].dependentes);
		}		
		
		printf("\n\n\n O associado com mais dependentes é: %s",dados[aux1].nome);
		
	
	
	
	
	
	
	
}
