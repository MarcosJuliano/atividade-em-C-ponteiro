/*
Crie uma funcao que recebe dois numeros de ponto flutuante e ponteiros para outras
quatro variaveis de ponto flutuante. A funcao deve calcular a soma, subtracao, multiplicacao e divisao
dos dois primeiros numeros e armazenar os resultados nas variaveis apontadas pelos ponteiros
*/
#include <stdio.h>

void calculos(float *primeiroNumero, float *segundoNumero){

    float soma = (*primeiroNumero) + (*segundoNumero);
    float subtracao = (*primeiroNumero) - (*segundoNumero);
    float multiplicacao = (*primeiroNumero) * (*segundoNumero);
    float divisao = (*primeiroNumero) / (*segundoNumero);

    printf("soma = %2.f\n", soma);
    printf("subtracao = %2.f\n", subtracao);
    printf("multiplicacao = %2.f\n", multiplicacao);
    printf("divisao = %.2f\n", divisao);

}

int main(){
    float primeiroNumero, segundoNumero;

    printf("informe o primeiro numero: ");
    scanf("%f", &primeiroNumero);
    printf("informe o segundo numero: ");
    scanf("%f", &segundoNumero);

    calculos(&primeiroNumero, &segundoNumero);

    return 0;
}