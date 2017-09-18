/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   temposegundos.c
 * Author: eveli
 *
 * Created on 16 de Setembro de 2017, 15:08
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int h, m, s, sT;
    scanf("%d", &h);
    scanf("%d", &m);
    scanf("%d", &s);
    sT=s+(m*60)+(h*3600);
    printf("O TEMPO EM SEGUNDOS E = %d\n", sT);

    return (EXIT_SUCCESS);
}

