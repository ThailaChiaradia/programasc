//Escreva uma fun��o que receba como par�metro dois vetores, A e B, de tamanho N cada.
// A fun��o deve retornar o ponteiro para um vetor C de tamanho N alocado dinamicamente, em que C[i] = A[i] + B[i].

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>


int main(){
	
	setlocale(LC_ALL,"portuguese");
	
	int *aux(int *a, int *b, int n);
	int *a, *b;
	int *c;
	int n, i;
	
	printf("\n Digite a quantidade de n�meros que o vetor A e B v�o ter: ");
	scanf("%d",&n);
	
	a = (int *)(malloc(n * sizeof(int)));
	b = (int *)(malloc(n * sizeof(int)));
	
	printf("\n\n ************** VETOR DE A **************\n");
	for(i=0; i<n; i++)
	{
		printf("\n Digite um n�mero para A[%d]: ",i+1);
		scanf("%d",&a[i]);
	}
	
	printf("\n\n ************** VETOR DE B **************\n");
	for(i=0; i<n; i++)
	{
		printf("\n Digite um n�mero para B[%d]: ",i+1);
		scanf("%d",&b[i]);
	}
	
	
	c = aux(a, b, n);
	
	for(i=0; i<n; i++)
	{
		printf("\n C[%d]: %d",i+1, c[i]);
	}	

	
}

int *aux(int *a, int *b, int n)
{
	int i;
	int* c = (int*)(malloc (n * sizeof(int)));
	
	for(i=0; i<n; i++)
	{
		c[i] = (a[i] + b[i]);
	}

	return c;
}
