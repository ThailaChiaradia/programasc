//Crie um programa que leia e armazene os elementos de uma matriz inteira com tamanho 5 X 5 e imprimi-la. Troque, a seguir:
//• a segunda linha pela quinta;
//• a terceira coluna pela quinta;
//• a diagonal principal pela diagonal secundária.

#include <stdio.h>
#include <locale.h>
#include <windows.h>

int main()
{
	setlocale(LC_ALL,"portuguese");
	
	int a=5, i, j, b,c;
	int mat[a][a];	
	
		
		for(i=0; i<a; i++)
		{
			for(j=0; j<a; j++)
			{
				printf("\nDigite o número da linha %d da coluna %d: ",i+1, j+1);
				scanf("%d",&mat[i][j]);
			}
		}
		system("cls");
		
		printf("\n\n\n------MATRIZ PRINCIPAL------");
		for(i=0; i<a; i++)
		{
			printf("\n\n");
			
				for(j=0; j<a; j++)
				{
					printf(" %d \t",mat[i][j]);
				}
		}
		
		//• a segunda linha pela quinta;
		for(j=0; j<a; j++)
		{
			b=mat[1][j];
			c=mat[4][j];
			mat[1][j]=c;
			mat[4][j]=b;
		}
		
		printf("\n\n\n-----A SEGUNDA LINHA PELA QUINTA LINHA-----");
		for(i=0;i<a; i++)
		{
			printf("\n\n");
			
			for(j=0; j<a; j++)
			{
				printf("%d \t",mat[i][j]);
			}
		}
		
		
		//• a terceira coluna pela quinta;
		for(i=0; i<a; i++)
		{
			b=mat[i][2];
			c=mat[i][4];
			mat[i][2]=c;
			mat[i][4]=b;
		}
		
		printf("\n\n\n-----A TERCEIRA COLUNA PELA QUINTA-----");
		for(i=0; i<a; i++)
		{
			printf("\n\n");
			for(j=0; j<a; j++)
			{
				printf(" %d \t",mat[i][j]);	
			}
		}
		
		//• a diagonal principal pela diagonal secundária.
		i=0;
		for(j=4; j>=0; j--)
		{
			
			b=mat[i][i];
			c=mat[i][j];
			mat[i][i]=c;
			mat[i][j]=b;
			i++;
		}
		
		printf("\n\n\n-----A DIAGONAL PRINCIPAL PELA SECUNDÁRIA-----");
		for(i=0; i<a; i++)
		{
			printf("\n\n");
			
			for(j=0; j<a; j++)
			{
				printf(" %d \t",mat[i][j]);
			}
		}
		
		
		
}

