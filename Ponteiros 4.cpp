//Fa�a um programa que receba dois valores inteiros, ap�s receber esses dois valores,
//uma fun��o deve calcular e retornar para o programa o resultado da
//soma e da subtra��o dos valores. Obs.: Apenas uma fun��o deve realizar esta
//opera��o, desta forma, fa�a uso de ponteiros.

#include <stdio.h>
#include <locale.h>
#include <windows.h>

int main()
{
	setlocale(LC_ALL,"portuguese");
	
	int menos(int x, int y, int*soma);
	int x, y, somaa;
	
	printf("\n Digite um n�mero para X: ");
	scanf("%d",&x);
	
	printf("\n Digite um n�mero para Y: ");
	scanf("%d",&y);
	
	printf("\n O resuldado de X - Y �: %d",menos(x,y,&somaa));
	
	printf("\n O resuldado de X + Y �: %d",somaa);
	
}

int menos(int x, int y, int *soma)
{
	*soma = x + y;
	
	return x - y;
}







