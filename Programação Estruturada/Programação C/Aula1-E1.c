/* 
 * File:   Aula1-E1.c
 * Author: neitan96
 *
 * Created on 1 de Agosto de 2016, 19:57
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int codigoProduto;
    printf("Digite o codigo do produto: ");
    scanf("%i", &codigoProduto);
    
    printf("\n");
    switch(codigoProduto){
        case 1:
            printf("Cafeteira");
            break;
        case 2:
            printf("Fogao");
            break;
        case 3:
            printf("Geladeira");
            break;
        case 4:
            printf("Máquina de Lavar");
            break;
        case 5:
            printf("TV");
            break;
        default:
            printf("Produto invalido!");
    }
    
    return (EXIT_SUCCESS);
}

