/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   jose.c
 * Author: eveli
 *
 * Created on 16 de Setembro de 2017, 23:02
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int t, a, b, inv1, inv2;
    scanf("%d", &t);
    while(t>0){
        do{
        scanf("%d %d", &a, &b);
        }while(a<0||b<0);
        inv1= (a/100)+(((a/10)%10)*10)+((a%10)*100);
        inv2= (b/100)+(((b/10)%10)*10)+((b%10)*100);
        if(inv1>inv2){
            printf("%d\n", inv1);
        }
        else{
            printf("%d\n", inv2);
        }
        t--; 
    }
    


    return (EXIT_SUCCESS);
}

