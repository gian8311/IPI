// Exercício 2: Um professor possui 5 turmas, e cada turma 5 alunos. Construa um algorítmo que leia uma nota de cada aluno de cada uma das turmas e exiba a média das notas por turma.

#include <stdio.h>

int main(void) {
    for (int turma = 1; turma <= 5; turma++) {  // Turma
        float soma = 0;
        for (int aluno = 1; aluno <= 5; aluno++) {  // Aluno
            float nota;

            printf("Digite a nota do aluno %i da turma %i: ", aluno, turma);
            scanf("%f", &nota);
            getchar();

            soma += nota;
        }
        printf("\nA media da turma %i eh %.2f\n\n", turma, soma / 5);
    }
}