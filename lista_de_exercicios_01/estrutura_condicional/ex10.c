//10 - A nota final de um estudante é calculada a partir da média de três notas atribuídas entre o intervalo de 0 até 10, respectivamente, a um trabalho de laboratório, a uma avaliação semestral e a um exame final. De acordo com o resultado, mostre na tela se o aluno está reprovado (média <= 4), de recuperação (4 <= media < 7) ou se foi aprovado (media >= 7). Se o aluno for para a recuperação, leia a sua nota na recuperação, e verifique se a média desta nota com a nota final é maior ou igual a 5. Se for, imprima que o mesmo está aprovado na recuperação, caso contrário imprima que o mesmo está reprovado.

#include <stdio.h>

int main(void) {
    float lab, avaliacao, final;

    printf("Digite a nota do trabalho de laboratorio: ");
    scanf("%f", &lab);
    printf("Digite a nota da avaliacao semestral: ");
    scanf("%f", &avaliacao);
    printf("Digite a nota do exame final: ");
    scanf("%f", &final);

    float media = (lab + avaliacao + final) / 3;

    if (media >= 7) {
        printf("Parabens!! Voce passou por media.");
    } else if (media < 4) {
        printf("Que pena :( Voce foi reprovado");
    } else {
        float recuperacao;

        printf("Digite quanto voce tirou na recuperacao: ");
        scanf("%f", &recuperacao);

        float mediaFinal = (final + recuperacao) / 2;

        if (mediaFinal >= 5) {
            printf("Parabens!! Voce conseguiu recuperar!");
        } else {
            printf("Que pena :( Voce nao conseguiu recuperar!");
        }
    }

    return 0;
}