// 7 - Receber uma palavra, calcule quantas vogais (a, e, i, o, u) possui essa palavra. Entre com um caractere (vogal ou consoante) e substitua todas as vogais da palavra dada por esse caractere.

#include <stdio.h>
#include <string.h>

int main(void) {
    char palavra[30];

    printf("Digite uma palavra: ");
    scanf("%s", palavra);
    getchar();

    int nVogais = 0;

    for (int i = 0; i < strlen(palavra); i++) {
        char letra = palavra[i];
        if (letra == 'a' || letra == 'A' || letra == 'e' || letra == 'E' || letra == 'i' || letra == 'I' || letra == 'o' || letra == 'O' || letra == 'u' || letra == 'U') {
            nVogais++;
        }
    }

    if (nVogais == 0) {
        printf("\nEssa palavra nao tem nenhuma vogal!");
    } else {
        printf("\nEssa palavra tem %i vogais!\n", nVogais);

        char substituidor;
        printf("\nDigite uma letra para substituir essas vogais: ");
        scanf("%c", &substituidor);

        for (int i = 0; i < strlen(palavra); i++) {
            char letra = palavra[i];
            if (letra == 'a' || letra == 'A' || letra == 'e' || letra == 'E' || letra == 'i' || letra == 'I' || letra == 'o' || letra == 'O' || letra == 'u' || letra == 'U') {
                palavra[i] = substituidor;
            }
        }

        printf("\nA palavra com as substituicoes eh: %s", palavra);
    }

    return 0;
}