
#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    float a, b, c, delta;
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    delta=(b*b)-(4*a*c);
    printf("O VALOR DE DELTA E = %.2f", delta);

    return (EXIT_SUCCESS);
}

