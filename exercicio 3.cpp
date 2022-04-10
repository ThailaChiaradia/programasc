#include <stdio.h>
#include <locale.h>
#include <windows.h>
main()
{
	setlocale(LC_ALL,"portuguese");
	
	float nota1;
	float nota2;
	float nota3;
	float soma;
	float media;
	
	printf("Digite a primeira nota: ");
	scanf("%f",&nota1);
	
	printf("\nDigite a segunda nota: ");
	scanf("%f",&nota2);
	
	printf("\nDigite a terceira nota: ");
	scanf("%f",&nota3);
	
	soma = nota1 + nota2 + nota3;
	media = soma/3;
	
	printf("\nA média das três notas é: %f",media);
	
	
}
