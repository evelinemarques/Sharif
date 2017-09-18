/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   arredondamento.c
 * Author: eveli
 *
 * Created on 16 de Setembro de 2017, 16:01
 */

#include <stdio.h>
#include <stdlib.h>
#include<math.h>

/*
 * 
 */
int main(int argc, char** argv) {
    double n, inteiro, dec, decT, arre;
    int i=1, j=10;
    scanf("%lf", &n);
    inteiro=floor(n);
    dec=n-inteiro;
    while(i<=3){
        decT=dec*j;
        decT=decT-floor(decT);
        if(decT*10>=5){
            decT=dec-(decT/j);
            arre=inteiro+(decT+(1/j));
        }
        else{
            decT=dec-(decT/j);
            arre=inteiro+dec; 
        }
        printf("%lf\n", arre);
        i++;
        j=j*10;
    }

    
    
    


    
    

    return (EXIT_SUCCESS);
}

