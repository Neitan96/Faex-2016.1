/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int num1, num2, num3, num4, media;
    
    printf("Digite o primeiro numero: ");
    scanf("%i", &num1);
    printf("Digite o segundo numero: ");
    scanf("%i", &num2);
    printf("Digite o terceiro numero: ");
    scanf("%i", &num3);
    printf("Digite o quarto numero: ");
    scanf("%i", &num4);
    
    media = (num1+num2+num3+num4)/4;
    
    printf("A media eh: %i\n", media);
    
    return EXIT_SUCCESS;
}