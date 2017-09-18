/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   quatroalgarismo.c
 * Author: eveli
 *
 * Created on 17 de Setembro de 2017, 12:31
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int n;
    scanf("%d", &n);
    n=(n*10)+(((n/100)+(((n/10)%10)*3)+((n%10)*5))%7);
    printf("O NOVO NUMERO E = %d\n", n);
    

    return (EXIT_SUCCESS);
}

