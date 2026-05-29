/*
1. Troca de Valores: Crie uma função que receba dois ponteiros para inteiros
como parâmetros e troque os valores das variáveis para as quais eles
apontam. No main, declare duas variáveis, leia seus valores, chame a
função e imprima os valores trocados.
*/

#include <stdio.h>

int trocarValores(int *V1, int *V2){
	int guard;
	
	printf("Digite o primeiro valor: ");
	scanf("%d", &*V1);
	
	printf("Digite o segundo valor: ");
	scanf("%d", &*V2);
	

	guard = *V1;
	*V1 = *V2;
	*V2 = guard;
	
	
	printf("\n----- Valores apos inversao -----\n");
	printf("Primeiro valor: %d\n", *V1);
	printf("Segundo valor: %d\n", *V2);
	
	return 0;
}

int main(){
	int V1, V2;
	
	trocarValores(&V1, &V2);

	return 0;
}
