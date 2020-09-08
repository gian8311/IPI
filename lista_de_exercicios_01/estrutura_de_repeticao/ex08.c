// 8 - Desenvolva um sistema de verificação do usuário. Para isso, crie uma variável inteira chamada de senha e atribua a ela um número inteiro de 4 dígitos. O programa deve pedir ao usuário uma senha, e verificar se a senha condiz com o valor armazenado na variável senha. Se a senha digitada não estiver correta, imprima “Senha Incorreta” e solicite novamente a senha. Se a senha digitada for a correta, deverá ser apresentada a mensagem “Senha Correta”. Vale salientar que o usuário só possui 3 tentativas para acertar a senha. Caso não acerte, deve ser impresso “acesso bloqueado”.

#include <stdio.h>

int main(void) {
    int senha = 4053, tentativas = 0;

    while (1) {
        if (tentativas == 3) {
            printf("\nAcesso negado!");
            break;
        }

        int tentativa;

        printf("Digite a senha: ");
        scanf("%i", &tentativa);
        getchar();

        if (senha == tentativa) {
            printf("Senha Correta!\n");
            break;
        } else {
            printf("Senha Incorreta!\n");
        }

        tentativas++;
    }

    return 0;
}