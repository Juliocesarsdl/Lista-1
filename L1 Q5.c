#include <stdio.h>
#include <locale.h>

int main(void){
	
	setlocale(LC_ALL, "Portuguese");
	
	int num[2], cont = 0, soma = 0;
	
	printf("Ol� seja bem-vindo(a).\nDigite dois n�meros e mostraremos sua soma!!\n\n");
	
	do{
		printf("Digite seu n�mero %i�: ", cont+1);
		scanf("%i", &num[cont]);
		
		soma += num[cont];
		
		cont++;
	} while(cont < 2);
	
	printf("\nResultado: %i + %i = %i", num[0], num[1], soma);
	return 0;
}
