
#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int n;
    scanf("%d", &n);
    if(n%3==0&&n%5==0){
        printf("O NUMERO E DIVISIVEL\n");
        
    }
    else{
        printf("O NUMERO NAO E DIVISIVEL\n");
    }

    return (EXIT_SUCCESS);
}

