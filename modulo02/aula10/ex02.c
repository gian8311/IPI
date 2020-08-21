#include <stdio.h>

int main(void) {
    float fahrenheit;
    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%f", &fahrenheit);

    float celsius = (fahrenheit - 32) * 5 / 9;

    printf("%f°F eh equivalente a %f°C", fahrenheit, celsius);

    return 0;
}
