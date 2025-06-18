#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "Funcoes.h"

int main(void){
	
	setlocale(LC_ALL, "Portuguese");
	
	float tmp = 0, vel = 0, dist = 0, litros = 0, litro_km = 12.0;
	int opt = 0;
	
	while(opt != 2){
		printf("Olá usuário(a). Seja bem-vindo a nossa calculadora de litros usados em uma viagem!!\n");
		printf("Seu carro faz 12L/Km, com isso, digite o tempo e a velocidade média e mostraremos quanto foi percorrido e quantos litros foram gastos no toatal!!\n\n");
		
		printf("Digite o tempo gasto na viagem (em horas): ");
		scanf("%f", &tmp);
		
		printf("\nDigite a velocidade média durante a viagem (em Km/h): ");
		scanf("%f", &vel);
		
		dist = distance(&tmp, &vel);
		
		litros = litrosUsados(&dist, &litro_km);
		
		printf("\n\nResultados:\n\n");
		printf("\t\t\t\tTempo gasto: %.2fh   Velocidade Média: %.2fKm/h\n", tmp, vel);
		printf("\t\t\t\tDistância Percorrida: %.2fkM   Litros Gastos: %.2fL\n", dist, litros);
		
		decisao(&opt);
	}
	
	return 0;
}
