/* 
 * File:   Aula13-E1-D.c
 * Author: Neitan96
 *
 * Created on 17 de Junho de 2016, 20:26
 */

#include <stdio.h>
#include <stdlib.h>

int Aula13E1D() {
    
    int qtd;
    float num, media, soma = 0;
    
    printf("Digite a quantidade de numeros que deseja inserir: ");
    scanf("%i", &qtd);
    
    while(qtd <= 0){
        printf("Numero invalido! por favor digite um novo numero: ");
        scanf("%i", &qtd);
    }
    
    for(int i = 0; i < qtd; i++){
        printf("Digite o numero %i: ", i);
        scanf("%f", &num);
        
        while(num < 0){
            printf("Numero invalido! Digite um novo numero: ");
            scanf("%f", &num);
        }
        
        soma += num;
    }
    
    media = soma/qtd;
    
    printf("A media e: %.1f\n", media);
    
    return (EXIT_SUCCESS);
}

