

#include <stdio.h>
#include <stdlib.h>


int main(int argc, char** argv) {
    int n, total, i=1;
    float pop, ger, arq, cad, red;
    do{
       scanf("%d", &n); 
    }while(n<0);
    
    while(i<=n){
        do{
            scanf("%d %f %f %f %f", &total, &pop, &arq, &cad, &red);
        }while(total<0);
        red=((pop/100)*total*1)+((arq/100)*total*5)+((cad/100)*total*10)+((red/100)*total*20);
        printf("A RENDA DO JOGO N. %d E = %.2f\n", i,red);
        i++;
    }
    

    return (EXIT_SUCCESS);
}

