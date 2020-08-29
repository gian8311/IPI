// Exercício 2: Em um jogo, você controla um personagem que se movimenta da seguinte forma:
// - Tecla `A`: esquerda
// - Tecla `D`: direita
// - Tecla `W`: pula
// - Tecla `S`: abaixa

// Além das teclas de movimentação, existem as teclas de atalho para:
// - Tecla `Q`: acesso ao menu
// - Tecla `R`: especial
// - Tecla `1`: uso de mana

// Crie um programa que simula o jogo, lê a opção teclada pelo usuário e imprime na tela

#include <stdio.h>

int main(void) {
    printf("---/--- JOGO ---/---\n");

    printf("\nOpcoes de tecla:\n");
    printf("(a) movimentar para esquerda\n");
    printf("(d) movimentar para direita\n");
    printf("(w) pular\n");
    printf("(s) abaixar\n");
    printf("(q) acessar menu\n");
    printf("(r) especial\n");
    printf("(1) uso da mana\n");

    char opcao;

    printf("Escolha a opcao que deseja: ");
    scanf("%c", &opcao);

    switch (opcao) {
        case 'w':
            printf("Voce pulou");
            break;
        case 'a':
            printf("Voce se movimentou para esquerda");
            break;
        case 's':
            printf("Voce se abaixou");
            break;
        case 'd':
            printf("Voce se movimentou para direita");
            break;
        case 'q':
            printf("Voce acessou o menu");
            break;
        case 'r':
            printf("Voce usou o especial");
            break;
        case '1':
            printf("Voce usou mana");
            break;
        default:
            printf("Voce digitou uma tecla invalida!");
    }
    return 0;
}