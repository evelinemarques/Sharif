/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   classificacaoaco.c
 * Author: eveli
 *
 * Created on 17 de Setembro de 2017, 17:55
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int cc, dr, rt, grau;
    scanf("%d", &cc);
    scanf("%d", &dr);
    scanf("%d", &rt);
    if(cc<7&&dr>50&&rt>80000){
        grau=10;
    }
    else if(cc<7&&dr>50){
        grau=9;
    }
    else if(cc<7){
        grau=8;
    }
    else{
        grau=7;
    }
    printf("ACO DE GRAU = %d\n", grau);
    
    
    

    return (EXIT_SUCCESS);
}

