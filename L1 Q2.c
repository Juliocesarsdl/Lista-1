#include <stdio.h>
#include <locale.h>

int main(void){
	
	setlocale(LC_ALL, "Portuguese");
	
	int num;
	
	printf("Ol� seja bem-vindo(a).\nDigite qualquer n�mero, mostraremos qual foi o n�mero digitado.\n\n");
	
	printf("Digite seu n�mero: ");
	scanf("%i", &num);
	
	printf("\nO n�meor digitado foi: %i", num);
	
	return 0;
}
