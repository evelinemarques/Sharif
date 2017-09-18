#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int n, i=2, j=0;
    do{
        scanf("%d", &n);
        printf("Fatoracao nao e possivel para o numero %d!\n", n);
    }while(n<=1);
        printf("%d = ", n);
        while(n/i>=1){
            if(n%i==0){
                j++;
                n=n/i;
                printf("%d ", i);
                if(n!=1){
                    printf("x ");
                }
            }
            else{
                i++;
            }
        }
    
    
    return (EXIT_SUCCESS);
}

