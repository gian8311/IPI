//10 - Fazer um programa que:
// a) leia uma frase de 80 caracteres, incluindo brancos,
// b) conte e imprima quantos brancos existem na frase,
// c) conte e imprima quantas vezes a letra ‘a’ aparece,
// d) substitua as vogais pelo caractere ‘X’.

#include <stdio.h>
#include <string.h>

int main(void) {
    char frase[81];

    printf("Digite uma frase: ");
    scanf("%[^\n]%*c", frase);

    int tamanhoReal = strlen(frase), brancos = 0, letrasA = 0;

    for (int i = 0; i < tamanhoReal; i++) {
        char letra = frase[i];

        if (letra == ' ') {
            brancos++;
        }

        if (letra == 'a') {
            letrasA++;
        }

        if (letra == 'a' || letra == 'A' || letra == 'e' || letra == 'E' || letra == 'i' || letra == 'I' || letra == 'o' || letra == 'O' || letra == 'u' || letra == 'U') {
            frase[i] = 'X';
        }
    }

    if (brancos == 1) {
        printf("\nExiste somente 1 espaco em branco na frase!\n");
    } else if (brancos > 1) {
        printf("\nExistem %i espacos em branco na frase!\n", brancos);
    } else {
        printf("\nNao existe nenhum espaco em branco na frase!\n");
    }

    if (letrasA == 1) {
        printf("\nA letra 'a' aparece 1 vez na frase!\n");
    } else if (letrasA > 1) {
        printf("\nA letra 'a' aparece %i vezes na frase!\n", letrasA);
    } else {
        printf("\nNao existe nenhuma letra 'a' na frase!\n");
    }

    printf("\nA frase com vogais substituida eh: %s", frase);

    return 0;
}