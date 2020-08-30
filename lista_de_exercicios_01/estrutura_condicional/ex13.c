// 13 - Você está desenvolvendo um sistema de controle de acesso a cinema. Este sistema deve pedir a idade do usuário, e em seguida imprimir as opções de filmes:
// - Titanic (16 anos)
// - Pica Pau (Livre)
// - A volta de Jason (18 anos)
// - Desistir
// Se o usuário escolher o filme e não tiver idade suficiente, o sistema deve imprimir "Voce nao tem idade para assistir ao filme".Caso o usuário tenha idade para o filme, o sistema imprime "Voce comprou o filme tal. Bom filme!".

#include <stdio.h>

int main(void) {
    int idade, opcao;

    printf("Digite a sua idade: ");
    scanf("%i", &idade);

    printf("-=-=-=-= CINEMA =-=-=-=-\n");
    printf("[1] Titanic (16 anos)\n");
    printf("[2] Pica Pau (Livre)\n");
    printf("[3] A volta de Jason (18 anos)\n");
    printf("[4] Desistir\n");

    printf("\nEscolha uma opcao: ");
    scanf("%i", &opcao);

    switch (opcao) {
        case 1:
            if (idade >= 16) {
                printf("Voce comprou Titanic. Bom filme!");
            } else {
                printf("Voce nao tem idade para assistir ao filme!");
            }
            break;
        case 2:
            printf("Voce comprou Pica Pau. Bom filme!");
            break;
        case 3:
            if (idade >= 18) {
                printf("Voce comprou A volta de Jason. Bom filme!");
            } else {
                printf("Voce nao tem idade para assistir ao filme!");
            }
            break;
        case 4:
            printf("Voce desistiu da compra!");
            break;
        default:
            printf("Opcao invalida");
            break;
    }

    return 0;
}