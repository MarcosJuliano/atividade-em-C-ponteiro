/*
Impelemente uma funcao que copie uma string para outra usando ponteiros. O prototipo deve ser:
void copiarString(char *origem, char *destino);. Nao utilize a funcao strcpy() da biblioteca padrao.
*/
#include <stdio.h>

void copiarString(char *origem, char *destino){
    while (*origem != '\0') {
        *destino = *origem; // Copia o caractere atual da origem para o destino
        origem++;           // Avança o ponteiro da origem para a próxima letra
        destino++;          // Avança o ponteiro do destino para a próxima casa
    }
    
    *destino = '\0';
}

int main() {
    char textoOriginal[] = "Ponteiros em C";
    char textoDestino[30]; // Espaço na memória reservado para receber a cópia

    // Chamando a função e passando os vetores (que decaem para ponteiros)
    copiarString(textoOriginal, textoDestino);

    printf("Original: %s\n", textoOriginal);
    printf("Copia:    %s\n", textoDestino);

    return 0;
}