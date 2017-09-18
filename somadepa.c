/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   somadepa.c
 * Author: eveli
 *
 * Created on 16 de Setembro de 2017, 14:36
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int a, r, n,termo, soma;
    scanf("%d %d %d", &a, &r, &n);
    termo=a;
    soma=a;
    while(n>1){
        soma=(termo+r)+soma;
        termo=termo+r;
        n--;
    }
    printf("%d\n", soma);
    

    return (EXIT_SUCCESS);
}

