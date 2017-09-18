/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   conversaonotaconceito.c
 * Author: eveli
 *
 * Created on 16 de Setembro de 2017, 13:29
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    float nota;
    char conc;
    scanf("%f", &nota);
    if(nota>=9){
        conc='A';
    }
    else if(nota>=7.5){
        conc='B';
    }
    else if(nota>=6){
        conc='C';
    }
    else{
        conc='D';
    }
    printf("NOTA = %.1f CONCEITO = %c\n", nota, conc);

    return (EXIT_SUCCESS);
}

