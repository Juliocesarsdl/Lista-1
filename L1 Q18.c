#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>
#include "Funcoes.h"

int main(void){
	
	setlocale(LC_ALL, "Portuguese");
	
	int opt = 0, cont;
	float quadDiv = 0, div = 0, num[2];
	
	while(opt != 2){
		
		printf("Ol� usu�rio(a). Seja bem -vindo � calculadora do quadrado da divis�o de dois n�meros!\n\n\n");
		printf("Digite dois n�meros para calcularmos o quadrado da divis�o do primeiro pelo segundo!\n\n");
		
		for(cont=0; cont < 2; cont++){
			
			printf("Digite  n�mero para a divis�o: ");
			scanf("%f", &num[cont]);
		}
		
		if(num[1] == 0){
			printf("\n\nDivis�o por zero n�o � poss�vel. Tente Novamente.");
			
			decisao(&opt);
		} else {
			
			div = funQuadra(&num[0], &num[1]);
		
			quadDiv = pow(div, 2);
		
			printf("\n\nResultado: %.2f", quadDiv);
		
			decisao(&opt);
		}
	}
	
	if(opt == 2){
		printf("Ok. Muito obrigado e at� o pr�xima!!");
	}
		
	return 0;
}
