/* 
 * File:   Aula13E1.c
 * Author: Neitan96
 *
 * Created on 16 de Junho de 2016, 20:06
 */

#include <stdio.h>
#include <stdlib.h>

int Aula13E1A() {
    
    int num1;
    
    printf("Digite um numero de 0 a 10: ");
    scanf("%i", &num1);
    
    while(num1 < 0 || num1 > 10){
        printf("Numero fora da faixa, digite um numero de 0 a 10: ");
        scanf("%i", &num1);
    }
    
    printf("Numero que voce digitou: %i\n", num1);
    
    return (EXIT_SUCCESS);
}

