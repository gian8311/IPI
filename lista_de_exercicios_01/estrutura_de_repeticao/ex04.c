// 4 - No dia da estreia do filme “Senhor dos Anéis”, uma grande emissora de TV realizou uma pesquisa logo após o encerramento do filme. Cada espectador respondeu a um questionário no qual constava sua idade e sua opinião em relação ao filme:
// excelente;
// bom;
// regular.
// Crie um algoritmo que receba a idade e a opinião de 10 espectadores, calcule e imprima:
// a) A média das idades das pessoas que responderam excelente.
// b) A quantidade de pessoas que responderam regular.
// c) A percentagem de pessoas que responderam bom entre todos os expectadores analisados.

#include <stdio.h>

int main(void) {
    int somaRegular = 0;
    float somaIdadeExcelente = 0, somaBom = 0, total = 10;
    for (int i = 1; i <= 10; i++) {
        int idade, avaliacao;

        printf("Digite a sua idade: ");
        scanf("%i", &idade);
        getchar();

        printf("\n");
        printf("1 - Excelente\n");
        printf("2 - Bom\n");
        printf("3 - Regular\n");
        printf("\nEscolha uma das opcoes acima: ");
        scanf("%i", &avaliacao);
        getchar();
        printf("\n");

        switch (avaliacao) {
            case 1:
                somaIdadeExcelente += idade;
                break;

            case 2:
                somaBom++;
                break;
            case 3:
                somaRegular++;
        }
    }
    printf("A media das idades das pessoas que responderam excelente eh %.2f.\n", somaIdadeExcelente / total);
    printf("%i pessoas acharam o filme regular.\n", somaRegular);
    printf("As pessoas que acharam o filme bom reperesentam %.2f%% dos espectadores.\n", (somaBom / total) * 100);

    return 0;
}