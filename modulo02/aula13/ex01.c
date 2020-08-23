#include <math.h>
#include <stdio.h>

int main(void) {
    float a, b;

    printf("Escreva dois números: ");
    scanf("%f %f", a, b);

    float senoPrimeiro = sin(a);
    float raiz = sqrt(senoPrimeiro);

    printf("A raiz quadrada do seno de %f eh %f\n", a, raiz);

    float cossenoPrimeiro = cos(a);
    float potencia = pow(b, cossenoPrimeiro);

    printf("%f elevado ao cosseno de %f (%f) eh %f", b, a, cossenoPrimeiro, potencia);

    return 0;
}