#include <stdio.h>
#include <locale.h>

int main(void){
	
	setlocale(LC_ALL, "Portuguese");
	
	float num[3], med = 0;
	int cont;
	
	printf("Olá seja bem-vindo(a).\nDigite três números e mostraremos sua divisão!!\n\n");
	
	for(cont = 0; cont < 3; cont++){
			
		printf("Digite seu %Iº número: ", cont+1);
		scanf("%f", &num[cont]);
		
		med += num[cont] / 3;	
		
	}
	
	printf("\nResultado: %.0f + %.0f + %.0f / 3 = %.2f", num[0], num[1], num[2], med);
	
	return 0;
}
