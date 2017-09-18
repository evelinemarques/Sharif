

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int n1, n2, n3, qd, num=0;
    scanf("%d %d %d", &n1, &n2, &n3);
    if((n1/10)<=0&&(n2/10)<=0&&(n3/10)<=0){
        num=(n1*100)+(n2*10)+(n3*1);
        qd=num*num;
        printf("%d, %d", num, qd);
    }
    else{
        printf("DIGITO INVALIDO");
    }
    

    return (EXIT_SUCCESS);
}

