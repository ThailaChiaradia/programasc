//3. Fa�a um programa que leia um valor inteiro N n�o negativo.
//Se o valor de N for inv�lido, o usu�rio dever� digitar outro at� que ele seja v�lido (ou seja, positivo).
//Em seguida, leia um vetor V contendo N posi��es de inteiros, em que cada valor dever� ser maior ou igual a 2.
// Esse vetor dever� ser alocado dinamicamente.

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
		printf("\n Digite quantos n�meros vai ter o seu vetor: ");
		scanf("%d",&n);
		
		if(n<0)
		{
			printf("\n\n O n�mero digitado n�o � v�lido. Digite um n�mero positivo: ");
			scanf("%d",&n);
		}
	
	}while(n<0);
				
		ponteiro = (int*)(malloc(n *sizeof(int)));
		
		for(i=0; i<n; i++)
		{
			do
			{
				printf("\n Digite um n�mero para VETOR[%d]: ",i+1);
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
