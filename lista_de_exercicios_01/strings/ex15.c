// 15 - Implemente um programa que leia duas strings, str1 e str2, e um valor inteiro positivo N. Concatene a str2 N vezes com str1.

#include <stdio.h>
#include <string.h>

int main(void) {
    char str1[101], str2[101];
    int vezes = 0;

    printf("Digite uma frase: ");
    scanf("%[^\n]%*c", str1);

    printf("Digite uma outra frase: ");
    scanf("%[^\n]%*c", str2);

    do {
        printf("Digite quantas vezes a segunda frase vai ser adicionada a primeira: ");
        scanf("%i", &vezes);
    } while (vezes <= 0);

    for (int i = 0; i < vezes; i++) {
        strcat(str1, str2);
    }

    printf("A frase final eh: %s", str1);

    return 0;
}