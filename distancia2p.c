/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   distancia2p.c
 * Author: eveli
 *
 * Created on 16 de Setembro de 2017, 22:13
 */

#include <stdio.h>
#include <stdlib.h>
#include<math.h>

/*
 * 
 */
int main(int argc, char** argv) {
    float x1, y1, x2, y2, d, x, y;
    scanf("%f", &x1);
    scanf("%f", &y1);
    scanf("%f", &x2);
    scanf("%f", &y2);
    x=x2-x1;
    y=y2-y1;
    d=(pow(x,2))+(pow(y,2));
    d=sqrt(d);
    printf("A DISTANCIA ENTRE A e B = %.2f\n", d);
    

    return (EXIT_SUCCESS);
}

