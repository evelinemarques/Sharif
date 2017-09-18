
#include <stdio.h>
#include <stdlib.h>
#define PI  3.14159

/*
 * 
 */
int main(int argc, char** argv) {
    float r, h, at, custo;
    scanf("%f", &r);
    scanf("%f", &h);
    at=(2*PI*r*h)+(2*(PI*r*r));
    custo=at*100;
    printf("O VALOR DO CUSTO E = %.2f\n", custo);

    return (EXIT_SUCCESS);
}

