#include <stdio.h>
#include <locale.h>

int main(void){
	
	setlocale(LC_ALL, "Portuguese");
	
	int nascimento, anoAtual = 2025, idade = 0;
	
	printf("Olá seja bem-vindo a nosso adivinhador de idade!!\n\n");
	printf("Informe seu ano de nascimento, e mostraremos sua idade!!\n\n");
	
	printf("Digite o ano que nasceu: ");
	scanf("%i", &nascimento);	
	
	idade = anoAtual - nascimento;
	
	printf("\n\nSua idade é: %i anos", idade);
	
	
	return 0;
}
