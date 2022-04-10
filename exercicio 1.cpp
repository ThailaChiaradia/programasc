#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL,"portuguese");	
	
	
	int hex[10];
	int num;
	int forma;
	int contr=0;
	int contr2;
	int resultado;
	
	
	
	
	printf("Digite um numero DECIMAL: ");
	scanf("%d",&num);
	
	resultado = num;
	
	printf("Escolha para qual forma quer converter:\nHEXADECIMAL tecle 1 ou OCTAL tecle 2: ");
	scanf("%d",&forma);
	
	if(forma == 1)
	{
		forma=16;
	}
	else
	{
		forma=8;
	}
	
	for(;;)
	{
		if(num / forma < forma)
		{
            hex[contr] = resultado % forma;
            contr = contr-1;
            break;
        }

    hex[contr] = resultado % forma;
    

        if(resultado < forma)
		{
			hex[contr+1] = resultado;
            break;

        }
    contr++;

  	
    }
    
	for(contr2 = contr+1; contr2 >= 0; contr2--)
	{
		switch(hex[contr2])
		{
			case 10:
			printf("A");
			break;
			
			case 11:
			printf("B");
			break;
			
			case 12:
			printf("C");
			break;
			
			case 13:
			printf("D");
			break;
			
			case 14:
			printf("E");
			break;
			
			case 15:
			printf("F");
			break;
			
			default:
				printf("%d",hex[contr2]);
			
		}
	}
	
	
	
	
	
	
}
