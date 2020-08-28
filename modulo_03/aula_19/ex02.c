// Exercício 2: Escreva um programa que recebe uma nota (entre 0.0 e 10.0) e checa se você passou direto, ficou de recuperação ou foi reprovado na matéria.
// A regra é a seguinte:
// - Nota 7 ou mais: passou direto
// - Entre 4 e 7: Tem direito de fazer uma prova de recuperação
// - Abaixo de 4: Reprovado direto

#include <stdio.h>

int main(void) {
    float nota;

    printf("Digite a sua nota: ");
    scanf("%f", &nota);

    if (nota >= 7) {
        printf("Parabens!! Voce passou por media!");
    } else if (nota >= 4 && nota < 7) {
        printf("Voce nao passou, mas nao se preocupe, voce pode fazer uma prova de recuperacao!");
    } else {
        printf("Que pena :( Voce foi reprovado!");
    }

    return 0;
}