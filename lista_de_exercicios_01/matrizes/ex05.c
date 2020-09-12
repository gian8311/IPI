// 5 - Leia uma matriz 5 x 10 que se refere respostas de 10 questões de múltipla escolha, referentes a 5 alunos. Leia também um vetor de 10 posições contendo o gabarito de respostas que podem ser a, b, c ou d. Seu programa deverá comparar as respostas de cada candidato com o gabarito e emitir um vetor denominado resultado, contendo a pontuação correspondente a cada aluno. Imprima as notas o resultado de cada aluno.
// OBS: Considere que cada questão vale 1 ponto.

#include <stdio.h>

int main(void) {
    int questoes = 10, alunos = 5;
    char alternativasAlunos[alunos][questoes + 1], gabarito[questoes + 1];

    for (int i = 0; i < alunos; i++) {
        for (int j = 0; j < questoes; j++) {
            printf("Aluno %i, digite a resposta da %iª questao: ", i + 1, j + 1);
            scanf("%c", &alternativasAlunos[i][j]);
            getchar();
        }
        printf("\n");
    }

    for (int i = 0; i < questoes; i++) {
        printf("Digite o gabarito da %iª questao: ", i + 1);
        scanf("%c", &gabarito[i]);
        getchar();
    }
    printf("\n");

    for (int i = 0; i < alunos; i++) {
        int corretas = 0;
        for (int j = 0; j < questoes; j++) {
            if (alternativasAlunos[i][j] == gabarito[j]) {
                corretas++;
            }
        }

        printf("O aluno %i ficou com a nota %i!\n", i + 1, corretas);
    }
    printf("\n");

    return 0;
}