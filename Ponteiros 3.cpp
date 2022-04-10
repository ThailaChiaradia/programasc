//Elabore um programa que leia um valor do tipo inteiro e, por meio de função,
//atualize todas as posições de um vetor com o número inteiro lido, 
//depois imprima os valores. Utilize ponteiros para as operações.

#include <stdio.h>
#include <locale.h>
#include <windows.h>

int main()
{
	setlocale(LC_ALL,"portuguese");
	
	void att(int *ponteiro, int *pNum);
	
	int vet[5], i, x;
	
	printf("Digite um valor para X: ");
	scanf("%d", &x);
	
	att(vet, &x);
	
	for(i=0; i<5; i++)
	{
 		printf("\n%d",vet[i]);
	}
}

void att(int *ponteiro, int *posicaox)
{
	int i;
	
	for(i=0; i<5; i++)
	{
		ponteiro[i]=*posicaox;
	}
}

