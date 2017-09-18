/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   paresdeindice.c
 * Author: eveli
 *
 * Created on 17 de Setembro de 2017, 21:47
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int i, j, m, n;
    scanf("%d %d", &m, &n);
    for(i=2;i<=m;i++){
        for(j=1;j<i&&j<=n;j++){
            printf("%(%d,%d)%", i, j);
            if(j<n&&i-1>j){
                printf("-");
            }
        }
        printf("\n");
    }
    
    

    return (EXIT_SUCCESS);
}

