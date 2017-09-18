/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   decimalbinario.c
 * Author: eveli
 *
 * Created on 17 de Setembro de 2017, 19:31
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int n, num;
    char c;
    int i=1;
    scanf("%d", &n);
    if(n>=0&&n<=255){
        num=0;
        while(n>0){
           num=((n%2)*i)+num;
           i=i*10;
           n=n/2;
        }
        printf("%08d", num);
    }
    else{
        printf("Numero invalido!");
    }

    return (EXIT_SUCCESS);
}

