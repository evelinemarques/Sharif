/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   soma3.c
 * Author: eveli
 *
 * Created on 17 de Setembro de 2017, 15:15
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int n1, n2, n3, n4, men1, men2, men3, soma;
    scanf("%d", &n1);
    scanf("%d", &n2);
    scanf("%d", &n3);
    scanf("%d", &n4);
    if(n1<n2&&n1<n3&&n1<n4){
        men1=n1;
        if(n2<n3&&n2<n4&&n3<n4){
            men2=n2;
            men3=n3;
        }
        else if(n3<n2&&n3<n4&&n2<n4){
            men2=n3;
            men3=n2;
        }
        else{
            men2=n4;
        }
                   
    }
    else if(n2<n1&&n2<n3&&n2<n4){
        men1=n2;
        if(n1<n3&&n1<n4){
            men2=n1;
        }
        else if(n3<n2&&n3<n4){
            men3=n3;
        }
        else{
            men3=n4;
        }
                   
    }
    else if(n3<n1&&n3<n2&&n3<n4){
        men1=n3;
        if(n1<n2&&n1<n4){
            men2=n1;
        }
        else if(n4<n2&&n4<n1){
            men3=n4;
        }
        else{
            men3=n2;
        }
                   
    }
    else if(n4<n1&&n4<n2&&n4<n3){
        men1=n4;
        if(n1<n2&&n1<n3){
            men2=n1;
        }
        else if(n3<n2&&n3<n1){
            men3=n3;
        }
        else{
            men3=n2;
        }
                   
    }
    soma=men1+men2+men3;
    printf("%d\n", soma);
    

    return (EXIT_SUCCESS);
}

