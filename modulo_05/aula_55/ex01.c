// Exercício 1: Uma escola fez uma pesquisa com uma amostra de 10 pais. Nesta pesquisa foram coletados dados sobre o salário dos entrevistados, a idade e o número de filhos. Estas informações devem ser armazenadas numa matriz chamada MAT(3x10) de números reais, na qual a primeira linha corresponde ao salário, a segunda à idade e a terceira ao número de filhos.
// Faça um programa em C para obter as seguintes informações a partir desta amostra:
// a) Coletar os dados dos entrevistados. Eles devem ser fornecidos pelo usuário e a matriz MAT vazia, deverá armazenar os dados dos entrevistados.
// b) Calcular a média salarial, a idade média e a quantidade média de filhos da amostra de todos os pais. A informação deve ser impressa da seguinte forma: "O pai 1 tem X anos, Y filhos e recebe R$ Z.". Cada impressão por linha
// c) Imprimir aqueles pais que possuem a maior e menor idade da amostra.

#include <limits.h>
#include <stdio.h>

int main(void) {
    int linhas = 3, colunas = 10;
    float matriz[linhas][colunas], somaSalario = 0, somaIdade = 0, somaFilhos = 0;

    int menorIdade = INT_MAX, paiMenor = 0, maiorIdade = INT_MIN, paiMaior = 0;

    for (int linha = 0; linha < linhas; linha++) {
        if (linha == 0) {
            printf("Digite os salarios dos pais:\n");
        } else if (linha == 1) {
            printf("\nDigite as idades dos pais:\n");
        } else {
            printf("\nDigite o numero de filhos de cada um dos pais:\n");
        }

        for (int coluna = 0; coluna < colunas; coluna++) {
            printf("\nDigite a informação do pai %i: ", coluna + 1);
            scanf("%f", &matriz[linha][coluna]);
        }
    }
    printf("\n");

    for (int coluna = 0; coluna < colunas; coluna++) {
        float salario = matriz[0][coluna];
        float idade = matriz[1][coluna];
        float filhos = matriz[2][coluna];

        printf("O pai %i tem %.0f anos, %.0f filhos e recebe R$ %.2f.\n", coluna + 1, idade, filhos, salario);

        somaSalario += salario;
        somaIdade += idade;
        somaFilhos += filhos;

        if (idade > maiorIdade) {
            maiorIdade = idade;
            paiMaior = coluna + 1;
        }
        if (idade < menorIdade) {
            menorIdade = idade;
            paiMenor = coluna + 1;
        }
    }
    printf("\n");

    // Imprime as médias
    printf("A media salarial dos pais eh R$ %.2f!\n", somaSalario / colunas);
    printf("A media das idades dos pais eh %.1f!\n", somaIdade / colunas);
    printf("A media de quantidade de filhos eh %.1f!\n", somaFilhos / colunas);

    printf("\n");

    printf("O pai %i eh o mais velho de todos com %i anos.\n", paiMaior, maiorIdade);
    printf("O pai %i eh o mais novo de todos com %i anos.\n", paiMenor, menorIdade);

    return 0;
}