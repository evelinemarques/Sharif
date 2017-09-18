

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int n, i=2, cont=0;
    scanf("%d", &n);
    if(n<0){
        printf("Numero invalido!");
    }

    else{
        if(n==1||n==0){
            cont=1;
        }
        while(i<=n/2&&cont==0){
            if(n%i==0){
                cont++;
            }
            i++;
        }
        if(cont==0){
            printf("PRIMO");
        }
        else{
            printf("NAO PRIMO");
        }
    }

    return (EXIT_SUCCESS);
}

