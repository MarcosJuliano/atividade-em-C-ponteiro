/*
Escreva uma funcao que recebe um array de inteiros e seu tamanho, e atravez de ponteiros, retorne o maior e menor elemento do array.
A funcao deve ter o seguinte prototipo: void encontrarMaiorMenor(int*array, int tamanho, int*maior, int*menor);.
*/
#include <stdio.h>

void encontrarMaiorMenor(int *array, int tamanho, int *maior, int *menor) {
    *maior = array[0];
    *menor = array[0];
    
    for(int i = 1; i < tamanho; i++) {
        if(array[i] > *maior) {
            *maior = array[i];
        }
        if(array[i] < *menor) {
            *menor = array[i];
        }
    }
    
}

int main(void) {
    int tamanho, maior, menor;
    
    printf("Informe o tamanho do array: ");
    scanf("%d", &tamanho);
    
    int array[tamanho];
    
    for(int i = 0; i < tamanho; i++) {
        printf("Digite o elemento %d: ", i + 1);
        scanf("%d", &array[i]);
    }
    
    encontrarMaiorMenor(array, tamanho, &maior, &menor);
    
    printf("\nMaior elemento: %d\n", maior);
    printf("Menor elemento: %d\n", menor);
    
    return 0;
}

