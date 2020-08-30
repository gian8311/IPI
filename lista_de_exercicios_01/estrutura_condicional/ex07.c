// 7 - Escreva um programa que peça ao usuário 3 valores reais: r, c1 e c2. O primeiro representa o raio de uma circunferência, e os outros dois valores representam o centro.
// https://user-images.githubusercontent.com/22121448/91649739-5bb21400-ea4d-11ea-8554-725447ddb6c3.png
// Peça para o usuário digitar mais dois valores reais: p1 e p2, que representam as coordenadas de um ponto. Imprima “Estah dentro”, se o ponto (p1,p2) está dentro da circunferência, caso contrário, imprima “Estah fora”.

#include <math.h>
#include <stdio.h>

int main(void) {
    float R, Xc, Yc, Xp, Yp, distancia, part1, part2;

    printf("Digite o raio e a coordenada do centro da circunferencia (r, c1, c2): ");
    scanf("%f, %f, %f", &R, &Xc, &Yc);

    printf("Digite a coordenada do ponto (p1, p2): ");
    scanf("%f, %f", &Xp, &Yp);

    part1 = pow(Xp, 2) - 2 * Xc * Xp + pow(Xc, 2);
    part2 = pow(Yp, 2) - 2 * Yc * Yp + pow(Yc, 2);

    distancia = sqrt((part1 + part2));

    if (distancia > R) {
        printf("O ponto estah fora da circunferencia!");
    } else {
        printf("O ponto estah dentro da circunferencia!");
    }

    return 0;
}