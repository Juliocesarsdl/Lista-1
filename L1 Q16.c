#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>

int main(void){
	
	setlocale(LC_ALL, "Portuguese");
	
	double base, ind, raiz = 0;
	int opt;
		
	while(opt != 2){
		
		printf("Ol� usu�rio(a). Seja bem -vindo a nossa calculadora de raiz!!\n");
		printf("Digite um valor de base qualquer e um valor para o �ndice qualquer e faremos a opera��o!!\n\n");
		
		printf("Digite a base: ");
		scanf("%lf", &base);
		
		printf("\n\nDigite a base: ");
		scanf("%lf", &ind);
		
		raiz = pow(base, 1.0/ind);
		
		printf("\n\nResultado da opera��o: %.2lf", raiz);
		
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
