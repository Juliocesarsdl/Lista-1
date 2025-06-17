#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>

int main(void){
	
	setlocale(LC_ALL, "Portuguese");
	
	float feet, feet_metro = 0;
	int opt;
		
	while(opt != 2){
		
		printf("Olá usuário(a). Seja bem -vindo ao nosso conversor!!\n");
		printf("Digite um valor em pés e transformaremos ele para metros!!\n\n");
		
		printf("Digite o valor em pés: ");
		scanf("%f", &feet);
		
		feet_metro = feet * 0.3048;
		
		printf("\n\nSua medida em pés para metros é igual á: %.2fm", feet_metro);
		
		printf("\n\nCaso deseje continuar a execução do programa escolha uma dessas opções:\n\n");
		printf("\t\t\t\t1 - Continuar      2 - Sair\n\n");
		
		printf("Escolha a opção desejada>>> ");
		scanf("%i", &opt);
		
		system("cls");
		printf("\a");
	}
	
	if(opt == 2){
		printf("Ok. Muito obrigado e até o próxima!!");
	}
		
	return 0;
}
