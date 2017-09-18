/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   decolagem.c
 * Author: eveli
 *
 * Created on 16 de Setembro de 2017, 21:48
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    double m, v, t, a, W, s, vf;
    scanf("%lf", &m);
    scanf("%lf", &a);
    scanf("%lf", &t);
    s=(a*t*t)/2;
    v=a*t;
    vf=v*3.6;
    m=m*1000;
    W=(m*v*v)/2;
    printf("VELOCIDADE = %.2lf\n", vf);
    printf("ESPACO PERCORRIDO = %.2lf\n", s);
    printf("TRABALHO REALIZADO = %.2lf\n", W);
    
    
    

    return (EXIT_SUCCESS);
}

