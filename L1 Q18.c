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
		
		printf("Olá usuário(a). Seja bem -vindo à calculadora do quadrado da divisão de dois números!\n\n\n");
		printf("Digite dois números para calcularmos o quadrado da divisão do primeiro pelo segundo!\n\n");
		
		for(cont=0; cont < 2; cont++){
			
			printf("Digite  número para a divisão: ");
			scanf("%f", &num[cont]);
		}
		
		if(num[1] == 0){
			printf("\n\nDivisão por zero não é possível. Tente Novamente.");
			
			decisao(&opt);
		} else {
			
			div = funQuadra(&num[0], &num[1]);
		
			quadDiv = pow(div, 2);
		
			printf("\n\nResultado: %.2f", quadDiv);
		
			decisao(&opt);
		}
	}
	
	if(opt == 2){
		printf("Ok. Muito obrigado e até o próxima!!");
	}
		
	return 0;
}
