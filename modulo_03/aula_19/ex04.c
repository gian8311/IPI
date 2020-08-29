// Exercício 4: Quero comprar um par de tênis para correr. O modelo comum custa R$300,00 e o modelo de competição custa R$600,00. Escreva um programa que pergunte quanto de dinheiro tenho (valor inteiro), e diga se posso comprar um par de tênis, e se sim, qual modelo seria.

#include <stdio.h>

int main(void) {
    int dinheiro;

    printf("Digite quanto de dinheiro voce tem: ");
    scanf("%i", &dinheiro);

    if (dinheiro >= 300 && dinheiro < 600) {
        printf("Voce pode comprar o tenis comum!");
    } else if (dinheiro >= 600) {
        printf("Voce pode comprar o tenis de competicao!");
    } else {
        printf("Voce nao pode comprar nenhum tenis! :(");
    }

    return 0;
}