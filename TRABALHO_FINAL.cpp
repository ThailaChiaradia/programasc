//Rafaela Flôres Jardim e Thaila Luiza Chiaradia - Atividade Avaliativa 
//Técnico em Desenvolvimento de Sistemas II
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>	//para usar setlocale
#include <windows.h>
#include <unistd.h>	//para usar sleep
#define AUX 50
typedef struct {	// define  uma STRUCT para armazenar os dados
	char nome_restaurante[80];
	char bairro[80];
	char cidade[80];
	char comida[80];
	float nota;
	int ativo;	
} estrutura_dados;
estrutura_dados restaurante[AUX];

void menu();
void novo_restaurante();
void listar_restaurantes();
void remover_restaurantes();
void nota_rest();
void tipocomida(); //declara as funções que estão abaixo do main, para serem utilizadas

main() {
	setlocale(LC_ALL, "Portuguese");
	menu();
	system("pause");
}
void menu() {
	int aux=1, i;
	do { //menu de escolhas
		system("cls");
		printf("\n-> ESCOLHA UMA DAS OPÇÕES <-\n");
		printf("\n-------------------------------------------------------------------------------------------------\n");
		printf("\n Se você deseja inserir um novo restaurante na lista, DIGITE 1");
		printf("\n\n-------------------------------------------------------------------------------------------------\n\n");
		printf(" Se você deseja listar todos os restaurantes da lista, DIGITE 2");
		printf("\n\n-------------------------------------------------------------------------------------------------\n\n");
		printf(" Se você deseja excluir um restaurante da lista, DIGITE 3");
		printf("\n\n--------------------------------------------------------------------------------------------------------\n\n");
		printf(" Se você deseja exibir os restaurantes da lista com uma nota superior ou igual a que você definir, DIGITE 4");
		printf("\n\n--------------------------------------------------------------------------------------------------------\n\n");
		printf(" Se você deseja exibir os restaurantes da lista com um determinado tipo de comida, DIGITE 5");
		printf("\n\n-------------------------------------------------------------------------------------------------\n\n");
		printf(" Se você deseja sair do programa, DIGITE 0");
		printf("\n\n-------------------------------------------------------------------------------------------------\n\n");
		printf(" INSIRA A OPÇÃO ESCOLHIDA --> "); 
		scanf("%d", &aux);	// le a opção escolhida pelo usuário
		system("cls");
		getchar();
		switch (aux) {	//leva para as instruções de cada opção caso digitada
			case 1:
				novo_restaurante();	//vai para a função de incluir um novo restaurante
				break;
			case 2:
				listar_restaurantes();	//Vai para a função de listar os restaurantes incluidos
				break;
			case 3:
				remover_restaurantes();	//vai para a função de remover o restaurante solicitado 
				break;
			case 4:
				nota_rest();	// vai para a função de listar os restaurantes com nota superior à que o usuário solicitar
				break;
			case 5:
				tipocomida();	// vai para a função de mostrar os restaurantes com o tipo de comida que o usuário solicitar
				break; 
			case 0:				// Ao usuário digitar 0 o programa fecha
					exit(0);
					break;
			default:			//Se o usuário digitar um número que não está nas opções o default volta ao começo do programa para digitar um número valido
				printf("\n\t\t ERRO --> A OPÇÃO NÃO EXISTE!\n");
				printf("\n\n");
				sleep(2);
				system("cls");
				break;
			}
	} while(aux != 0); // enquanto o usuário não digita 0, o progrmaa continuará sendo executado
}
void novo_restaurante() {	// função 1 - incluir restaurantes
	char nome_restaurante[80];
	char bairro[80];
	char cidade[80];
	char comida[80];
	float nota;	//declara as variaveis cde informações da listagem de restaurantes
	int op=1, i;
	do {
		system("cls");
 		printf("\n---------------------------------------------------");
	 	printf("\n");
	 	printf("\n Digite o nome do restaurante:  "); //digitar o nome do restaurante
	 	fflush(stdin);	//descarrega os buffers de saída de um fluxo de dados
	 	gets(nome_restaurante);// ler o nome do restaurante
	 	printf("\n Em que bairro o restaurante está localizado? ");
	 	scanf("%s", &bairro);	// le o bairro
	 	printf("\n E a cidade? ");
	 	getchar();	
	 	scanf("%s", &cidade);//le acidade
	 	printf("\n Qual o tipo de comida é fornecida pelo restaurante? ");
		getchar();
	 	scanf("%s", &comida);	//le a comida
	 	do {
	 	printf("\n Insira a nota que daria para esse estabelecimento, de 0 a 5: ");
	 	scanf("%f",&nota);	//le a nota do restaurante
	 	if(nota > 5 or nota < 0) {
	 		printf("\nA nota deve estar entre 0 e 5!\n");
	 		scanf("%f",&nota);//le a nova nota digitada pelo usuário
		} } while(nota > 5 or nota < 0);// enquanto a nota for menor que 0 e maior que 5 o programa pedira para digitar novamente
		
		for (i=0; i < AUX; i++) {
			if (restaurante[i].ativo==0) {
				strcpy(restaurante[i].nome_restaurante,nome_restaurante);
				strcpy(restaurante[i].bairro,bairro);
				strcpy(restaurante[i].cidade,cidade);
				strcpy(restaurante[i].comida,comida);	//strcpy copia, quando excluida, a segunda variavel para a primeira.  
				restaurante[i].nota = nota;
				restaurante[i].ativo = 1;
				break;
			}
		}
	 	printf("\n---------------------------------------------------");
	 	printf("\nPara VOLTAR digite 0, caso contrário, digite 1: ");
	 	scanf("%d",&op);
	 } while(op==1);
}
void listar_restaurantes() {	//função 2- Listar os restaurantes declarados
	int op=1, i;
	
	FILE *arquivo;
	arquivo = fopen("arquivo.txt", "w+");
	
	if(arquivo == NULL)
	{
		printf("\n\n ERRO DE ARQUIVO \n\n");
	}
	
		do {
	system("cls");
	printf("\nLISTAGEM DE RESTAURANTES\n");
	printf("\n---------------------------------------------------\n");
				for(i=0;i<AUX;i++) {
					if (restaurante[i].ativo==1) {
					printf(" Restaurante %d\n",i+1);//número do restaurante
					printf(" Nome --> %s\n", restaurante[i].nome_restaurante);//nome do restaurante
					printf(" Bairro --> %s\n", restaurante[i].bairro);//nome do bairro
					printf(" Cidade --> %s\n", restaurante[i].cidade);//nome da cidade
					printf(" Tipo de Comida --> %s\n", restaurante[i].comida);//nome do tipo de comida
					printf(" Nota --> %.1f\n", restaurante[i].nota);//nota do restaurante
					printf("\n");
					}
					fprintf(arquivo," %s\n %s\n %s\n %s\n %.1f\n\n",restaurante[i].nome_restaurante,restaurante[i].bairro,restaurante[i].cidade,restaurante[i].comida,restaurante[i].nota);
				}
				
		printf("\n---------------------------------------------------");
	 	printf("\nPara SAIR digite 0, caso contrário, digite 1: ");
	 	scanf("%d",&op);
	 	} while(op!=0);	// O programa ficará nas listagem de restaurantes enquanto o usuario nao digitar 0
		system("cls");
}
void remover_restaurantes() { // opcao 3 - excluir restaurante
	int nome_excluir;	// variavel para ler qual restaurantesera excluido
	int i;
	
	FILE *excluidos;
	excluidos = fopen("excluidos.txt", "w+");
	printf(" \nDigite posição do restaurante que deseja exluir: ");
	scanf("%d",&nome_excluir);	// le o numero do restaurante que sera excluido
	nome_excluir--;	//para ajustar aos indices que começam em 0,
	restaurante[nome_excluir].ativo = 0;
	sleep(1);
	printf("\n O restaurante foi excluído!");
	listar_restaurantes(); // mostra a lista dos restaurantes atualizada
	system("cls");
	
	for(i=0;i<AUX;i++) {
	fprintf(excluidos," %s\n %s\n %s\n %s\n %.1f\n\n",restaurante[nome_excluir].nome_restaurante,restaurante[nome_excluir].bairro,restaurante[nome_excluir].cidade,restaurante[nome_excluir].comida,restaurante[nome_excluir].nota);
	}
}
void nota_rest() { //opção 4 - mostra os restaurantesco nota superior á digitada pelo usuário
	int i, op=1;
	float nota;
	system("cls");
	do {
	printf("\nDigite a nota para que restaurantes que a tenham sejam exibidos: ");
	scanf("%f",&nota); // le a nota que o usuario quer
		for(i=0;i<AUX;i++) {
					if (restaurante[i].nota>=nota) {	//se o restaurante tiver a nota maior ou igual a nota digitada, o restaurante irá aparecer
					printf(" \nRestaurante %d\n",i+1);
					printf(" Nome --> %s\n", restaurante[i].nome_restaurante);
					printf(" Bairro --> %s\n", restaurante[i].bairro);
					printf(" Cidade --> %s\n", restaurante[i].cidade);
					printf(" Tipo de Comida --> %s\n", restaurante[i].comida);
					printf(" Nota --> %.1f\n", restaurante[i].nota);
					printf("\n");
					}	// mostra os dados do(s) restaurante(s)
				} 
		printf("\n---------------------------------------------------");
	 	printf("\nPara VOLTAR digite 0, caso contrário, digite 1: ");
	 	scanf("%d",&op);//LE A OPÇÃO DIGITADA PELO USUÁRIO
	}while(op!=0);//CONTINUA SENDO LISTADO ENQUANTO O USUÁRIO NAO DIGITAR 0
}
void tipocomida() {	// OPÇÃO 5- MOSTRAOS RESTAURANTES COM O TIPO DE COMIDA SOLICITADA PELO USUÁRIO
	int i, op=1;
	char comida[80];
	system("cls");
	do {
	printf("\nDigite o tipo de comida para que restaurantes que a tenham sejam exibidos: ");
	scanf("%s",&comida);//LE O TIPO DE COMIDA SOLICITADA PELO USUARIO
		for(i=0;i<AUX;i++) {
					if (strstr(restaurante[i].comida,comida)!=NULL) {  //a string restaurante[i].comida que está dentro da struct restaurante recebe a constante comida 
																	//e executa o if caso ela armazene qq coisa diferente de nulo.
					printf(" \nRestaurante %d\n",i+1);
					printf(" Nome --> %s\n", restaurante[i].nome_restaurante);
					printf(" Bairro --> %s\n", restaurante[i].bairro);
					printf(" Cidade --> %s\n", restaurante[i].cidade);
					printf(" Tipo de Comida --> %s\n", restaurante[i].comida);
					printf(" Nota --> %.1f\n", restaurante[i].nota);
					printf("\n");
					}//MOSTRA OS RESTAURANTES COM O TIPO DE COMIDA SOLICITADA
				} 
		printf("\n---------------------------------------------------");
	 	printf("\nPara VOLTAR digite 0, caso contrário, digite 1: ");
	 	scanf("%d",&op);//LEA OPÇÃO DO USUARIO
	}while(op!=0); //VOLTA SE O USUARIO DIGITAR 0
}

