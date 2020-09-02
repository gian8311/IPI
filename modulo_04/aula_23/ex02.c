// Exercício 2: Escreva um programa que lê uma letra do alfabeto e imprime na tela todas as letras até 'z'.

#include <stdio.h>

int main(void) {
    char caractere;

    printf("Digite uma letra: ");
    scanf("%c", &caractere);

    for (char i = caractere; i <= 'z'; i++) {
        printf("%c ", i);
    }

    return 0;
}