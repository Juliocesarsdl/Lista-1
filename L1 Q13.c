#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>

int main(void){
	
	setlocale(LC_ALL, "Portuguese");
	
	int opt = 0;
	float raio, vol = 0;
		
	while(opt != 2){
		
		printf("Olá usuário(a). Seja bem-vindo a nossa calculadora de volume de esferas!!\n");
		printf("Digite o valor do raio de sua esfera e faremos o cálculo>\n\n");
		
		printf("Digite o raio: ");
		scanf("%f", &raio);
		
		vol = (4.0/3.0) * 3.14159 * pow(raio, 3);
		
		printf("\n\nO volume da esfera é: %.2f cm³ \n", vol);
		
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
