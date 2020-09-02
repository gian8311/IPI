// Exercício 4: Escreva um programa que lê um número inteiro relativo ao número de alunos de uma turma. Deve ser digitada uma nota para cada aluno, e ao final do programa, informar a média das notas digitadas.

#include <stdio.h>

int main(void) {
    int numAlunos;
    float nota, soma, media;

    printf("Digite o numero de alunos: ");
    scanf("%i", &numAlunos);

    for (int i = 1; i <= numAlunos; i++) {
        printf("Digite a nota do aluno %i: ", i);
        scanf("%f", &nota);
        soma += nota;
    }

    printf("A media das notas digitadas eh %.2f", soma / numAlunos);

    return 0;
}