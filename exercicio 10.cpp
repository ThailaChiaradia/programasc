#include <stdio.h>
#include <locale.h>
#include <windows.h>



main()
{
	setlocale(LC_ALL,"portuguese");
	
	char nome[100];
	int i;
	
	printf("Digite um nome: ");
	
	gets(nome);
	
	for(i=0; i< nome[i]; i++)
	{
		if(i<4)
		{
			printf("%d : %c  \n", i+1, nome[i]);
			
		}
    }   
	
}
