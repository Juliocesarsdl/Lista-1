#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(void){
	
	setlocale(LC_ALL, "Portuguese");
	
	int opt = 0;
	float dist, temp, veloc = 0;
		
	while(opt != 2){
		
		printf("Ol� usu�rio(a). Seja bem-vindo a nossa calculadora de velocidade de proj�teis!!\n");
		printf("Digite os valores da dist�ncia percorrida e o tempo levado para chegar a dist�ncia e faremos o c�lculo>\n\n");
		
		printf("Digite a dist�ncia percorrida: ");
		scanf("%f", &dist);
		
		printf("\nDigite o tempo para a dist�ncia ser alcan�ada: ");
		scanf("%f", &temp);
		
		
		veloc = (dist*1000)/(temp*60) ;
		
		printf("\n\nA velocidade do proj�til �: %.2f Km/h \n", veloc);
		
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
