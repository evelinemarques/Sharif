/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   reajustesalarial.c
 * Author: eveli
 *
 * Created on 16 de Setembro de 2017, 14:24
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    float sal;
    scanf("%f", &sal);
    if(sal<=300){
        sal=sal+(sal*0.5);
    }
    else{
        sal=sal+(sal*0.3);
    }
    printf("SALARIO COM REAJUSTE = %.2f\n", sal);

    return (EXIT_SUCCESS);
}

