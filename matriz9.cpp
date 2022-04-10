//Faça um programa em C que possa armazenar as alturas de dez atletas de cinco
//delegações que participarão dos jogos de verão. Imprimir a maior altura de cada
//delegação

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <windows.h>


int main()
{
	setlocale(LC_ALL,"portuguese");
	
	int a=10, i, j;
	float altura[5][a];
	float maior;
	
		for(i=0; i<5; i++)
		{
			printf("\nDelegação %d: \n",i+1);
			
			for(j=0; j<a; j++)
			{
				scanf("%f",&altura[i][j]);
			}
		}
		
		printf("\n\nMAIORES ALTURAS DE CADA DELEGAÇÃO:");
		
		for(i=0; i<5; i++)
		{
			maior = altura[i][0];
			for(j=0; j<a; j++)
			{
				if(altura[i][j]> maior)
				{
					maior= altura[i][j];
				}
				
			}
			printf("\nMaior altura da delegação %d: %0.2f",i+1, maior);
		}
}
