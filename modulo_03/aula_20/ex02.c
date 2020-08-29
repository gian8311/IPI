// Exercício 2: Quero comprar um par de tênis para correr. O modelo comum custa R$300,00 e o modelo de competição custa R$600,00. Escreva um programa que pergunte quanto de dinheiro tenho (valor inteiro), e diga se posso comprar um par de tênis, e se sim, qual modelo seria.

#include <stdio.h>

int main(void) {
    int dinheiro;

    printf("Digite quanto voce tem: ");
    scanf("%i", &dinheiro);

    if (dinheiro < 300) {
        printf("Você não pode comprar nenhum tênis! :(");
    } else {
        if (dinheiro >= 600) {
            printf("Você pode comprar o tênis de competição!");
        } else {
            printf("Você pode comprar o tênis comum!");
        }
    }

    return 0;
}