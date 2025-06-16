#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(void){
	
	setlocale(LC_ALL, "Portuguese");
	
	int opt = 0;
	float alt, larg, comp, vol = 0;
		
	while(opt != 2){
		
		printf("Olá usuário(a). Seja bem-vindo a nossa calculadora de volume!!\n");
		printf("Digite os valores da altura, largura e comprimento e faremos o cálculo>\n\n");
		
		printf("Digite a altura: ");
		scanf("%f", &alt);
		
		printf("\nDigite a largura: ");
		scanf("%f", &larg);
		
		printf("\nDigite a comprimento: ");
		scanf("%f", &comp);
		
		vol = alt * larg * comp;
		
		printf("\n\nO volume da caixa retangular é: %.2f cm³\n", vol);
		
		printf("\nCaso Deseje continuar ou parar o programa escolha uma dessas opções:\n\n");
		printf("\t\t\t\t1-Continuar    2-Sair\n\n");
		
		printf("Quer continuar?\n>>>");
		scanf("%i", &opt);
		
		system("cls");
		printf("\a");
		
	}
	
	if(opt == 2){
		printf("Ok. Muito obrigado e até o próxima!!");
	}
		
	return 0;
}
