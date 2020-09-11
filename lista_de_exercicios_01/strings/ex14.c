// 14 - O código de César é uma das mais simples e conhecidas técnicas de criptografia. É um tipo de substituição na qual cada letra do texto é substituída por outra, que se apresenta no alfabeto abaixo dela um número fixo de vezes. Por exemplo, com uma troca de três posições, ‘A’ seria substituído por ‘D’, ‘B’ se tornaria ‘E’, e assim por diante. Implemente um programa que faça uso desse Código de César (3 posições), entre com uma string e retorne a string codificada. Exemplo: String: a ligeira raposa marrom saltou sobre o cachorro cansado, Nova string: D OLJHLUD UDSRVD PDUURP VDOWRX VREUH R FDFKRUUR FDQVDGR (com caracteres maiúsculos)
// OBS: Os caracteres 'x', 'y' e 'z', que são os três últimos devem ser substituídos por 'A', 'B' e 'C' respectivamente.
// OBS: O caractere ' ' (espaço deve ser mantido)

#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void) {
    char frase[101] = "OI PORRA";

    // Pedindo a frase
    printf("Digite uma frase: ");
    scanf("%[^\n]%*c", frase);

    // Tamanho da frase
    int tamanhoReal = strlen(frase);

    // Transformar tudo em maíusculo
    for (int i = 0; i < tamanhoReal; i++) {
        frase[i] = toupper(frase[i]);
    }

    // Trocar as letras
    for (int i = 0; i < tamanhoReal; i++) {
        if (!(frase[i] == ' ')) {
            if (frase[i] == 'X') {
                frase[i] = 'A';
            } else if (frase[i] == 'Y') {
                frase[i] = 'B';
            } else if (frase[i] == 'Z') {
                frase[i] = 'C';
            } else {
                frase[i] += 3;
            }
        }
    }

    // Imprimir a frase
    printf("A frase codificada pela cifra de cesar eh: %s", frase);

    return 0;
}