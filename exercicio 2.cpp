#include <stdio.h>
#include <locale.h>
#include <windows.h>
main()
{
	setlocale(LC_ALL,"portuguese");
	
	
	int nascimento; 
	int atual;
	int idade;
	int ano = 2050;
	
	printf("Digite o ano que voc� nasceu: ");
	scanf("%d",&nascimento);
	
	printf("\nDigite o ano atual: ");
	scanf("%d",&atual);
	
	idade = atual - nascimento;
	
	ano = ano - nascimento;
	
	printf("\nSua idade atual �: %d",idade);
	
	printf("\nSua idade em 2050 ser�: %d",ano);
	
	
}
