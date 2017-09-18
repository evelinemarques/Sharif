/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   somatoriosimples.c
 * Author: eveli
 *
 * Created on 16 de Setembro de 2017, 14:48
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    double s=0, j=1;
    int n, i;
    scanf("%d", &n);
    if(n<=1){
        printf("Numero invalido\n");
    }
    else{
        for(i=1;i<=n;i++){
        s=s+(1/j);
        j++;
        }
        printf("%lf\n", s);
    }
        
    

    return (EXIT_SUCCESS);
}

