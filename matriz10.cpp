//Construa um programa que carregue uma matriz 12 X 4 com os valores das vendas
//de uma loja, em cada linha represente um mês do ano, e cada coluna, uma semana
//do mês. Calcule e imprima:
//• total vendido em cada mês do ano;
//• total vendido em cada semana durante todo o ano;
//• total vendido no ano

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
			printf("\n\n---- MÊS %d ----\n",i+1);
			for(j=0; j<s; j++)
			{
				printf("\nDigite o valor de vendas da semana %d do mês %d: R$",j+1, i+1);
				scanf("%f",&vendas[i][j]);
			}
		}
		
		system("cls");
	
		for(i=0; i<m; i++)
		{
			
			for(j=0; j<s; j++)
			{
				printf("\nO valor de vendas do mês %d da semana %d: R$%0.2f",i+1, j+1, vendas[i][j]);
				soma+=vendas[i][j];
			}
			printf("\n\n---- O total de vendas do mês %d é: R$ %0.2f ----\n\n",i+1, soma);
			
			vendasoma = +vendasoma + soma;
			soma = 0;
		}
		printf("\n\nTotal de vendas no ano: R$%0.2f", vendasoma);
}
