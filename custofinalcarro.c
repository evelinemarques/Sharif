/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   custofinalcarro.c
 * Author: eveli
 *
 * Created on 16 de Setembro de 2017, 18:37
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    float preco, pDist, imp, custoF;
    scanf("%f", &preco);
    scanf("%f", &pDist);
    scanf("%f", &imp);
    custoF=preco+((pDist/100)*preco)+(preco*(imp/100));
    printf("O VALOR DO CARRO E = %.2f\n", custoF);
    

    return (EXIT_SUCCESS);
}

