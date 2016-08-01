/* 
 * File:   Aula1-E5.c
 * Author: neitan96
 *
 * Created on 1 de Agosto de 2016, 20:37
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int numero;
    
    printf("Digite um numero: ");
    scanf("%i", &numero);
    
    if(numero <= 10)
        printf("F1");
    else if(numero <= 100)
        printf("F2");
    else
        printf("F3");
    
    return (EXIT_SUCCESS);
}

