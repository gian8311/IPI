// 3 - Crie uma programa que lê uma string e um caractere, e retorne o número de vezes que esse caractere aparece na string.

#include <stdio.h>
#include <string.h>

int main(void) {
    char frase[100], letra;

    printf("Digite uma frase: ");
    scanf("%[^\n]%*c", frase);

    printf("Digite um caractere: ");
    scanf("%c", &letra);
    getchar();

    int vezes = 0;

    for (int i = 0; i < strlen(frase); i++) {
        if (frase[i] == letra) {
            vezes++;
        }
    }

    printf("O caractere %c aparece %i vezes na frase!", letra, vezes);

    return 0;
}