#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(void){
	
	setlocale(LC_ALL, "Portuguese");
	
	int opt = 0;
	float alt, larg, comp, vol = 0;
		
	while(opt != 2){
		
		printf("Ol� usu�rio(a). Seja bem-vindo a nossa calculadora de volume!!\n");
		printf("Digite os valores da altura, largura e comprimento e faremos o c�lculo>\n\n");
		
		printf("Digite a altura: ");
		scanf("%f", &alt);
		
		printf("\nDigite a largura: ");
		scanf("%f", &larg);
		
		printf("\nDigite a comprimento: ");
		scanf("%f", &comp);
		
		vol = alt * larg * comp;
		
		printf("\n\nO volume da caixa retangular �: %.2f cm�\n", vol);
		
		printf("\nCaso Deseje continuar ou parar o programa escolha uma dessas op��es:\n\n");
		printf("\t\t\t\t1-Continuar    2-Sair\n\n");
		
		printf("Quer continuar?\n>>>");
		scanf("%i", &opt);
		
		system("cls");
		printf("\a");
		
	}
	
	if(opt == 2){
		printf("Ok. Muito obrigado e at� o pr�xima!!");
	}
		
	return 0;
}
