#include <stdio.h>

int main(void) {
    int idade;
    printf("Digite a sua idade: ");
    scanf("%i", &idade);

    int idadeEmDias = idade * 365;

    printf("Sua idade em dias eh %i", idadeEmDias);

    return 0;
}
