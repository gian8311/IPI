// 9 - Crie um programa que compara duas strings. Imprima `Eh igual`, se o valor das duas strings for igual. Caso contrário, imprima `Nao eh igual`.

#include <stdio.h>
#include <string.h>

int main(void) {
    char palavra1[101], palavra2[101];

    printf("Digite a primeira palavra: ");
    scanf("%s", palavra1);
    getchar();

    printf("\n");

    printf("Digite a segunda palavra: ");
    scanf("%s", palavra2);
    getchar();

    int diferenca = strcmp(palavra1, palavra2);

    if (diferenca == 0) {
        printf("\nAs palavras sao iguais!");
    } else {
        printf("\nAs palavras sao diferentes!");
    }

    return 0;
}