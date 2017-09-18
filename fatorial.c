/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   fatorial.c
 * Author: eveli
 *
 * Created on 16 de Setembro de 2017, 22:31
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int n, i=1;
    unsigned long int fat=1;
    
    scanf("%d", &n);
    while(i<=n){
        fat=fat*i;
        i++;
    }
    printf("%d! = %lu", n, fat);
    

    return (EXIT_SUCCESS);
}

