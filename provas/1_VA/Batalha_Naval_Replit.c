#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int main(void) {
    srand(time(NULL));

    int tam = 11;
    int campoGeral[tam][tam];
    int campoJogador1[tam][tam];
    int campoJogador2[tam][tam];

    // 0 - Nada
    // 1 - Navio só JOGADOR 1
    // 2 - Navio 2 horizontal JOGADOR 1
    // 3 - Navio 2 diagonal pra cima/direita JOGADOR 1
    // 4 - Navio 2 diagonal pra cima/esquerda JOGADOR 1
    // 5 - Navio só JOGADOR 2
    // 6 - Navio 2 horizontal JOGADOR 2
    // 7 - Navio 2 diagonal pra cima/direita JOGADOR 2
    // 8 - Navio 2 diagonal pra cima/esquerda JOGADOR 2
    // 9 - Navio inimigo acertado
    // 10 - Tiro na água
    char stringParaPrint[] = " ++++****XO";

    // Preencher todo o campo com 0
    for (int i = 0; i < tam; i++) {
        for (int j = 0; j < tam; j++) {
            campoGeral[i][j] = 0;
            campoJogador1[i][j] = 0;
            campoJogador2[i][j] = 0;
        }
    }

    // JOGADOR 1
    // Colocar embarcação de tamanho 1 do jogador 1
    int x, y;
    int ehVazio = 0;

    do {
        x = rand() % tam;
        y = rand() % tam;

        if (campoGeral[y][x] == 0) {
            ehVazio = 1;
        }

    } while (!ehVazio);

    campoGeral[y][x] = 1;

    // Colocar embarcação de tamanho 2 do jogador 1
    ehVazio = 0;
    do {
        x = rand() % tam;
        y = rand() % tam;

        if (x != tam - 1) {
            if (campoGeral[y][x] == 0 && campoGeral[y][x + 1] == 0) {
                ehVazio = 1;
            }
        }

    } while (!ehVazio);

    campoGeral[y][x] = 2;
    campoGeral[y][x + 1] = 2;

    // Colocar embarcação de tamanho 2 para cima/direita do jogador 1
    ehVazio = 0;
    do {
        x = rand() % tam;
        y = rand() % tam;

        if (y != 0 && x != tam - 1) {
            if (campoGeral[y][x] == 0 && campoGeral[y - 1][x + 1] == 0) {
                ehVazio = 1;
            }
        }

    } while (!ehVazio);

    campoGeral[y][x] = 3;
    campoGeral[y - 1][x + 1] = 3;

    // Colocar embarcação de tamanho 2 para cima/esquerda do jogador 1
    ehVazio = 0;
    do {
        x = rand() % tam;
        y = rand() % tam;

        if (y != 0 && x != 0) {
            if (campoGeral[y][x] == 0 && campoGeral[y - 1][x - 1] == 0) {
                ehVazio = 1;
            }
        }

    } while (!ehVazio);

    campoGeral[y][x] = 4;
    campoGeral[y - 1][x - 1] = 4;

    // JOGADOR 2
    // Colocar embarcação de tamanho 1 do jogador 2
    ehVazio = 0;

    do {
        x = rand() % tam;
        y = rand() % tam;

        if (campoGeral[y][x] == 0) {
            ehVazio = 1;
        }

    } while (!ehVazio);

    campoGeral[y][x] = 5;

    // Colocar embarcação de tamanho 2 do jogador 2
    ehVazio = 0;
    do {
        x = rand() % tam;
        y = rand() % tam;

        if (x != tam - 1) {
            if (campoGeral[y][x] == 0 && campoGeral[y][x + 1] == 0) {
                ehVazio = 1;
            }
        }

    } while (!ehVazio);

    campoGeral[y][x] = 6;
    campoGeral[y][x + 1] = 6;

    // Colocar embarcação de tamanho 2 para cima/direita do jogador 2
    ehVazio = 0;
    do {
        x = rand() % tam;
        y = rand() % tam;

        if (y != 0 && x != tam - 1) {
            if (campoGeral[y][x] == 0 && campoGeral[y - 1][x + 1] == 0) {
                ehVazio = 1;
            }
        }

    } while (!ehVazio);

    campoGeral[y][x] = 7;
    campoGeral[y - 1][x + 1] = 7;

    // Colocar embarcação de tamanho 2 para cima/esquerda do jogador 2
    ehVazio = 0;
    do {
        x = rand() % tam;
        y = rand() % tam;

        if (y != 0 && x != 0) {
            if (campoGeral[y][x] == 0 && campoGeral[y - 1][x - 1] == 0) {
                ehVazio = 1;
            }
        }

    } while (!ehVazio);

    campoGeral[y][x] = 8;
    campoGeral[y - 1][x - 1] = 8;

    // Numero de embarcações do jogador 1
    int embarcacoesJogador1 = 4;

    // Numero de embarcações do jogador 2
    int embarcacoesJogador2 = 4;

    // Jogador 1 ganhou?
    int jogador1Ganhou = 0;

    // Jogador 2 ganhou?
    int jogador2Ganhou = 0;

    // Qual o jogador da vez
    int vez = 1;

    while (!jogador1Ganhou && !jogador2Ganhou) {
        if (embarcacoesJogador2 == 0) {
            jogador1Ganhou = 1;
            break;
        } else if (embarcacoesJogador1 == 0) {
            jogador2Ganhou = 1;
            break;
        }

        // Atualiza as matrizes dos jogadores
        for (int i = 0; i < tam; i++) {
            for (int j = 0; j < tam; j++) {
                switch (campoGeral[i][j]) {
                    case 1:
                        campoJogador1[i][j] = 1;
                        break;
                    case 2:
                        campoJogador1[i][j] = 2;
                        break;
                    case 3:
                        campoJogador1[i][j] = 3;
                        break;
                    case 4:
                        campoJogador1[i][j] = 4;
                        break;
                    case 5:
                        campoJogador2[i][j] = 5;
                        break;
                    case 6:
                        campoJogador2[i][j] = 6;
                        break;
                    case 7:
                        campoJogador2[i][j] = 7;
                        break;
                    case 8:
                        campoJogador2[i][j] = 8;
                        break;
                    case 9:
                        campoJogador1[i][j] = 9;
                        campoJogador2[i][j] = 9;
                        break;
                }
            }
        }

        system("clear");

        printf("Vez do jogador %i\n\n", vez);

        // Letra
        char letra;

        // Numero
        int numero;

        // Tiro
        int bombardeio;

        if (vez == 1) {
            // Imprime o mapa do jogador 1
            printf("   0  1  2  3  4  5  6  7  8  9  10\n");
            for (int i = 0; i < tam; i++) {
                printf("%c ", i + 65);
                for (int j = 0; j < tam; j++) {
                    printf("|%c|", stringParaPrint[campoJogador1[i][j]]);
                }
                printf("\n");
            }

            do {
                // Pedir a coordenada do bombardeio
                printf("\nDigite a coordenada do bombardeio: ");
                scanf("%c%i", &letra, &numero);
                getchar();

                letra = toupper(letra);
                letra -= 65;

                if (letra < 0 || letra > tam - 1 || numero < 0 || numero > tam - 1 || campoGeral[letra][numero] == 9 || campoJogador2[letra][numero] == 10) {
                    printf("\nBombardeio Invalido! Digite uma coordenada valida!\n");
                }

            } while (letra < 0 || letra > tam - 1 || numero < 0 || numero > tam - 1 || campoGeral[letra][numero] == 9 || campoJogador1[letra][numero] == 10);

            bombardeio = campoGeral[letra][numero];

            // Bombardeio na agua
            if (bombardeio == 0) {
                campoJogador1[letra][numero] = 10;
                printf("\nVoce acertou a agua!\n\n");
                sleep(2);
            }
            // Bombardeio na propria embarcação
            if (bombardeio == 1 || bombardeio == 2 || bombardeio == 3 || bombardeio == 4) {
                printf("\nOOPS! Voce acertou a sua propria embarcacao!\n\n");
                embarcacoesJogador1--;
                sleep(2);
                // Bombardeio na embarcação inimiga
            } else if (bombardeio == 5 || bombardeio == 6 || bombardeio == 7 || bombardeio == 8) {
                printf("\nBOOM! Voce acertou uma embarcacao do inimigo!\n\n");
                embarcacoesJogador2--;
                sleep(2);
            }

            // Passa a vez para o jogador 2
            vez = 2;

        } else if (vez == 2) {
            // Imprime o mapa do jogador 2
            printf("   0  1  2  3  4  5  6  7  8  9  10\n");
            for (int i = 0; i < tam; i++) {
                printf("%c ", i + 65);
                for (int j = 0; j < tam; j++) {
                    printf("|%c|", stringParaPrint[campoJogador2[i][j]]);
                }
                printf("\n");
            }

            do {
                // Pedir a coordenada do bombardeio
                printf("\nDigite a coordenada do bombardeio: ");
                scanf("%c%i", &letra, &numero);
                getchar();

                letra = toupper(letra);
                letra -= 65;

                if (letra < 0 || letra > tam - 1 || numero < 0 || numero > tam - 1 || campoGeral[letra][numero] == 9 || campoJogador2[letra][numero] == 10) {
                    printf("\nBombardeio Invalido! Digite uma coordenada valida!\n");
                }

            } while (letra < 0 || letra > tam - 1 || numero < 0 || numero > tam - 1 || campoGeral[letra][numero] == 9 || campoJogador2[letra][numero] == 10);
            bombardeio = campoGeral[letra][numero];

            // Bombardeio na agua
            if (bombardeio == 0) {
                campoJogador2[letra][numero] = 10;
                printf("\nVoce acertou a agua!\n\n");
                sleep(2);
            }
            // Bombardeio na propria embarcação
            if (bombardeio == 5 || bombardeio == 6 || bombardeio == 7 || bombardeio == 8) {
                printf("\nOOPS! Voce acertou a sua propria embarcacao!\n\n");
                embarcacoesJogador2--;
                sleep(2);
                // Bombardeio na embarcação inimiga
            } else if (bombardeio == 1 || bombardeio == 2 || bombardeio == 3 || bombardeio == 4) {
                printf("\nBOOM! Voce acertou uma embarcacao do inimigo!\n\n");
                embarcacoesJogador1--;
                sleep(2);
            }

            // Passa a vez para o jogador 1
            vez = 1;
        }

        // Se o bombardeio acertar uma embarcação, transformar em uma embarcação destruída
        switch (bombardeio) {
            case 1:
                campoGeral[letra][numero] = 0;
                break;

            case 2:
                for (int i = 0; i < tam; i++) {
                    for (int j = 0; j < tam; j++) {
                        if (campoGeral[i][j] == 2) {
                            campoGeral[i][j] = 9;
                        }
                    }
                }
                break;

            case 3:
                for (int i = 0; i < tam; i++) {
                    for (int j = 0; j < tam; j++) {
                        if (campoGeral[i][j] == 3) {
                            campoGeral[i][j] = 9;
                        }
                    }
                }
                break;

            case 4:
                for (int i = 0; i < tam; i++) {
                    for (int j = 0; j < tam; j++) {
                        if (campoGeral[i][j] == 4) {
                            campoGeral[i][j] = 9;
                        }
                    }
                }
                break;

            case 5:
                for (int i = 0; i < tam; i++) {
                    for (int j = 0; j < tam; j++) {
                        if (campoGeral[i][j] == 5) {
                            campoGeral[i][j] = 9;
                        }
                    }
                }
                break;

            case 6:
                for (int i = 0; i < tam; i++) {
                    for (int j = 0; j < tam; j++) {
                        if (campoGeral[i][j] == 6) {
                            campoGeral[i][j] = 9;
                        }
                    }
                }
                break;

            case 7:
                for (int i = 0; i < tam; i++) {
                    for (int j = 0; j < tam; j++) {
                        if (campoGeral[i][j] == 7) {
                            campoGeral[i][j] = 9;
                        }
                    }
                }
                break;

            case 8:
                for (int i = 0; i < tam; i++) {
                    for (int j = 0; j < tam; j++) {
                        if (campoGeral[i][j] == 8) {
                            campoGeral[i][j] = 9;
                        }
                    }
                }
                break;
        }
    }

    // Anuncia quem ganhou o jogo
    system("clear");

    if (jogador1Ganhou) {
        if (embarcacoesJogador1 == 1) {
            printf("O jogador 1 ganhou com apenas %i embarcacao sobrando!\n\n", embarcacoesJogador1);
        } else {
            printf("O jogador 1 ganhou com %i embarcacoes sobrando!\n\n", embarcacoesJogador1);
        }
    } else if (jogador2Ganhou) {
        if (embarcacoesJogador2 == 1) {
            printf("O jogador 2 ganhou com apenas %i embarcacao sobrando!\n\n", embarcacoesJogador2);
        } else {
            printf("O jogador 2 ganhou com %i embarcacoes sobrando!\n\n", embarcacoesJogador2);
        }
    }

    // Imprime o mapa final
    printf("   0  1  2  3  4  5  6  7  8  9  10\n");
    for (int i = 0; i < tam; i++) {
        printf("%c ", i + 65);
        for (int j = 0; j < tam; j++) {
            printf("|%c|", stringParaPrint[campoGeral[i][j]]);
        }
        printf("\n");
    }

    return 0;
}