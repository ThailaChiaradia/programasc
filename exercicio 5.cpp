#include <stdio.h>
#include <locale.h>
#include <windows.h>
main()
{
	setlocale(LC_ALL,"portuguese");
	
	float salario;
	float percentual;
	float atual;
	float divisao;
	float conta;
	
	printf(" Digite o sal�rio do trabalhador: ");
	scanf("%f",&salario);
	
	printf("\n Digite o percentual de aumento: ");
	scanf("%f",&percentual);
	
	divisao = salario / 100;
	conta = divisao * percentual;
	atual = conta + salario;
	
	printf("\n O aumento do salario ser� de: %f",conta);
	
	printf("\n O novo salario ser� de: %f",atual);
	
	
	
	
}
