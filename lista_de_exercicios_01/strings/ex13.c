// 13 - Escreva um programa que leia um número N de palavras e diga qual das palavras é a primeira e a última na ordem alfabética.

#include <stdio.h>
#include <string.h>

int main(void) {
    char primeira[101], ultima[101];

    printf("-=-=-= BEM VINDO =-=-=-\n");
    printf("Digite sair para sair\n\n");

    do {
        char palavra[101];

        printf("Digite uma palavra: ");
        scanf("%[^\n]%*c", palavra);

        if (strcmp(palavra, "sair") == 0 || strcmp(palavra, "SAIR") == 0) {
            break;
        }

        if (strcmp(palavra, primeira) < 0) {
            strcpy(primeira, palavra);
        }

        if (strcmp(palavra, ultima) > 0) {
            strcpy(ultima, palavra);
        }

    } while (1);

    printf("\nA palavra %s, alfabeticamente, vem antes de todas.\n", primeira);
    printf("\nA palavra %s, alfabeticamente, vem depois de todas.", ultima);

    return 0;
}