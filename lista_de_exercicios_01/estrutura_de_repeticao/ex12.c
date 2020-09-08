// 12 - Crie um jogo de adivinhação que deve ser jogado entre dois usuários. O primeiro usuário deve digitar três caracteres distintos.O segundo usuário deve digitar uma tecla na tentativa de acertar um dos três caracteres. Caso a tecla digitada esteja correta, imprima uma mensagem informando que ele acertou e quantos caracteres restam para ele acertar. Caso ele erre, imprima na tela e informe quantos caracteres restam e o número de tentativas restantes (o usuário só pode digitar no máximo 15 caracteres). O jogo termina quando o usuário acerta todos os caracteres ou quando não possui mais tentativas.

#include <stdio.h>

int main(void) {
    char x, y, z;
    int tentativas = 0, restantes = 3;

    printf("Digite 3 caracteres distintos (a, b, c): ");
    scanf("%c, %c, %c", &x, &y, &z);
    getchar();

    while (1) {
        char tentativa;

        if (restantes == 0) {
            break;
        }

        if (tentativas == 15) {
            printf("Acabaram suas tentativas!");
            break;
        }

        printf("Tente adivinhar um caractere: ");
        scanf("%c", &tentativa);
        getchar();

        ++tentativas;

        if (tentativa == x || tentativa == y || tentativa == z && restantes > 1) {
            --restantes;
            printf("Parabens! Voce acertou! Restam apenas %i caracteres!\n", restantes);
        } else if (tentativa == x || tentativa == y || tentativa == z) {
            --restantes;
            printf("Parabens! Voce acertou todos os caracteres!");
        } else {
            printf("Voce errou, ainda faltam %i caracteres e voce tem %i tentativas!\n", restantes, 15 - tentativas);
        }
    }

    return 0;
}