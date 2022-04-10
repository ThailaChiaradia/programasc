//Faça um programa que receba dois valores inteiros, após receber esses dois valores,
//uma função deve calcular e retornar para o programa o resultado da
//soma e da subtração dos valores. Obs.: Apenas uma função deve realizar esta
//operação, desta forma, faça uso de ponteiros.

#include <stdio.h>
#include <locale.h>
#include <windows.h>

int main()
{
	setlocale(LC_ALL,"portuguese");
	
	int menos(int x, int y, int*soma);
	int x, y, somaa;
	
	printf("\n Digite um número para X: ");
	scanf("%d",&x);
	
	printf("\n Digite um número para Y: ");
	scanf("%d",&y);
	
	printf("\n O resuldado de X - Y é: %d",menos(x,y,&somaa));
	
	printf("\n O resuldado de X + Y é: %d",somaa);
	
}

int menos(int x, int y, int *soma)
{
	*soma = x + y;
	
	return x - y;
}







