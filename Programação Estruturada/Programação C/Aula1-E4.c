/* 
 * File:   Aula1-E3.c
 * Author: neitan96
 *
 * Created on 1 de Agosto de 2016, 20:10
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int quantidade;
    float valor;
    
    printf("Digite a quantidade de peras compradas: ");
    scanf("%i", &quantidade);
    
    if(quantidade < 13)
        valor = quantidade*0.7;
    else
        valor = quantidade*0.6;
    
    printf("O valor a ser pago eh: %.2f", valor);
    
    return (EXIT_SUCCESS);
}

