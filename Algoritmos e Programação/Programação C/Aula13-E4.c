/* 
 * File:   Aula13-E4.c
 * Author: Neitan96
 *
 * Created on 18 de Junho de 2016, 22:13
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int idadeSolteiros = 0, idadeCasados = 0, idadeViuvos = 0;
    int idadeMSolteiros = 0, idadeMCasados = 0, idadeMViuvos = 0;
    int pessoasSolteiras = 0, pessoasCasadas = 0, pessoasViuvas = 0;
    int idade;
    char estado, escolha = 'S';
    
    while(escolha == 'S' || escolha == 's'){
        
        printf("Digite a idade da pessoa: ");
        scanf("%i%*c", &idade);
        
        while(idade < 0){
            printf("Idade invalida! Por favor digite novamente: ");
            scanf("%i%*c", &idade);
        }
        
        printf("Digite o estado civil da pessoa(C - Casada, S - Solteira, V - viuva): ");        
        scanf("%c%*c", &estado);
        
        while(estado != 'S' && estado != 's' && 
                estado != 'C' && estado != 'c' && 
                estado != 'V' && estado != 'v'){
            printf("Estado civil invalido! Por favor digite novamente: ");
            scanf("%c%*c", &estado);
        }
        
        if(estado == 'S' || estado == 's'){
            idadeSolteiros += idade;
            pessoasSolteiras++;
        }else if(estado == 'C' || estado == 'c'){
            idadeCasados += idade;
            pessoasCasadas++;
        }else{
            idadeViuvos += idade;
            pessoasViuvas++;
        }
        
        printf("Deseja adicionar outra pessoa?(S ou N): ");
        scanf("%c%*c", &escolha);
        
        while(escolha != 'S' && escolha != 's' && escolha != 'N' && escolha != 'n'){
            printf("Por favor digite S para sim  e N para nao: ");
            scanf("%c%*c", &escolha);
        }
    }
    
    if(pessoasSolteiras > 0)
        idadeMSolteiros = idadeSolteiros/pessoasSolteiras;
    if(pessoasCasadas > 0)
        idadeMCasados = idadeCasados/pessoasCasadas;
    if(pessoasViuvas > 0)
        idadeMViuvos = idadeViuvos/pessoasViuvas;
    
    printf("Solteiras:\n");
    printf("  Quantidade: %i\n", pessoasSolteiras);
    printf("  Media de idade: %i\n", idadeMSolteiros);
    printf("Casadas:\n");
    printf("  Quantidade: %i\n", pessoasCasadas);
    printf("  Media de idade: %i\n", idadeMCasados);
    printf("Viuvas:\n");
    printf("  Quantidade: %i\n", pessoasViuvas);
    printf("  Media de idade: %i\n", idadeMViuvos);
    
    return (EXIT_SUCCESS);
}

