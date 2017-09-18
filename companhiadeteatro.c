/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   companhiadeteatro.c
 * Author: eveli
 *
 * Created on 17 de Setembro de 2017, 18:02
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    float valorIngresso, valorInicial, valorFinal, lucro, aux, maior=0, melhorValor;
    int publico, melhorPublico;
    scanf("%f %f %f", &valorIngresso, &valorInicial, &valorFinal);
    if(valorFinal>valorInicial){
        while(valorInicial<=valorFinal){
            aux=valorIngresso-valorInicial;
            if(aux>0){
                publico=120+(aux*50);
                lucro=(publico*valorInicial)-(200+(0.05*publico));
            }
            else{
                aux=aux*(-1);
                publico=120-(aux*60);
                lucro=(publico*valorInicial)-(200+(0.05*publico));
            }
            printf("V: %.2f, N: %d, L: %.2f\n", valorInicial, publico, lucro);
            if(lucro>maior){
                maior=lucro;
                melhorPublico=publico;
                melhorValor=valorInicial;
            }
            valorInicial++;

        }
        printf("Melhor valor final: %.2f\n",melhorValor );
        printf("Lucro: %.2f\n", maior);
        printf("Numero de ingressos: %d\n", melhorPublico);
    }
    
    else{
        printf("INTERVALO INVALIDO\n");
    }
   

    return (EXIT_SUCCESS);
}

