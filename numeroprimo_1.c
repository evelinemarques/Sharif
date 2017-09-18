

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int n, i=2, cont=1;
    scanf("%d", &n);
    if(n<0){
        printf("NUMERO INVALIDO");
    }

    else{
        while(i<=n/2 && cont==1){
            if(n%i==0){
                cont=0;
            }
            i=i+1;
        }
        if(cont==1){
            printf("PRIMO");
        }
        else{
            printf("NAO PRIMO");
        }
    }     
    

    return (EXIT_SUCCESS);
}

