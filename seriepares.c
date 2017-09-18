/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   seriepares.c
 * Author: eveli
 *
 * Created on 16 de Setembro de 2017, 14:28
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int x, y, i;
    scanf("%d %d", &x, &y);
    if(x%2==0){
        for(i=0;i<y;i++,x=x+2){
            printf("%d ", x);
        }
        printf("\n");
    }
    else{
        printf("O PRIMEIRO NUMERO NAO E PAR\n");
    }

    return (EXIT_SUCCESS);
}

