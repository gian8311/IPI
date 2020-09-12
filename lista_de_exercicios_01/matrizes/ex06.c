// 6 - Faça um programa que leia os nomes de 5 alunos. Além disso, leia uma matriz de 5 linhas e 4 colunas contendo as seguintes informações sobre cada aluno, sendo todas as informações do tipo inteiro:

// Primeira coluna: número de matrícula (use um inteiro)
// Segunda coluna: média das provas
// Terceira coluna: média dos trabalhos
// Quarta coluna: nota final

// Elabore um programa que:
// Leia os nomes de cada aluno
// Leia as três primeiras informações de cada aluno
// Calcule a nota final como sendo a soma da média das provas e da média dos trabalhos
// Imprima o nome, a matrícula e a nota final do aluno que obteve a maior nota final (assuma que só existe uma maior nota)
// Imprima a média aritmética das notas finais

#include <ctype.h>
#include <limits.h>
#include <stdio.h>

int main(void) {
    int alunos = 5, tamanhoString = 20, infos = 4, maiorNota = INT_MIN, indiceMaiorNota = 0;
    float soma = 0;
    char nomesDosAlunos[alunos][tamanhoString];
    int matriculaENotas[alunos][infos];

    for (int i = 0; i < alunos; i++) {
        printf("Aluno %i, digite o seu nome: ", i + 1);
        scanf("%s", &nomesDosAlunos[i]);

        // Deixar a primeira letra maiúscula
        nomesDosAlunos[i][0] = toupper(nomesDosAlunos[i][0]);

        for (int j = 0; j < infos - 1; j++) {
            switch (j) {
                case 0:
                    printf("%s, digite o seu numero de matricula: ", nomesDosAlunos[i]);
                    break;
                case 1:
                    printf("%s, digite a sua media das provas: ", nomesDosAlunos[i]);
                    break;
                case 2:
                    printf("%s, digite a sua media dos trabalhos: ", nomesDosAlunos[i]);
                    break;
            }
            scanf("%i", &matriculaENotas[i][j]);
        }

        matriculaENotas[i][3] = matriculaENotas[i][1] + matriculaENotas[i][2];
        soma += matriculaENotas[i][3];

        if (matriculaENotas[i][3] > maiorNota) {
            maiorNota = matriculaENotas[i][3];
            indiceMaiorNota = i;
        }
        printf("\n");
    }

    printf("\n");
    printf("%s, da matricula %i foi o aluno com a maior nota final com a nota %i!\n", nomesDosAlunos[indiceMaiorNota], matriculaENotas[indiceMaiorNota][0], maiorNota);
    printf("A media das notas finais foi %.2f!\n", soma / alunos);

    return 0;
}