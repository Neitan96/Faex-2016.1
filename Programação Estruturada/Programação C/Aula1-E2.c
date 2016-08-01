/* 
 * File:   Aula1-E2.c
 * Author: neitan96
 *
 * Created on 1 de Agosto de 2016, 20:03
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    
    float salario;
    
    printf("Digite o salario do funcionario: ");
    scanf("%f", &salario);
    
    if(salario <= 1500)
        salario *= 1.08;
    else if(salario <= 3000)
        salario *= 1.08;
    else
        salario *= 1.05;
    
    printf("Salario reajustado: %.2f", salario);
    
    return (EXIT_SUCCESS);
}

