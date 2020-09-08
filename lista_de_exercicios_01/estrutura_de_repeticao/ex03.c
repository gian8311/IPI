// 3 - A prefeitura de uma cidade fez uma pesquisa entre seus habitantes, coletando dados sobre o salário e número de filhos. A prefeitura deseja saber:
// a) média do salário da população;
// b) média do número de filhos;
// c) maior e menor salário;
// d) percentual de habitantes com mais de 2 filhos.
// A quantidade de habitantes que serão cadastrados é fornecida pelo usuário.

#include <stdio.h>

int main(void) {
    int habitantes;
    float total = 0, somaSalario = 0, somaFilhos = 0, maiorSalario = -1, menorSalario = 99999, maisQueDoisFilhos = 0;

    printf("Digite a quantidade de habitantes que serao cadastrados: ");
    scanf("%i", &habitantes);

    for (int i = 1; i <= habitantes; i++) {
        int filhos, salario;

        printf("Digite o salario do %iº habitante: R$ ", i);
        scanf("%i", &salario);
        getchar();

        if (salario > maiorSalario) {
            maiorSalario = salario;
        }
        if (salario < menorSalario) {
            menorSalario = salario;
        }

        somaSalario += salario;

        printf("Digite quantos filhos o %iº habitante tem: ", i);
        scanf("%i", &filhos);
        getchar();

        if (filhos > 2) {
            maisQueDoisFilhos++;
        }

        somaFilhos += filhos;

        total++;
    }

    printf("A media do salario da populacao eh R$ %.2f.\n", somaSalario / total);                                           // a
    printf("A media de filhos da populacao eh %.2f.\n", somaFilhos / total);                                                // b
    printf("O maior e menor salario da populacao, sao, respectivamente R$ %.2f e R$ %.2f.\n", maiorSalario, menorSalario);  // c
    printf("Os habitantes com mais de 2 filhos representam %.2f%% da populacao.\n", (maisQueDoisFilhos / total) * 100);     // d

    return 0;
}