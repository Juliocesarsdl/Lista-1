#include <stdio.h>
#include <locale.h>

int main(void){
	
	setlocale(LC_ALL, "Portuguese");
	
	float preco = 3412, desc = 0;
	int choice;
	
	printf("Ol� seja bem-vindo a nossa vendinha!!\n\n");
	printf("Nosso console custa R$ 3,412. Temos duas formas de pagamento: Cart�o de Cr�dito e D�bito.\n\n");
	
	printf("\t\t\t\t1-Cr�dito   2-� vista\n\n");
	
	printf("\n\nDigite sua forma de pagamento: ");
	scanf("%i", &choice);	
	
	if(choice == 1){
		
		printf("\n\nCr�dito escolhido.\n\n");
		
		desc = preco - (preco * 0.05);
		
		printf("Pre�o anterior: R$%.2f\nPre�o ap�s desconto de %.2f: R$%.2f", preco, desc);
		
	} else if(choice == 2){
		
		printf("\n� vista escolhido.\n\n");
		
		desc = preco - (preco * 0.10);
		
		printf("Pre�o anterior: R$%.2f\nPre�o ap�s desconto de %.2f: R$%.2f", preco, desc);
		
	} else {
		
		printf("\nOp��o inexistente.Tente novamente\n");
		
	}
	return 0;
}
