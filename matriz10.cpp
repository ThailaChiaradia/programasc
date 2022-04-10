//Construa um programa que carregue uma matriz 12 X 4 com os valores das vendas
//de uma loja, em cada linha represente um m�s do ano, e cada coluna, uma semana
//do m�s. Calcule e imprima:
//� total vendido em cada m�s do ano;
//� total vendido em cada semana durante todo o ano;
//� total vendido no ano

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"portuguese");
	
	int m =12, s=4, i, j;
	float vendas[m][s];
	float soma=0, vendasoma;
	
		for(i=0; i<m; i++)
		{
			printf("\n\n---- M�S %d ----\n",i+1);
			for(j=0; j<s; j++)
			{
				printf("\nDigite o valor de vendas da semana %d do m�s %d: R$",j+1, i+1);
				scanf("%f",&vendas[i][j]);
			}
		}
		
		system("cls");
	
		for(i=0; i<m; i++)
		{
			
			for(j=0; j<s; j++)
			{
				printf("\nO valor de vendas do m�s %d da semana %d: R$%0.2f",i+1, j+1, vendas[i][j]);
				soma+=vendas[i][j];
			}
			printf("\n\n---- O total de vendas do m�s %d �: R$ %0.2f ----\n\n",i+1, soma);
			
			vendasoma = +vendasoma + soma;
			soma = 0;
		}
		printf("\n\nTotal de vendas no ano: R$%0.2f", vendasoma);
}
