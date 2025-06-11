#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(void){
	
	setlocale(LC_ALL, "Portuguese");
	
	int opt = 0;
	float grausC, grausF = 0;
	
	while(opt != 2){
		
		printf("Olá seja bem-vindo a nosso coversor de temperaturas!!\n\n");
		printf("Informe uma temperatura em °C e vamos mostrá-las em °F!!\n\n");
		
		printf("\nDigite sua temperatura em °C: ");
		scanf("%f", &grausC);
		
		grausF = (9 * grausC + 160) / 5;
		
		printf("\nSua temperatura em °F: %.2f\n\n", grausF);
		
		printf("\nCaso Deseje continuar ou parar o programa escolha uma dessas opções:\n\n");
		printf("\t\t\t\t1-Continuar    2-Sair\n\n");
		
		printf("Quer continuar?\n>>>");
		scanf("%i", &opt);
		
		system("cls");
		printf("\a");
	}	
		
	if(opt == 2){
		printf("\n\nOk muito obrigado e até a próxima!!! <3<3");
	}
		
	return 0;
}
