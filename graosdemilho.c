/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   graosdemilho.c
 * Author: eveli
 *
 * Created on 17 de Setembro de 2017, 20:01
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int n, i, j=0, soma=0;
    scanf("%d", &n);
    for(i=0;i<32;i++){
        if(j==0){
            soma=soma+n;
            j=1;
        }
        else{
            n=n*2;
            soma=soma+n;
            j==0;
        }

    }
    printf("%d", soma);
    

    return (EXIT_SUCCESS);
}

