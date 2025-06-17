#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>

int main(void){
	
	setlocale(LC_ALL, "Portuguese");
	
	long long int base, expo, pot = 0;
	int opt;
		
	while(opt != 2){
		
		printf("Olá usuário(a). Seja bem-vindo á nossa calculadora de potências!!\n");
		printf("Digite a Base e o expoente e daremos o resultado da potenciação!!\n\n");
		
		printf("Digite a sua base: ");
		scanf("%lli", &base);
		
		printf("\nAgora o seu expoente: ");
		scanf("%lli", &expo);
		
		pot = pow(base, expo);
		
		printf("\n\nA potenciação entre a base %lli e o expoente %lli é: %lli", base, expo, pot);
		
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
