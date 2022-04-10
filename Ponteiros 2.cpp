//Crie um programa que contenha um vetor de inteiros com tamanho 5.
//Utilizando apenas ponteiros, leia valores e armazene neste vetor e após isso, imprima o dobro de cada valor lido.

#include <stdio.h>
#include <locale.h>
#include <windows.h>

main()
{
	setlocale(LC_ALL,"portuguese");
	
	int vet[5], i;
	int *ponteiro = vet;
 
 	for(i=0; i<5; i++)
	{
 		printf("\n Digite um número para vet[%d]: ",i+1);
		scanf("%d", ponteiro+i);
	}
	
	for(i=0; i<5; i++)
	{
		 printf("\n O dobro de vet[%d] é: %d",i+1, vet[i]*2);
	}
}

