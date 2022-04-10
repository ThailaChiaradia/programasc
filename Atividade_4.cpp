#include <stdio.h>
#include <locale.h>
#include <windows.h>

main()
{
	setlocale(LC_ALL,"portuguese");	
	
	int auxm1, auxa1, total1; 
	int auxm2, auxa2, total2;
	int diferenca_dia, diferenca_mes, diferenca_ano;
	
	struct datas{
		
		int dia, mes, ano;	
	};
	
	struct datas data[2];
	
	printf("\n Digite o dia da primeira data: ");
	scanf("%d",&data[0].dia);
	
	printf("\n Digite o mês da primeira data: ");
	scanf("%d",&data[0].mes);
	
	printf("\n Digite o ano da primeira data: ");
	scanf("%d",&data[0].ano);
	
	printf("\n\n Digite o dia da segunda data: ");
	scanf("%d",&data[1].dia);
	
	printf("\n Digite o mês da segunda data: ");
	scanf("%d",&data[1].mes);
	
	printf("\n Digite o ano da segunda data: ");
	scanf("%d",&data[1].ano);
	
	system("cls");
	
	printf("\n\n Primeira data: %d/%d/%d",data[0].dia, data[0].mes, data[0].ano);
	printf("\n Segunda data: %d/%d/%d",data[1].dia, data[1].mes, data[1].ano);
	
	
	//primeiro dia	
	auxm1 = data[0].mes * 30;
	auxa1 = data[0].ano *365;
	total1= auxm1 + auxa1 + data[0].dia;
	
	
	//segundo dia	
	auxm2 = data[1].mes * 30;
	auxa2 = data[1].ano * 365;
	total2 = auxm2 + auxa2 + data[1].dia;
	
	if(data[0].ano > data[1].ano)
	{
		//calculo final
	diferenca_dia = total1 - total2;
	diferenca_mes = diferenca_dia/30;
	diferenca_ano = diferenca_dia/365;
	}
	else
	{
		//calculo final
		diferenca_dia = total2 - total1;
		diferenca_mes = diferenca_dia/30;
		diferenca_ano = diferenca_dia/365;
	}
	
	
	printf("\n\n A diferença entre as duas datas em dias é: %d",diferenca_dia);
	printf("\n A diferença entre as duas datas em meses é: %d",diferenca_mes);
	printf("\n A diferença entre as duas datas em anos é: %d",diferenca_ano);
	
	
	
	
	
	
	
	
}
