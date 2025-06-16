#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(void){
	
	setlocale(LC_ALL, "Portuguese");
	
	int opt = 0;
	float dist, temp, veloc = 0;
		
	while(opt != 2){
		
		printf("Olá usuário(a). Seja bem-vindo a nossa calculadora de velocidade de projéteis!!\n");
		printf("Digite os valores da distância percorrida e o tempo levado para chegar a distãncia e faremos o cálculo>\n\n");
		
		printf("Digite a distãncia percorrida: ");
		scanf("%f", &dist);
		
		printf("\nDigite o tempo para a distãncia ser alcançada: ");
		scanf("%f", &temp);
		
		
		veloc = (dist*1000)/(temp*60) ;
		
		printf("\n\nA velocidade do projétil é: %.2f Km/h \n", veloc);
		
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
