// 10 - A sequência de Fibonacci é uma sequência infinita composta por números que obedecem o seguinte padrão: 0 1 1 2 3 5 8 13…
// Como pode se ver, os dois primeiros números (0 1) quando somados dão origem ao terceiro (1). De modo que o n-ésimo número é fruto da soma dos dois anteriores.
// Crie um programa que pede ao usuário um número X, e imprima o X-ésimo valor da sequência.
// Ex: Se o usuário digitar 6, o valor a ser impresso é 8, que é o sexto valor da sequência.

#include <stdio.h>

int main(void) {
    int numero, termo1 = 0, termo2 = 1, proximoTermo;

    printf("Digite termo da sequencia de Fibonacci: ");
    scanf("%i", &numero);

    for (int i = 1; i <= numero; ++i) {
        proximoTermo = termo1 + termo2;
        termo1 = termo2;
        termo2 = proximoTermo;
    }
    printf("O %iº termo da sequencia de Fibonacci eh %i", numero, termo1);
    return 0;
}