#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>

int main(void){
	
	setlocale(LC_ALL, "Portuguese");
	
	int opt = 0;
	float raio, vol = 0;
		
	while(opt != 2){
		
		printf("Ol� usu�rio(a). Seja bem-vindo a nossa calculadora de volume de esferas!!\n");
		printf("Digite o valor do raio de sua esfera e faremos o c�lculo>\n\n");
		
		printf("Digite o raio: ");
		scanf("%f", &raio);
		
		vol = (4.0/3.0) * 3.14159 * pow(raio, 3);
		
		printf("\n\nO volume da esfera �: %.2f cm� \n", vol);
		
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
