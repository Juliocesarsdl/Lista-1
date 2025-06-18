float funQuadra(float *a, float *b){
	
	return(*a / *b);
		
}

void decisao(int *op){
	
	printf("\n\nCaso deseje continuar a execução do programa escolha uma dessas opções:\n\n");
	printf("\t\t\t\t1 - Continuar      2 - Sair\n\n");
		
	printf("Escolha a opção desejada>>> ");
	scanf("%i", op);
		
	system("cls");
	printf("\a");
}

float distance(float *a, float *b){
	return( (*a) * (*b) );
}

float litrosUsados(float *c, float *d){
	return((*c) / (*d));
}
