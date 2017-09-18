/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   salario.c
 * Author: eveli
 *
 * Created on 17 de Setembro de 2017, 14:09
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int mat, i=1;
    float horas, sal, vHora;
    while(i==1){
        scanf("%d %f %f", &mat, &horas, &vHora);
        getchar();        
        if(mat!=0){
            sal=horas*vHora;
            printf("%d %.2f\n", mat, sal);
        }
        else{
            i=2;
        }
    }

    return (EXIT_SUCCESS);
}

