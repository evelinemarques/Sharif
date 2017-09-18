/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ulstrapassagempop.c
 * Author: eveli
 *
 * Created on 16 de Setembro de 2017, 15:17
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int a, b, aux=0;
    do{
    scanf("%d", &a);
    scanf("%d", &b);
    }while(a>b);
    while(a<b){
        a=((a*0.03)+a);
        b=((b*0.015)+b);
        aux++;
    }
    printf("ANOS = %d\n", aux);
    

    return (EXIT_SUCCESS);
}

