/*
Crie uma função que receba uma string e a inverta "inplace", ou seja, modifique a propria string original,
utilizando ponteiros. por exemplo, "brasil" deve se tornar "lisarb"
*/
#include <stdio.h>
#include <string.h> // Necessário para usar o strlen e strcspn

void inverter(char *str) {
    char *inicio = str;          // Ponteiro apontando para o primeiro caractere
    char *fim = str + strlen(str) - 1; // Ponteiro apontando para o último caractere (antes do \0)
    char guard;

    while (inicio < fim) {
        guard = *inicio;
        *inicio = *fim;
        *fim = guard;

        inicio++; // Avança para a direita
        fim--;    // Recua para a esquerda
    }
}

int main() {
    char str[100];

    printf("Digite uma palavra ou frase: ");
    fgets(str, sizeof(str), stdin);
    
    // Remove o '\n' (Enter) do final da string para ele não ser invertido junto
    str[strcspn(str, "\n")] = '\0';
    
    inverter(str);

    printf("Palavra invertida: %s\n", str);

    return 0;
}