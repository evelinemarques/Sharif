/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   sequenciaordenada.c
 * Author: eveli
 *
 * Created on 17 de Setembro de 2017, 14:36

 *  */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int n=1, aux=0;
    float num, pri;
    
    while(n!=0){
        scanf("%d", &n);
        if(n!=0){
            scanf("%f", &pri);
            while(n>1){
                scanf("%f", &num);
                if(pri<num&&aux!=2){
                    pri=num;
                    aux=1;
                }
                else{
                    aux=2;
                }
                n--;
            }
            if(aux==1){
                printf("ORDENADA\n");
            }
            else{
                printf("DESORDENADA\n");
            }
        }
              
    }
    
    
    

    return (EXIT_SUCCESS);
}

