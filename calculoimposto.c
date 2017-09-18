/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   calculoimposto.c
 * Author: eveli
 *
 * Created on 17 de Setembro de 2017, 20:21
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int mat, dep;
    float sal, salF, imp, impB, impL, res;
    scanf("%d %f %d %f %f", &mat, &sal, &dep, &salF, &imp);
    if(salF/sal>=12){
        impB=salF*0.2;
        impL=impB-(300*dep);
        res=impL-(salF*(imp/100));
    }
    else if(salF/sal>5){
        impB=salF*0.08;
        impL=impB-(300*dep);
        res=impL-(salF*(imp/100));
    }
    else{
        impB=0;
        impL=impB-(300*dep);
        res=impL-(salF*(imp/100));
    }
    printf("MATRICULA = %d\n", mat);
    printf("IMPOSTO BRUTO = %.2f\n", impB);
    printf("IMPOSTO LIQUIDO = %.2f\n", impL);
    printf("RESULTADO = %.2f\n", res);
    if(res<0){
        printf("IMPOSTO A RECEBER\n");
    }
    else if(res==0){
        printf("IMPOSTO QUITADO\n");
    }
    else{
        printf("IMPOSTO A PAGAR\n");
    }
    

    return (EXIT_SUCCESS);
}

