#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>

int main(void){
	
	setlocale(LC_ALL, "Portuguese");
	
	double base, ind, raiz = 0;
	int opt;
		
	while(opt != 2){
		
		printf("Olá usuário(a). Seja bem -vindo a nossa calculadora de raiz!!\n");
		printf("Digite um valor de base qualquer e um valor para o índice qualquer e faremos a operação!!\n\n");
		
		printf("Digite a base: ");
		scanf("%lf", &base);
		
		printf("\n\nDigite a base: ");
		scanf("%lf", &ind);
		
		raiz = pow(base, 1.0/ind);
		
		printf("\n\nResultado da operação: %.2lf", raiz);
		
		printf("\n\nCaso deseje continuar a execução do programa escolha uma dessas opções:\n\n");
		printf("\t\t\t\t1 - Continuar      2 - Sair\n\n");
		
		printf("Escolha a opção desejada>>> ");
		scanf("%i", &opt);
		
		system("cls");
		printf("\a");
	}
	
	if(opt == 2){
		printf("Ok. Muito obrigado e até o próxima!!");
	}
		
	return 0;
}
