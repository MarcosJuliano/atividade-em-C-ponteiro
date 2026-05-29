/*
Declare uma variavel inteira e um ponteiro para inteiro. Atribua o endereco da variavel ao ponteiro , imprima o valor da variavel,
o endereco da variavel, o valor do ponteiro(que deve ser o mesmo endereco da variavel) e o valor apontado pelo ponteiro.
*/
#include <stdio.h>

int main(void){
	
	int var = 10;
	int *pontVar = &var;
	
	printf("Valor da variavel: %d\n", var);
	//Valor da variavel: 10

	printf("Endereco da variavel: %p\n", &var);
	//Endereco da variavel: 0061FF1C

	printf("Valor do ponteiro: %p\n", &pontVar);
	//Valor do ponteiro: 0061FF18

	printf("Valor apontado pelo ponteiro: %d\n", *pontVar);
	//Valor apontado pelo ponteiro: 10
	
	return 0;
}
