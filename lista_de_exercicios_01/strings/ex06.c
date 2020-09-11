// 6 - Receba uma palavra e imprima de trás-para-frente.

#include <stdio.h>
#include <string.h>

int main(void) {
    char palavra[30];

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    int nCaracteres = strlen(palavra);

    for (int i = nCaracteres; i >= 0; i--) {
        printf("%c", palavra[i]);
    }

    return 0;
}