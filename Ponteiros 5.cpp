//Construa uma função que, recebendo como parâmetros quatro números inteiros,
//devolva ao módulo que o chamou os dois maiores números dentre os quatro recebidos.
//Faça um programa que leia tantos conjuntos de quatro valores quantos o usuário deseje
//e que acione a função para cada conjunto de valores, apresentando a cada vez os dois maiores números.
//Se preferir, utilize vetor para armazenar o conjunto de valores.

#include <stdio.h>
#include <locale.h>
#include <windows.h>

int main()
{
	setlocale(LC_ALL,"portuguese");
	
	void maimen(int vetor[], int *pont_maior, int *pont_maior2);
	int vet[4], x=1, i, maior, maior2;
	
	while(x==1)
	{
		for(i=0;i<4;i++)
		{
			printf("\n Digite um valor para vet[%d]: ",i+1);
			scanf("%d",&vet[i]);
		}
	
	maimen(vet,&maior2, &maior);
	
	printf("\n Maior: %d",maior);
	printf("\n Maior2: %d",maior2);
	printf("\n\n-------------------------------------------------");
	printf("\n Para adicionar mais 4 números digite: 1 \n Para parar o programa digite qualquer outro número: ");
	scanf("%d", &x);
	}
}

void maimen(int vet[], int *pont_maior, int *pont_maior2)
{
	int i=0, pos;
	int maior=0;
 	
	 for(i=0;i<4;i++)
	 {
 		if(vet[i]>maior)
		{
 			maior=vet[i];
 			pos=i;
		}
	}
	
	*pont_maior = maior;
	maior=0;
	
	for(i=0;i<4;i++)
	{
 		if(vet[i] > maior && i!=pos)
		{
 			maior=vet[i];
		}	
	}

	*pont_maior2 = maior;
}
