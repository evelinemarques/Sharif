/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   geradortabuada.c
 * Author: eveli
 *
 * Created on 16 de Setembro de 2017, 22:37
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    float n, i, K, s, x;
    int j;
    do{
        scanf("%f", &n);
    }while(n<0||n>9);    
    scanf("%f", &i);
    scanf("%f", &K);
    scanf("%f", &s);
    printf("Tabuada de soma:\n");
    x=i;
    for(j=0;j<K;j++){
        printf("%.2f + %.2f = %.2f\n", n, x, n+x);
        x=x+s;
    }
    printf("Tabuada de subtracao:\n");
    x=i;
    for(j=0;j<K;j++){
        printf("%.2f - %.2f = %.2f\n", n, x, n-x);
        x=x+s;
    }
    printf("Tabuada de multiplicacao:\n");
    x=i;
    for(j=0;j<K;j++){
        printf("%.2f x %.2f = %.2f\n", n, x, n*x);
        x=i+s;
    }
    printf("Tabuada de divisao:\n");
    x=i;
    for(j=0;j<K;j++){
        printf("%.2f / %.2f = %.2f\n", n, x, n/x);
        x=x+s;
    }

    return (EXIT_SUCCESS);
}

