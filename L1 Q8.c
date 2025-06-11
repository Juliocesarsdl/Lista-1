#include <stdio.h>
#include <locale.h>

int main(void){
	
	setlocale(LC_ALL, "Portuguese");
	
	float preco = 3412, desc = 0;
	int choice;
	
	printf("Olá seja bem-vindo a nossa vendinha!!\n\n");
	printf("Nosso console custa R$ 3,412. Temos duas formas de pagamento: Cartão de Crédito e Débito.\n\n");
	
	printf("\t\t\t\t1-Crédito   2-Á vista\n\n");
	
	printf("\n\nDigite sua forma de pagamento: ");
	scanf("%i", &choice);	
	
	if(choice == 1){
		
		printf("\n\nCrédito escolhido.\n\n");
		
		desc = preco - (preco * 0.05);
		
		printf("Preço anterior: R$%.2f\nPreço após desconto de %.2f: R$%.2f", preco, desc);
		
	} else if(choice == 2){
		
		printf("\nÁ vista escolhido.\n\n");
		
		desc = preco - (preco * 0.10);
		
		printf("Preço anterior: R$%.2f\nPreço após desconto de %.2f: R$%.2f", preco, desc);
		
	} else {
		
		printf("\nOpção inexistente.Tente novamente\n");
		
	}
	return 0;
}
