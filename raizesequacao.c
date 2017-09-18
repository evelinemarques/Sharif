/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   raizesequacao.c
 * Author: eveli
 *
 * Created on 17 de Setembro de 2017, 12:52
 */

#include <stdio.h>
#include <stdlib.h>
#include<math.h>

/*
 * 
 */
int main(int argc, char** argv) {
    float a, b, c, delta, r1, r2;
    scanf("%f %f %f", &a, &b, &c);
    delta=b*b-(4*a*c);
    if(delta==0){
        r1=-b/(2*a);
        printf("RAIZ UNICA\n");
        printf("X1 = %.2f\n", r1);
        
    }
    else if(delta>0){
        r1=(-b+sqrt(delta))/(2*a);
        r2=(-b-sqrt(delta))/(2*a);
        printf("RAIZES DISTINTAS\n");
        printf("X1 = %.2f\n", r1);
        printf("X2 = %.2f\n", r2);
    }
    else{
        printf(" RAIZES IMAGINARIAS\n");
    }
    
    

    return (EXIT_SUCCESS);
}

