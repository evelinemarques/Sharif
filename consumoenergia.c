

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    float salm, cons, valkW, valt, vald;
    scanf("%f", &salm);
    scanf("%f", &cons);
    valkW=(salm*0.7)/100;
    valt=cons*valkW;
    vald=valt*0.9;
    printf("Custo por kW: R$ %.2f\n", valkW);
    printf("Custo do consumo: R$ %.2f\n", valt);
    printf("Custo com desconto: R$ %.2f\n", vald);

    return (EXIT_SUCCESS);
}

