/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   maiorsegmentoigual.c
 * Author: eveli
 *
 * Created on 17 de Setembro de 2017, 08:01
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int n, num, ant, comp=1, compmax=1, i;
    scanf("%d", &n);
    scanf("%d", &ant);
    for(i=1;i<n;i++){
        scanf("%d", &num);
        if(num==ant){
            comp=comp+1;
            if(compmax<comp){
                compmax=comp;
            }
        }
        else{
            comp=1;   
        }
        ant=num;
    }
    printf("O comprimento do segmento de numeros iguais e: %d\n", compmax );

    return (EXIT_SUCCESS);

    return (EXIT_SUCCESS);
}

