//Escreva um programa que contenha duas variáveis inteiras. Compare seus endereços e exiba o maior endereço.

#include <stdio.h>
#include <locale.h>
#include <windows.h>

main()
{
	setlocale(LC_ALL,"portuguese");
	
	int x, y;
	
	x=100;
	y=200;

	printf("\n Endereços: \n X: %d \n Y: %d",&x, &y);
	printf("\n\n---------------------------------\n");
		if(&x > &y)
		{
			printf("\n O endereço de X é o maior.");
		}
		else
		{
			printf("\n O endereço de Y é o maior.");
		}
}
