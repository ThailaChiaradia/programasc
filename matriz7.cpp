//Uma floricultura gostaria de fazer um programa que pudesse controlar sempre um estoque mínimo de determinadas plantas.
// Criar um algoritmo que deixe cadastrar 50 plantas, nome, estoque mínimo, estoque atual. 
//Imprimir ao final do programa uma lista das plantas que devem ser adquiridas.

#include <stdio.h>
#include <locale.h>
#include <windows.h>

int main()
{
	setlocale(LC_ALL,"portuguese");
	
	int q=50, i;
	char plantas[q][30];
	int estoque[q][2];
	
	for(i=0; i<q; i++)
	{
		printf("\n\nDigite o nome da planta: ");
		scanf("%s",&plantas[i]);
		
		printf("\nDigite o estoque mínimo: ");
		scanf("%d",&estoque[i][0]);
		
		printf("\nDigite o estoque atual: ");
		scanf("%d",&estoque[i][1]);
		
	}
		printf("\nPLANTAS CATALOGADAS: \n");
		printf("\nplanta - minimo - atual");
		
	for(i=0; i<q; i++)
	{
		printf("\n %s",plantas[i]);
		printf(" %d %d",estoque[i][0], estoque[i][1]);
	}
		printf("\n\n\nPLANTAS A SEREM ADQUIRIDAS: \n");
		
		
	for(i=0; i<q; i++)
	{
		if(estoque[i][0]>estoque[i][1])
		{
			printf("\n %s",plantas[i]);
		}
	}
	
	
		
	
		
		
	
		
}
