// Para doar sangue é necessário ter entre 18 e 67 anos. Faça um programa que leia a idade do usuário. Se o usuário puder doar sangue imprima: "Você pode doar"; caso contrário imprima: "Você não pode doar".

#include <stdio.h>

int main(void) {
    int idade;
    printf("Digite a sua idade: ");
    scanf("%i", &idade);

    if (idade >= 18 && idade <= 67) {
        printf("Você pode doar!");
    } else {
        printf("Você não pode doar!");
    }

    return 0;
}
