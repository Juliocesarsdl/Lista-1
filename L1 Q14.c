#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>

int main(void){
	
	setlocale(LC_ALL, "Portuguese");
	
	long long int base, expo, pot = 0;
	int opt;
		
	while(opt != 2){
		
		printf("Ol� usu�rio(a). Seja bem-vindo � nossa calculadora de pot�ncias!!\n");
		printf("Digite a Base e o expoente e daremos o resultado da potencia��o!!\n\n");
		
		printf("Digite a sua base: ");
		scanf("%lli", &base);
		
		printf("\nAgora o seu expoente: ");
		scanf("%lli", &expo);
		
		pot = pow(base, expo);
		
		printf("\n\nA potencia��o entre a base %lli e o expoente %lli �: %lli", base, expo, pot);
		
		printf("\n\nCaso deseje continuar a execu��o do programa escolha uma dessas op��es:\n\n");
		printf("\t\t\t\t1 - Continuar      2 - Sair\n\n");
		
		printf("Escolha a op��o desejada>>> ");
		scanf("%i", &opt);
		
		system("cls");
		printf("\a");
	}
	
	if(opt == 2){
		printf("Ok. Muito obrigado e at� o pr�xima!!");
	}
		
	return 0;
}
