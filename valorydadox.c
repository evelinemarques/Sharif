/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   valorydadox.c
 * Author: eveli
 *
 * Created on 16 de Setembro de 2017, 15:58
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int x, y;
    scanf("%d", &x);
    if(x>1){
        y=x*x;
    }
    else if(x==1){
        y=0;
    }
    else{
        y=x;
    }
    printf("Y = %d\n", y);

    return (EXIT_SUCCESS);
}

