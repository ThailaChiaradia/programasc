//3. Faça um programa que leia um valor inteiro N não negativo.
//Se o valor de N for inválido, o usuário deverá digitar outro até que ele seja válido (ou seja, positivo).
//Em seguida, leia um vetor V contendo N posições de inteiros, em que cada valor deverá ser maior ou igual a 2.
// Esse vetor deverá ser alocado dinamicamente.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

int main()
{
	setlocale(LC_ALL,"portuguese");
	
	int n, i;
	int *ponteiro;
	
	do
	{
		printf("\n Digite quantos números vai ter o seu vetor: ");
		scanf("%d",&n);
		
		if(n<0)
		{
			printf("\n\n O número digitado não é válido. Digite um número positivo: ");
			scanf("%d",&n);
		}
	
	}while(n<0);
				
		ponteiro = (int*)(malloc(n *sizeof(int)));
		
		for(i=0; i<n; i++)
		{
			do
			{
				printf("\n Digite um número para VETOR[%d]: ",i+1);
				scanf("%d",&ponteiro[i]);
				
				if(ponteiro[i]<2)
				{
					printf("\n O valor de VETOR[%d] deve ser maior que 1 Digite novamente: ",i+1);
					scanf("%d",&ponteiro[i]);
				}
			}while(n<2);
			
		}
		
		for(i=0; i<n; i++)
		{
			printf("\n VETOR[%d]: %d",i+1, ponteiro[i]);
		}
		
		printf("\n*********** Valores do vetor dinamico ************\n\n");
		for(i=0; i<n; i++)
		{			 	 
			 printf(" %d\n",ponteiro[i]);
		}
	
	free(ponteiro);
}
