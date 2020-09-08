// 11 - Faça um programa que simule a urna eletrônica. A tela a ser apresentada deverá ser da seguinte forma:
// As opções são:
// 1 - Candidato Jair Rodrigues <br/>
// 2 - Candidato Carlos Luz <br/>
// 3 - Candidato Neves Rocha <br/>
// 4 - Nulo <br/>
// 5 - Branco <br/>
// Entre com o seu voto:
// O programa deverá ler os votos dos eleitores e, quando o número 6 for lido, apresentar as seguintes informações:
// a) O número de votos de cada candidato;
// b) A porcentagem de votos nulos;
// c) A porcentagem de votos brancos;
// d) O candidato vencedor.

#include <stdio.h>

int main(void) {
    int votosTotal = 0, votosJair = 0, votosCarlos = 0, votosNeves = 0, opcao, maior = -1, vencedor;
    float votosNulo = 0, votosBranco = 0;

    while (opcao != 6) {
        printf("\nAs opcoes sao:\n");
        printf("1 - Candidato Jair Rodrigues\n");
        printf("2 - Candidato Carlos Luz\n");
        printf("3 - Candidato Neves Rocha\n");
        printf("4 - Nulo\n");
        printf("5 - Branco\n");
        printf("6 - Cancelar voto e encerrar o programa\n");

        printf("\nEntre com o seu voto: ");
        scanf("%i", &opcao);
        getchar();

        switch (opcao) {
            case 1:
                votosJair++;
                votosTotal++;
                break;
            case 2:
                votosCarlos++;
                votosTotal++;
                break;
            case 3:
                votosNeves++;
                votosTotal++;
                break;
            case 4:
                votosNulo++;
                votosTotal++;
                break;
            case 5:
                votosBranco++;
                votosTotal++;
            case 6:
                break;
        }
    }

    printf("=-=-=- RESULTADOS -=-=-=\n");
    printf("Jair Rodrigues: %i votos.\n", votosJair);
    printf("Carlos Luz: %i votos.\n", votosCarlos);
    printf("Neves Rocha: %i votos.\n", votosNeves);

    printf("\n%.2f%% dos votos foram nulos.\n", (votosNulo / votosTotal) * 100);
    printf("%.2f%% dos votos foram brancos.\n", (votosBranco / votosTotal) * 100);
    if (votosJair > votosCarlos && votosJair > votosNeves) {
        printf("O candidato Jair Rodrigues foi o vencedor com %i votos!", votosJair);
    } else if (votosCarlos > votosJair && votosCarlos > votosNeves) {
        printf("O candidato Carlos Luz foi o vencedor com %i votos!", votosCarlos);
    } else if (votosNeves > votosCarlos && votosNeves > votosJair) {
        printf("O candidato Neves Rocha foi o vencedor com %i votos!", votosNeves);
    }

    return 0;
}