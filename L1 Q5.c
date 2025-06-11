#include <stdio.h>
#include <locale.h>

int main(void){
	
	setlocale(LC_ALL, "Portuguese");
	
	int num[2], cont = 0, soma = 0;
	
	printf("Olá seja bem-vindo(a).\nDigite dois números e mostraremos sua soma!!\n\n");
	
	do{
		printf("Digite seu número %i°: ", cont+1);
		scanf("%i", &num[cont]);
		
		soma += num[cont];
		
		cont++;
	} while(cont < 2);
	
	printf("\nResultado: %i + %i = %i", num[0], num[1], soma);
	return 0;
}
