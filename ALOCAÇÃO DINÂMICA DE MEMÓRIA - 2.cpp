//2.Elabore um programa que leia do usuário o tamanho de um vetor a ser lido. Em seguida, faça a alocação dinâmica desse vetor.
// Por fim, leia o vetor do usuário e o imprima.

#include<stdio.h>
#include<stdlib.h>
#include <locale.h>
#include <windows.h>

int main(){
	
	setlocale(LC_ALL,"portuguese");
	
	int a, i;
	int *ponteiro;
	
	printf("\n Digite quantos números vai ter o seu vetor: ");
	scanf("%d",&a);
	
	ponteiro = (int *)(malloc(a  * sizeof(int)));
	
	for(i=0; i<a; i++)
	{
		printf("\n Digite o número para VETOR[%d]: ",i+1);
		scanf("%d",&ponteiro[i]);
	}
	
	for(i=0; i<a; i++)
	{
		printf("\n Vetor[%d]: %d",i+1, ponteiro[i]);		
	}
	
	free(ponteiro);
}
