#include <stdio.h>
#include <locale.h>

int main(void){
	
	setlocale(LC_ALL, "Portuguese");
	
	float num[2], div = 0;
	int cont = 0;
	
	printf("Olá seja bem-vindo(a).\nDigite dois números e mostraremos sua divisão!!\n\n");
	
	printf("Digite seu 1º número: ");
	scanf("%f", &num[0]);
	
	do {
		printf("\nDigite seu 2° número: ");
		scanf("%f", &num[1]);
		
		if(num[1] == 0){
			printf("\nDivisão por zero não é possível. Tente novamente.\n");
		}
		
	} while(num[1] == 0);
	
	div = num[0] / num[1];
	
	printf("\nResultado: %.0f / %.0f = %.2f", num[0], num[1], div);
	
	return 0;
}
