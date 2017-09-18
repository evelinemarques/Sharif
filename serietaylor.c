#include <stdio.h>
#include <stdlib.h>
#include<math.h>

/*
 * 
 */
int main(int argc, char** argv) {
    double x, soma=0,fat;
    int n, j, i=0, l,m;
    scanf("%lf %d", &x, &n);
    while(i<=n){
        l=(2*i)+1;
        fat=1;
        j=pow(-1,i);
        while(l>1){
             fat=fat*l;
            l--;
        }
        while(j==-1){
            m=(2*i)+1; 
            soma=soma-((pow(x,m))/fat);
            j=2;
        }
        while(j==1){
            m=(2*i)+1;    
            soma=soma+((pow(x,m))/fat);
            j=2;
        }
        i++;
        
        
    }
    printf("Seno %lf", soma);
    

    return (EXIT_SUCCESS);
}

