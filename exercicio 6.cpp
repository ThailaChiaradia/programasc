#include <stdio.h>
#include <locale.h>
#include <windows.h>

main()
{
	setlocale(LC_ALL,"portuguese");
	
	double fahdouble;
	double cdouble;
	int fahint;
	int cint;
	
	printf("Digite o grau em Fahrenheit: ");
	scanf("%lf",&fahdouble);
	
	printf("Digite novamente o grau em Fahrenheit: ");
	scanf("%d",&fahint);
	
	cdouble= ((fahdouble-32.0)*5)/9;
	cint= ((fahint-32)*5)/9;
	
	printf("\n Graus celcius em double: %lf",cdouble);
	printf("\n Graus celcius em inteito: %d",cint);
}
