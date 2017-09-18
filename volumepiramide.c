/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   volumepiramide.c
 * Author: eveli
 *
 * Created on 16 de Setembro de 2017, 14:02
 */

#include <stdio.h>
#include <stdlib.h>
#include<math.h>

/*
 * 
 */
int main(int argc, char** argv) {
    float v, aB, h, a;
    do{
        scanf("%f", &h);
        scanf("%f", &a);
    }while(h<0||a<0);
    
    v=((sqrt(3))*h*a*a)/2;
    printf("O VOLUME DA PIRAMIDE E = %.2f METROS CUBICOS\n", v);

    
    return (EXIT_SUCCESS);
}

