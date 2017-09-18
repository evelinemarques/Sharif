
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    float n1, n2, media;
    do{
        scanf("%f %f", &n1, &n2);
        
    }while((n1<0||n1>10)||(n2<0||n2>10));
    media=(n1+n2)/2;
    printf("%.2f", media);
    return (EXIT_SUCCESS);
}

