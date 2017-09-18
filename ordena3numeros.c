/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ordena3numeros.c
 * Author: eveli
 *
 * Created on 17 de Setembro de 2017, 12:08
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    float n1, n2, n3, menor, maior, meio;
    scanf("%f %f %f", &n1, &n2, &n3);
    if(n1>n2&&n1>n3){
        maior=n1;
        if(n2>n3){
            meio=n2;
            menor=n3;
        }
        else{
            meio=n3;
            menor=n2;
        }
    }
    else if(n2>n1&&n2>n3){
        maior=n2;
        if(n1>n3){
            meio=n1;
            menor=n3;
        }
        else{
            meio=n3;
            menor=n1;
        }
    }
    else if(n3>n1&&n3>n2){
        maior=n3;
        if(n2>n1){
            meio=n2;
            menor=n1;
        }
        else{
            meio=n1;
            menor=n2;
        }
    }
    printf("%.2f, %.2f, %.2f", menor, meio, maior);
    
    

    return (EXIT_SUCCESS);
}

