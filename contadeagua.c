
#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int conta;
    float cons, valor;
    char tip;
    scanf("%d %f %c", &conta, &cons, &tip);
    switch(tip){
        case 'R':
            valor=5+(0.05*cons);
            break;
        case 'C':
            if(cons>80){
                valor=500+((cons-80)*0.25);
            }
            else{
                valor=500;
            }
            break;
        case 'I':
            if(cons>100){
                valor=800+((cons-100)*0.04);
            }
            else{
                valor=800;
            }
            break;
    }
    printf("CONTA = %d\n", conta);
    printf("VALOR DA CONTA = %.2f\n", valor);

   
    return (EXIT_SUCCESS);
}

