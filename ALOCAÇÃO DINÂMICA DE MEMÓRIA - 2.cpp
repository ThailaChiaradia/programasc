//2.Elabore um programa que leia do usu�rio o tamanho de um vetor a ser lido. Em seguida, fa�a a aloca��o din�mica desse vetor.
// Por fim, leia o vetor do usu�rio e o imprima.

#include<stdio.h>
#include<stdlib.h>
#include <locale.h>
#include <windows.h>

int main(){
	
	setlocale(LC_ALL,"portuguese");
	
	int a, i;
	int *ponteiro;
	
	printf("\n Digite quantos n�meros vai ter o seu vetor: ");
	scanf("%d",&a);
	
	ponteiro = (int *)(malloc(a  * sizeof(int)));
	
	for(i=0; i<a; i++)
	{
		printf("\n Digite o n�mero para VETOR[%d]: ",i+1);
		scanf("%d",&ponteiro[i]);
	}
	
	for(i=0; i<a; i++)
	{
		printf("\n Vetor[%d]: %d",i+1, ponteiro[i]);		
	}
	
	free(ponteiro);
}
