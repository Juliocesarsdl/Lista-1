#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>

int main(void){
	
	setlocale(LC_ALL, "Portuguese");
	
	
	int num, opt, resto2 = 0, resto3 = 0;
		
	while(opt != 2){
		
		printf("Ol� usu�rio(a). Seja bem -vindo a nossa calculadora de restos de divis�es!!\n");
		printf("Digite um valor e mostraremos o resto da divis�o por 2 e 3!!\n\n");
		
		printf("Digite  n�mero para a divis�o: ");
		scanf("%li", &num);
		
		resto2 = num % 2;
		resto3 = num % 3;
		
		printf("\n\nResultado da opera��o por 2: %i", resto2);
		printf("\n\nResultado da opera��o por 3: %i", resto3);
		
		printf("\n\nCaso deseje continuar a execu��o do programa escolha uma dessas op��es:\n\n");
		printf("\t\t\t\t1 - Continuar      2 - Sair\n\n");
		
		printf("Escolha a op��o desejada>>> ");
		scanf("%li", &opt);
		
		system("cls");
		printf("\a");
	}
	
	if(opt == 2){
		printf("Ok. Muito obrigado e at� o pr�xima!!");
	}
		
	return 0;
}
