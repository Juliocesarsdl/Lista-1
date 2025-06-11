#include <stdio.h>
#include <locale.h>

int main(void){
	
	setlocale(LC_ALL, "Portuguese");
	
	int num;
	
	printf("Olá seja bem-vindo(a).\nDigite qualquer número, mostraremos qual foi o número digitado.\n\n");
	
	printf("Digite seu número: ");
	scanf("%i", &num);
	
	printf("\nO númeor digitado foi: %i", num);
	
	return 0;
}
