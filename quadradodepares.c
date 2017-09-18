/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   quadradodepares.c
 * Author: eveli
 *
 * Created on 16 de Setembro de 2017, 14:17
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    unsigned long int n, i, y;
    do{
        scanf("%lu", &n);
    }while(n<5||n>2000);
    for(i=2;i<=n;i=i+2){
        y=i*i;
        printf("%lu^2 = %lu\n",i, y);
    }
    return (EXIT_SUCCESS);
}

