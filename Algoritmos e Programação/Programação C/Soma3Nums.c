/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int num1, num2, num3, soma;
    
    printf("Digite o primeiro numero: ");
    scanf("%i", &num1);
    printf("Digite o segundo numero: ");
    scanf("%i", &num2);
    printf("Digite o terceiro numero: ");
    scanf("%i", &num3);
    
    soma = num1+num2+num3;
    
    printf("A soma dos numeros eh: %i\n", soma);
    
    return EXIT_SUCCESS;
}