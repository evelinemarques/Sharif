/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   areadotriangulo.c
 * Author: eveli
 *
 * Created on 16 de Setembro de 2017, 18:32
 */

#include <stdio.h>
#include <stdlib.h>
#include<math.h>

/*
 * 
 */
int main(int argc, char** argv) {
    float area, l1, l2, l3, t;
    scanf("%f", &l1);
    scanf("%f", &l2);
    scanf("%f", &l3);
    t=(l1+l2+l3)/2;
    area=sqrt(t*(t-l1)*(t-l2)*(t-l3));
    printf("A AREA DO TRIANGULO E = %.2f\n", area);

    return (EXIT_SUCCESS);
}

