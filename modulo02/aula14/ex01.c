#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    srand(time(NULL));

    int num1 = rand() % 11;
    int num2 = rand() % 11;

    printf("%i elevado a %i eh igual a %f", num1, num2, pow(num1, num2));

    return 0;
}