#include <stdio.h>
#include <stdlib.h>
#include<math.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int n, i=0,l;
    double x, soma=0, fat;
    scanf("%lf %d", &x, &n);
    while(i<=n){
        l=i;
        fat=1;
        while(l>1){
            fat=fat*l;
            l--;
        }
        soma=soma+((pow(x, i))/fat);
        i++;
    }
    printf("e^%.2lf = %lf\n", x,soma);
    

    return (EXIT_SUCCESS);
}

