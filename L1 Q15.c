#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>

int main(void){
	
	setlocale(LC_ALL, "Portuguese");
	
	float feet, feet_metro = 0;
	int opt;
		
	while(opt != 2){
		
		printf("Ol� usu�rio(a). Seja bem -vindo ao nosso conversor!!\n");
		printf("Digite um valor em p�s e transformaremos ele para metros!!\n\n");
		
		printf("Digite o valor em p�s: ");
		scanf("%f", &feet);
		
		feet_metro = feet * 0.3048;
		
		printf("\n\nSua medida em p�s para metros � igual �: %.2fm", feet_metro);
		
		printf("\n\nCaso deseje continuar a execu��o do programa escolha uma dessas op��es:\n\n");
		printf("\t\t\t\t1 - Continuar      2 - Sair\n\n");
		
		printf("Escolha a op��o desejada>>> ");
		scanf("%i", &opt);
		
		system("cls");
		printf("\a");
	}
	
	if(opt == 2){
		printf("Ok. Muito obrigado e at� o pr�xima!!");
	}
		
	return 0;
}
