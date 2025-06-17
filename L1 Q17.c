#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>

int main(void){
	
	setlocale(LC_ALL, "Portuguese");
	
	
	int num, opt, resto2 = 0, resto3 = 0;
		
	while(opt != 2){
		
		printf("Olá usuário(a). Seja bem -vindo a nossa calculadora de restos de divisões!!\n");
		printf("Digite um valor e mostraremos o resto da divisão por 2 e 3!!\n\n");
		
		printf("Digite  número para a divisão: ");
		scanf("%li", &num);
		
		resto2 = num % 2;
		resto3 = num % 3;
		
		printf("\n\nResultado da operação por 2: %i", resto2);
		printf("\n\nResultado da operação por 3: %i", resto3);
		
		printf("\n\nCaso deseje continuar a execução do programa escolha uma dessas opções:\n\n");
		printf("\t\t\t\t1 - Continuar      2 - Sair\n\n");
		
		printf("Escolha a opção desejada>>> ");
		scanf("%li", &opt);
		
		system("cls");
		printf("\a");
	}
	
	if(opt == 2){
		printf("Ok. Muito obrigado e até o próxima!!");
	}
		
	return 0;
}
