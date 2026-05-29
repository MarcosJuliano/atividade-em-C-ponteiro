/*
Escreva uma funcao chamada dobrar que receba um ponteiro para um numero inteiro como argumento e modifique
o valor da variavel original para que seja o dobro do seu valor. crie uma funcao main para testar a sua funcao
*/
#include <stdio.h>

void dobrar(int *valor){
	*valor = *valor*2;
}

int main(void){
	int valor = 0;
	
	printf("informe o valor a ser dobrado: ");
	scanf("%d",&valor);
	
	printf("Seu valor antes de ser trocado = %d\n", valor);
	
	dobrar(&valor);
	
	printf("valor dobrado = %d", valor);
	
	return 0;
}
