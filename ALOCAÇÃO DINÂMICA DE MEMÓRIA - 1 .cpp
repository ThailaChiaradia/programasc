//1. Escreva um programa que mostre o tamanho em byte que cada tipo de dados ocupa na mem�ria: char, int, float, double.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

int main(void){
	
	setlocale(LC_ALL,"portuguese");
	
	
	printf("\nO tamanho em byte de CHAR �: %li",sizeof(char));
	
	printf("\nO tamanho em byte de INT �: %li",sizeof(int));
	
	printf("\nO tamanho em byte de FLOAT �: %li",sizeof(float));
	
	printf("\nO tamanho em byte de DOUBLE �: %li",sizeof(double));
	
	return 0;
}

