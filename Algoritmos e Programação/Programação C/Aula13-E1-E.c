/* 
 * File:   Aula13-E1-E.c
 * Author: Neitan96
 *
 * Created on 18 de Junho de 2016, 16:31
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    
    char nome[64];
    float salario, imposto, impostoPago, salarioLiq;
    
    printf("Digite seu nome: ");
    scanf("%s", &nome);
    
    printf("Digite seu salario: ");
    scanf("%f", &salario);
    
    while(salario < 0){
        printf("Salario invalido! Por favor digite um novo salrio: ");
        scanf("%f", &salario);
    }
    
    if(salario < 1000){
        imposto = 7.5;
    }else if(salario < 3000){
        imposto = 15;
    }else if(salario <= 5000){
        imposto = 22.5;
    }else{
        imposto = 27.5;
    }
    
    impostoPago = salario * (imposto/100);
    salarioLiq = salario - impostoPago;
    
    printf("Ola %s seu salario liquido eh %.2f o total de imposto pago eh %.2f\n", nome, salarioLiq, impostoPago);
    
    return (EXIT_SUCCESS);
}

