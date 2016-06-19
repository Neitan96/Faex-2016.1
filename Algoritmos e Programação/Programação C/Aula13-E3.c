/* 
 * File:   Aula13-E3.c
 * Author: Neitan96
 *
 * Created on 18 de Junho de 2016, 21:57
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    
    float nota1, nota2, media, exFinal;
    int faltas;
    
    printf("Digite a sua primeira nota: ");
    scanf("%f", &nota1);
    
    while(nota1 < 0){
        printf("Nota invalida! Por favor digite uma nova nota: ");
        scanf("%f", &nota1);
    }
    
    printf("Digite a sua segunda nota: ");
    scanf("%f", &nota2);
    
    while(nota2 < 0){
        printf("Nota invalida! Por favor digite uma nova nota: ");
        scanf("%f", &nota2);
    }
    
    printf("Digite a quantidade de faltas: ");
    scanf("%i", &faltas);
    
    while(faltas < 0){
        printf("Faltas invalida! Por favor digite novamente: ");
        scanf("%f", &faltas);
    }
    
    media = (nota1 + nota2) / 2;
    
    printf("A media eh %.1f o aluno foi ", media);
    
    if(faltas > 17 || media < 4){
        printf("REPROVADO");
    }else if(media >= 6){
        printf("APROVADO");
    }else if(media >= 4){
        printf("para o EXAME FINAL\n");
        
        printf("Digite a nota do exame final: ");
        scanf("%f", &exFinal);
        
        if(exFinal < 6){
            printf("O aluno foi REPROVADO");
        }else{
            printf("O aluno foi APROVADO");
        }
    }
    
    printf("\n");
    
    return (EXIT_SUCCESS);
}

