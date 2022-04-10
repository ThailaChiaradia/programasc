#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <ctype.h>
#include <stdlib.h>
#include <windows.h>

//compactando funções usuais...
#define pause system("pause")
#define cls system("cls")

//tamanho da tela 
#define SCREEN_WIDTH 100
#define SCREEN_HEIGHT 100

//O jogo da Velha
/*

1 - Menu
2 - J vs J
3 - J vs C
4 - Tutorial
5 - Créditos

*/

using namespace std;

void menu();
void GameJ();
void GameC();
void Tutorial();
void Creditos(); 
void mrProg(int N1, int N2);

//-------------------------------------------------------------------------------------------------------------------------------------------------------------------

int main(){
	
	
	
	setlocale(LC_ALL, "Portuguese");
	
	int opt;
	SetConsoleTitle("JOGO DA VELHA");
	
	while(true){
		
		cls;
		menu();
		cin >> opt;
		if(opt == 1){
			cls;
			GameJ();
			pause;
			cls;
		}if(opt == 2){
			cls;
			GameC();
			pause;
			cls;
		}if(opt == 3){
			cls;
			Tutorial();
			pause;
			cls;
		}if(opt == 4){
			cls;
			Creditos();
			pause;
			cls;
		}if(opt == 5){
			cls;
			break;
		}
		else{
			cls;
		}
	}
	
	
	return 0;
}

void menu(){
	
	system("color 0A");
	
	cout << "   J0GX DA VELHA" << endl << endl; Sleep (200);
	cout << "   1 - P vs P" << endl; Sleep (200);
	cout << "   2 - P vs CPU" << endl; Sleep (200);
	cout << "   3 - Tutorial" << endl; Sleep (200);
	cout << "   4 - Créditos" << endl; Sleep (200);
	cout << "   5 - Sair" << endl << endl; Sleep (200);
	cout << "   opção --> ";
	
}

void GameJ(){
	
	int pX, pY, nJ, jF = 0, pJ1 = 0, pJ2 = 0, z = 0, tab[2][2], NN, aux;
	char J1[30], J2[30];
	
	mrProg(1, 2);  
	mrProg(3, 3); cout << "- Olá!! Pode me chamar de MR. JORGE... " << endl;
	mrProg(4, 4); cout << "- Como vocês se chamam?" << endl;
	mrProg(5, 8);
	
	cout << endl << " Jogador X: ";
	gets(J1);
	gets(J1);
	
	cout << endl << " Jogador O: ";
	gets(J2);
	Sleep(500); cls;
	
	//----------
	
	mrProg(1, 2);  
	mrProg(3, 3); cout << "- Ó!!! Que belos nomes!! " << endl;
	mrProg(4, 4); cout << "- E qunatas dispustas pela vitória você querem ter?" << endl;
	mrProg(5, 8);
	
	cout <<endl << " Número de partidas: ";
	cin >> nJ;
	Sleep(500); cls;
	
	//----------
	
	if ( nJ % 2 == 0 && nJ != 0){
		
		mrProg(1, 2);  
		mrProg(3, 3); cout << "- Isso pode acabar em EMPATE.. mas vamos lá!! " << endl;
		mrProg(4, 8);	
	
	}else if( nJ <= 0){
		
		mrProg(1, 2);  
		mrProg(3, 3); cout << "- Humm... Isso não vai render muito jogo..." << endl;
		mrProg(4, 4); cout << "- Dessa vez eu vou te ajudar!!" << endl;
		mrProg(5, 5); cout << "- Vamos aumentar para UMA partida!!" << endl;
		mrProg(6, 8);

		nJ = 1;	
		
	}else if( nJ >= 11){
		
		mrProg(1, 2);  
		mrProg(3, 3); cout << "- WOW!! Isso sim que é vontade de jogar!!! " << endl;
		mrProg(4, 8);
		
	}else{
		
		mrProg(1, 2);  
		mrProg(3, 3); cout << "- Boa escolha!! vamos nessa!! " << endl;
		mrProg(4, 8);
	}
	
	cout << endl << endl << "  "; pause;
	cls;
	
	//----------
	
	pJ1 = 0;
	pJ2 = 0;
	jF = 1;
			
	while(jF <= nJ){
		
		for(int y = 0; y <=2; y++){
			for(int x = 0; x <= 2; x++){
				tab[y][x] = 0;
			}		
		}
		
		z = 0;
		  
		while(true){
		
			cout << "   - " << J1 << ": " << pJ1 << endl; 	
			cout << "   - " << J2 << ": " << pJ2 << endl << endl; 
			
			// tabuleiro
			NN = 0;
			cout << "       1   2   3  " << endl << endl;
			for(int y = 0; y <= 2; y++){
				
				NN++;
				cout << "   " << NN << "  ";
				
				for(int x = 0; x <= 2; x++){
				
				//le  a matrix
					if(tab[x][y] == 0){
						cout << " " << tab[x][y] << " ";
						
					}else if(tab[x][y] == 1){
						cout << " " << tab[x][y] << " ";
						
					}else if(tab[x][y] == 2){
						cout << " " << tab[x][y] << " ";
						
					}else{
						cout << " " << tab[x][y] << " ";
					}
				
				
				
				
					
					// digita |
					if(x < 2){
						cout << "|";
					}
				}
				
				//linha d meio
				cout << endl;
				if(y < 2){
					cout << "      ---+---+--- " << endl;
				}	
			
			}
			
			cout << "[" << endl;
					for(int i = 0; i < 3; i++)
					{
					    for(int j = 0; j < 3; j++)
					    {
					        cout << " " << tab[j][i] << ", ";
					    }
					
						cout << endl;	
					    
					}
					cout << "]";
			
			cout << endl << endl;
			
			//JOAGADA
			
			if(jF % 2 == 0){
					
				
				
			}else{
				
				if(z % 2 == 0){
				
					cout << "   " << J2 << " de as coordenadas de sua jogada: \n";
					cin >> pX;
					cin >> pY;
					
					if(tab[pX - 1][pY - 1] == 0){
						tab[pX - 1][pY - 1] = 1;
					}
					
				}else{
					
					cout << "   " << J1 << " de as coordenadas de sua jogada: \n";
					cin >> pX;
					cin >> pY;
						
					if(tab[pX - 1][pY - 1] == 0){
						tab[pX - 1][pY - 1] = 2;
						
					}
					
				}
				
			}
			
		
			cls;
			//cout << "  " << pX << "  " <<pY;
			z++;
			
			
			
			//Verificar vitória...
			// horizontal
	if(tab[1][1] == tab[1][2] && tab[1][1] == tab[1][3])
	{
		
		aux == tab[1][1];
	}
	else if(tab[2][1] == tab[2][2] && tab[2][1] == tab[2][3])
	{
		aux == tab[2][1];
	}
	else if(tab[3][1] == tab[3][2] && tab[3][1] == tab[3][3])
	{
		
		aux == tab[3][1];
	}
	
	// vertical
	else if(tab[1][1] == tab[2][1] && tab[1][1] == tab[3][1])
	{
		aux == tab[1][1];
	}
	else if(tab[2][1] == tab[2][2] && tab[2][1] == tab[2][3])
	{
		aux == tab[2][1];
	}
	else if(tab[3][1] == tab[3][2] && tab[3][1] == tab[3][3])
	{
		aux == tab[3][1];
	}
	
	// diagonal
	else if(tab[1][1] == tab[2][2] && tab[1][1] == tab[3][3])
	{
		aux == tab[1][1];
	}
	else if(tab[1][3] == tab[2][2] && tab[1][3] == tab[3][1])
	{
		aux == tab[1][3];
	}
	
		if(aux == 1)
		{
			cout << "O jogador" << J1 << " venceu!"; 
		}
		
		else if(aux == 2)
		{
			cout << "O jogador" << J2 << " venceu!";
		}
	
		}
		
		pause;
	}		
	
}

