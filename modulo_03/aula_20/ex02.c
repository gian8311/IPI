// Exercício 2: Quero comprar um par de tênis para correr. O modelo comum custa R$300,00 e o modelo de competição custa R$600,00. Escreva um programa que pergunte quanto de dinheiro tenho (valor inteiro), e diga se posso comprar um par de tênis, e se sim, qual modelo seria.

#include <stdio.h>

int main(void) {
    int dinheiro;

    printf("Digite quanto voce tem: ");
    scanf("%i", &dinheiro);

    if (dinheiro < 300) {
        printf("Voce nao pode comprar nenhum tenis! :(");
    } else {
        if (dinheiro >= 600) {
            printf("Voce pode comprar o tenis de competicao!");
        } else {
            printf("Voce pode comprar o tenis comum!");
        }
    }

    return 0;
}