/*
Escreva uma funcao que receba uma string (ponteiro para char) como parametro e retorne, atraves de ponteiros
passados como argumentos, o numero de vogais e o numero de consoantes na string. Prototipo: void contarVogaisConsoantes
(char *str, int *vogais, int *consoantes);.
*/
#include <stdio.h>

void contarVogaisConsoantes(char *str, int *vogais, int *consoantes){
    while (*str != '\0') {
        if (*str == 'a' ||
            *str == 'e' ||
            *str == 'i' ||
            *str == 'o' ||
            *str == 'u')
        {
            (*vogais)++;
        } else {
            (*consoantes)++;
        }
        str++;// Avança o ponteiro da origem para a próxima letra
    }
}

int main(){
    char str[100];
    int vogais, consoantes;

    vogais = 0;
    consoantes = 0;
    printf("Digite uma palavra ou frase (tudo em minusculo): ");
    // fgets(onde_guardar, tamanho_maximo, de_onde_ler)
    // stdin significa "Standard Input" (Entrada Padrao, ou seja, o teclado)
    fgets(str, sizeof(str), stdin);
    
    contarVogaisConsoantes(str,&vogais,&consoantes);

    printf("\nessa palavra/frase tem %d vogais\n", vogais);
    printf("essa palavra/frase tem %d consoantes", consoantes);

    return 0;
}