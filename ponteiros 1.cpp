//Escreva um programa que contenha duas vari�veis inteiras. Compare seus endere�os e exiba o maior endere�o.

#include <stdio.h>
#include <locale.h>
#include <windows.h>

main()
{
	setlocale(LC_ALL,"portuguese");
	
	int x, y;
	
	x=100;
	y=200;

	printf("\n Endere�os: \n X: %d \n Y: %d",&x, &y);
	printf("\n\n---------------------------------\n");
		if(&x > &y)
		{
			printf("\n O endere�o de X � o maior.");
		}
		else
		{
			printf("\n O endere�o de Y � o maior.");
		}
}
