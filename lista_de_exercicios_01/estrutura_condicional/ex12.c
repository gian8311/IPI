// 12 - Peça três valores ao usuários, A, B, C, e verifique se eles podem ser valores dos lados de um triângulo. Para ser triângulo, (A+B) > C e (A+C) > B e (B+C) > A.
// Se não puder ser triângulo, imprima na tela que “nao pode ser triangulo”; caso contrário, imprima na tela qual é o triângulo formado: escaleno (todos os lados diferentes), isósceles (2 lados iguais e 1 diferente) ou equilátero (3 lados iguais).

#include <stdio.h>

int main(void) {
    float x, y, z;

    printf("Digite 3 valores para saber se eles podem formar um triangulo (x, y, z): ");
    scanf("%f, %f, %f", &x, &y, &z);

    if ((x + y) > z && (x + z) > y && (y + z) > x) {
        printf("Esses numeros podem formar um triangulo ");
        if (x == y && x == z) {
            printf("equilatero.");
        } else if (x != y && x != z && y != z) {
            printf("escaleno.");
        } else {
            printf("isoceles.");
        }

    } else {
        printf("Esses numeros nao podem formar um triangulo.");
    }

    return 0;
}