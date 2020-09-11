// 12 - Escreva um programa que recebe uma string S e inteiros não-negativos I e J. Concatene a frase "Ola mundo" com o segmento S[I..J]. Imprima o texto concatenado.

#include <stdio.h>
#include <string.h>

int main(void) {
    char string[101];
    int x, y;

    printf("Digite uma frase: ");
    scanf("%[^\n]%*c", string);

    char novaString[101];
    int novaStringIndice = 1;
    do {
        printf("Digite dois numeros inteiros (x y) sendo y > x: ");
        scanf("%i %i", &x, &y);

    } while (x <= 0 || y <= 0);

    for (int i = x; i < y; i++) {
        novaString[novaStringIndice] = string[i];
        novaStringIndice++;
    }

    char olaMundo[] = "Ola mundo";

    strcat(novaString, olaMundo);

    printf("Frase final: %s", novaString);

    return 0;
}