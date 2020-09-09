// 7 - Escrever um programa que
// a) leia um conjunto de 10 notas, armazenando-as em vetor
// b) calcule e imprima a sua média
// c) calcule e imprima o número de alunos com nota superior à média

#include <stdio.h>

int main(void) {
    int tam = 2, acimaDaMedia = 0;
    float notas[tam], soma = 0, media;

    // Preencher o vetor
    for (int i = 0; i < tam; i++) {
        printf("Digite a %iª nota: ", i + 1);
        scanf("%f", &notas[i]);
        getchar();

        soma += notas[i];
    }

    printf("\n");

    // Calcular e imprimir a média
    media = soma / tam;
    printf("A media das notas foi %.2f\n", media);

    // Passar por todas as notas e ver quais ficaram acima da média
    for (int i = 0; i < tam; i++) {
        if (notas[i] > media) {
            acimaDaMedia++;
        }
    }

    // Dizer quantos alunos ficaram acima da média
    if (acimaDaMedia == 1) {
        printf("\nApenas 1 aluno ficou acima da media!");
    } else if (acimaDaMedia > 1) {
        printf("\n%i alunos ficaram acima da media!", acimaDaMedia);
    } else {
        printf("\nNenhum aluno ficou acima da media :(!");
    }

    return 0;
}