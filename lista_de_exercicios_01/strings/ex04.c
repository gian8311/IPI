// 4 - Crie um programa que recebe uma string e um caractere, e apague (substitua por ‘ ’ (espaço)) todas as ocorrências desse caractere na string.

#include <stdio.h>
#include <string.h>

int main(void) {
    char frase[100], letra;

    printf("Digite uma frase: ");
    scanf("%[^\n]%*c", frase);

    printf("Digite um caractere: ");
    scanf("%c", &letra);
    getchar();

    for (int i = 0; i < strlen(frase); i++) {
        if (frase[i] == letra) {
            frase[i] = ' ';
        }
    }

    printf("A frase sem %c fica: %s", letra, frase);
}