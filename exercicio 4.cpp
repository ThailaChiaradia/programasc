#include <stdio.h>
#include <locale.h>
#include <windows.h>
main()
{
	setlocale(LC_ALL,"portuguese");
	
	float metro;
	float decimetro;
	float centimetro;
	float milimetro;
	
	printf("Digite a quantidade em metros que quer converter: ");
	scanf("%f",&metro);
	
	decimetro = metro * 10 ;
	centimetro = metro * 100 ;
	milimetro = metro * 1000 ; 
	
	printf("\nA quantidade digitada é igual a: %f",decimetro);
	printf(" decímetros");
	
	printf("\nA quantidade digitada é igual a: %f",centimetro);
	printf(" centímetros");
	
	printf("\nA quantidade digitada é igual a: %f",milimetro);
	printf(" milímetros");
}
