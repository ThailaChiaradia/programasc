//Escreva um programa que aloque dinamicamente uma matriz de inteiros.
//As dimensões da matriz deverão ser lidas do usuário. 
//Em seguida, escreva uma função que receba um valor e retorne 1, caso o valor esteja na matriz, ou retorne 0, no caso contrário.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>


int **aloca_matriz(int **mat,int linha, int coluna, int v);

main(){
	
	setlocale(LC_ALL,"portuguese");
	
    int **mat = NULL, linha, coluna, i, j, v;
    
    printf("\n Quantas linhas a sua matriz terá: ");
    scanf("%d", &linha);
    
    printf("\n Quantas colunas a sua matriz terá: ");
    scanf("%d", &coluna);


    mat = aloca_matriz(mat, linha, coluna, v);


    for(i=0; i<linha; i++)
	{
        for(j=0; j<coluna; j++)
		{
            printf("\nMatriz[%d][%d]: ", i+1, j+1);
            scanf("%d", &mat[i][j]);
        }
    }


    printf("\n*********** Valores da matriz dinâmica ************\n\n");
    for(i=0; i<linha; i++)
	{
        for(j=0; j<coluna; j++)
		{
            printf(" Matriz [%d][%d]: %d\n", i+1, j+1, mat[i][j]);
        }
    }
	
	printf("\n\n Digite o valor que deseja verificar se existe na matriz: ");
	scanf("%d", &v);
	
	if(v != mat[linha][coluna])
	{
		printf("\n O valor digitado não está na matriz\n\n");
	}else{
		printf("\n O valor digitado está na matriz\n\n");	
	}


	for(i=0; i<linha; i++)
	{	
		for(j=0; j<coluna; j++)
		{
			printf("\n %d", mat[i][j]);
		}
	}
}


int **aloca_matriz(int **mat,int linha, int coluna, int v)
{
    int i;
    int j;

    mat = (int **) malloc(linha * sizeof(sizeof(int *)));

    for(i=0; i<coluna; i++)
	{
        mat[i] = (int *) malloc(coluna * sizeof(int));
    }

	return mat;
}


