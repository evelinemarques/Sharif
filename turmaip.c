/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   tumaip.c
 * Author: eveli
 *
 * Created on 15 de Setembro de 2017, 18:32
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int mat, i=1;
    float nF, n1, n2, n3, n4, n5, n6, n7, n8, mediaP, l1, l2, l3, l4, l5, medial, trab, freq;
    while(i!=0){
        do{
            scanf("%d", &mat);
            scanf("%f %f %f %f %f %f %f %f", &n1,&n2, &n3, &n4, &n5, &n6, &n7, &n8);
            scanf("%f %f %f %f %f", &l1, &l2, &l3, &l4, &l5);
            scanf("%f", &trab);
            scanf("%f",&freq);
        }while(mat<0&&mat!=-1);
        mediaP=(n1+n2+n3+n4+n5+n6+n7+n8)/8;
        medial=(l1+l2+l3+l4+l5)/5;        
        if(mat==-1 && freq==-1 && mediaP==-1&&medial==-1&& trab==-1){
            return 0;
        }
        else{
            freq=(freq/128)*100;
            nF=(0.7*mediaP)+(0.15*medial)+(0.15*trab);
            if(nF>=6&&freq>=75){
                printf("Matricula: %d, Nota Final: %.2f, Situacao Final: APROVADO\n", mat, nF);
            }
            else if(nF<6&&freq>=75){
                printf("Matricula: %d, Nota Final: %.2f, Situacao Final: REPROVADO POR NOTA\n", mat, nF);
            }
            else if(nF>=6&&freq<75){
                printf("Matricula: %d, Nota Final: %.2f, Situacao Final: REPROVADO POR FREQUENCIA\n", mat, nF);
            }
            else{
                printf("Matricula: %d, Nota Final: %.2f, Situacao Final: REPROVADO POR NOTA E FREQUENCIA\n", mat, nF);
            }
            
        }
    }
    
    

    return (EXIT_SUCCESS);
}

