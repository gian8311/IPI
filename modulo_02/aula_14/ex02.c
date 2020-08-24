#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    srand(time(NULL));

    int num = 50 + rand() % 151;

    int res = num % 2 == 0;

    printf("O número gerado foi %i\n", num);
    printf("%i", res);

    return 0;
}