/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   locadoracharretes.c
 * Author: eveli
 *
 * Created on 16 de Setembro de 2017, 13:11
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int hora;
    float total;
    scanf("%d", &hora);
    total=(hora/3)*10;
    total=total+((hora%3)*5);
    printf("O VALOR A PAGAR E = %.2f\n", total); 
    return (EXIT_SUCCESS);
}

