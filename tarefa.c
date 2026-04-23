#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#define MAX 5

int main(){
    // colocando o = {0} diz pro vetor que em cada índice do tamanho MAX do vetor, tem um zero
    int vetor[MAX] = {0}, par[MAX] = {0}, impar[MAX] = {0}, i, j=0, k=0;

    // adiciona elementos no vetor e, também, separa por par ou ímpar
    for(i = 0 ; i < MAX ; i++) { 
        printf("Digite sua vetor %d: ", i+1);
        scanf("%d", &vetor[i]);
        
        if(vetor[i] % 2 == 0){
            // verifica se tá funcionando, só pra teste
            printf("O valor %d no indice %d = par\n", i, vetor[i]);
            // o j++ delimita o tamanho do meu vetor par[]
            par[j] = vetor[i];
            j++;
        } else {
            // verifica se tá funcionando, só pra teste
            printf("O valor %d no indice %d = impar\n", i, vetor[i]);
            impar[k] = vetor[i];
            // o k++ delimita o tamanho do meu vetor impar[]
            k++;
        }     
    }

    printf("Tamanho do vetor: %d\n\n", i);

    printf("Lista dos pares:");
    for (i = 0 ; i < j ; i++){
        printf(" %d",par[i]);
    }
    printf("\nTamanho do vetor par: %d", j);
    // essa parte embaixo é só uma linha. Eu usei ela pra separar os pares dos impares
    printf("\n------------------------------------\n");

    printf("Lista dos impares: ");
    for (i = 0 ; i < k ; i++)
    {
    printf("%d ", impar[i]);
    }
    printf("\nTamanho do vetor impar: %d", k);

    return 0;
}