#include <stdio.h>
#include <locale.h>

int main(void){
	
	setlocale(LC_ALL, "Portuguese");
	
	int num, suc = 0, ant = 0;
	
	printf("Olá seja bem-vindo(a).\nDigite qualquer número e mostraremos o seu sucessor e seu antecessor!!\n\n");
	
	printf("Digite seu número: ");
	scanf("%i", &num);
	
	suc = num + 1;
	ant = num - 1;
	
	printf("\nNúmero digitado: %i.", num);
	printf("\nSwu antecessor: %i.", ant);
	printf("\nSeu sucessor: %i.", suc);
	
	return 0;
}
