// 5 - Escreva um programa que peça 3 notas (reais) para o usuários. Imprima “voce passou”, caso a média das notas seja maior ou igual a 7; caso contrário, imprima “voce nao passou”.

#include <stdio.h>

int main(void) {
    float nota1, nota2, nota3;

    printf("Digite as suas notas (nota1, nota2, nota3): ");
    scanf("%f, %f, %f", &nota1, &nota2, &nota3);

    float media = (nota1 + nota2 + nota3) / 3;

    if (media >= 7) {
        printf("Voce passou");
    } else {
        printf("Voce nao passou");
    }

    return 0;
}