
#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int n;
    float tempF, tempC;
    scanf("%d", &n);
    while(n>0){
        scanf("%f", &tempF);
        tempC=5*(tempF-32)/9;
        printf("%.2f FAHRENHEIT EQUIVALE A %.2f CELSIUS\n", tempF, tempC);
        n--;
    }

    return (EXIT_SUCCESS);
}

