/* 
 * File:   Aula13-E1-B.c
 * Author: Neitan96
 *
 * Created on 16 de Junho de 2016, 21:34
 */

#include <stdio.h>
#include <stdlib.h>

int Aula13E1B() {
    
    int num, acumulado = 0, somas = 0;
    
    while(acumulado < 50){
        
        printf("Digite um numero de 5 a 15: ");
        scanf("%i", &num);
        
        while(num < 5 || num > 15){
            printf("Numero invalido! Digite um novo numero de 5 a 15: ");
            scanf("%i", &num);
        }
        
        acumulado += num;
        somas ++;
        printf("Acumulado: %i\n", acumulado);
    }
    
    return (EXIT_SUCCESS);
}

