
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    float tempF, qtdM, tempC, qtdP;
    scanf("%f", &tempF);
    scanf("%f", &qtdP);
    tempC= (5*tempF-160)/9;
    qtdM=qtdP*25.4;
    printf("O VALOR EM CELSIUS = %.2f\n", tempC);
    printf("A QUANTIDADE DE CHUVA E = %.2f\n", qtdM);
    

    return (EXIT_SUCCESS);
}

