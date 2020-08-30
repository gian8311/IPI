// 4 - Entrar com sexo (caractere ‘m’ para masculino e ‘f’ para feminino) e idade de uma pessoa. Se a pessoa for do sexo feminino e tiver menos de 25 anos, imprimir a mensagem: ACEITA. Caso contrário, imprimir a mensagem: NÃO ACEITA.

#include <stdio.h>

int main(void) {
    char sexo;
    int idade;

    printf("Digite o seu sexo (m ou f): ");
    scanf("%c", &sexo);

    printf("Digite a sua idade: ");
    scanf("%i", &idade);

    if (sexo == 'f' && idade < 25) {
        printf("ACEITA.");
    } else {
        printf("NÃO ACEITA.");
    }

    return 0;
}