void GameC(){
	
	
	
}

void mrProg(int N1, int N2){
	
	if(N2 != N1){
		do{
		
		switch (N1){
		
		case 1:
     		cout << " ___________________________ "; 
   			break;
		
		case 2:
     		cout << " ||   _________________   || "; 
   			break;

   		case 3:
    		cout << " ||   | _____   ____  |   || "; 
  	 		break;
   
   		case 4:
     		cout << " ||   |  {()} | {()}  |   || "; 
   			break;

   		case 5:
     		cout << " ||   |      (        |   || "; 
   			break;
   
   		case 6:
     		cout << " ||   |___ /// \\\\\\____|   || "; 
   			break;
   
   		case 7:
     		cout << " ||   |    E>[]<3     |   || "; 
   			break;

   		case 8:
     		cout << " ||___|_____|__|______|___|| "; 
   			break;

   		default:
     		N1 = N2;
			break; 
	}
		cout << endl;
		N1++;
		
	}while(N1 <= N2);

	}else{
		
		switch (N1){
		
		case 1:
     		cout << " ___________________________ "; 
   			break;
		
		case 2:
     		cout << " ||   _________________   || "; 
   			break;

   		case 3:
    		cout << " ||   | _____   ____  |   || "; 
  	 		break;
   
   		case 4:
     		cout << " ||   |  {()} | {()}  |   || "; 
   			break;

   		case 5:
     		cout << " ||   |      (        |   || "; 
   			break;
   
   		case 6:
     		cout << " ||   |___ /// \\\\\\____|   || "; 
   			break;
   
   		case 7:
     		cout << " ||   |    E>[]<3     |   || "; 
   			break;

   		case 8:
     		cout << " ||___|_____|__|______|___|| "; 
   			break;

   		default:
     		N1 = N2;
			break; 
	}	
	}

}

void Tutorial(){
	
	
	
}

void Creditos(){
	
	
	
}



