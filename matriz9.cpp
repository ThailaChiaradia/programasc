//Fa�a um programa em C que possa armazenar as alturas de dez atletas de cinco
//delega��es que participar�o dos jogos de ver�o. Imprimir a maior altura de cada
//delega��o

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
			printf("\nDelega��o %d: \n",i+1);
			
			for(j=0; j<a; j++)
			{
				scanf("%f",&altura[i][j]);
			}
		}
		
		printf("\n\nMAIORES ALTURAS DE CADA DELEGA��O:");
		
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
			printf("\nMaior altura da delega��o %d: %0.2f",i+1, maior);
		}
}
