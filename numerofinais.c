/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   numerofinais.c
 * Author: eveli
 *
 * Created on 17 de Setembro de 2017, 08:04
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int n, j, i, p=1;
    scanf("%d", &n);
    if(n<2){
        printf("Campeonato invalido!\n");
    }
    else{
        for(i=1 ;i<=n;i++){
            for(j=i+1;j<=n;j++){
                printf("Final %d: Time%d X Time%d\n", p,i,j );
                p++;
            }
        }
    }

    return (EXIT_SUCCESS);
}

