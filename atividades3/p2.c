// Autor: Lucas Frade Ferreira Moscardo

#include<stdio.h>

int main(){
    int tamanho, i, t = 0;
    scanf("%d", &tamanho);
    int vetor[tamanho];

    for(i=0 ; i < tamanho ; i++){
        scanf("%d", &vetor[i]);
    }
    // printf("%d tamanho\n", tamanho);
    
    int k;
    // usar dois loops. Um para percorrer a primeira posição do vetor
    // O segundo seria percorrer dnv o vetor, no entanto, contando quantas vezes o index i se repete 
    for(i = 0; i < tamanho ; i++){
        int apareceu = 0;
        for(k = 0; k < i; k++){
            if(vetor[i] == vetor[k]){
                apareceu = 1;          
                // printf("primeiro print %d", apareceu); 
                break;
            }
        }
            if(!apareceu){
                int repete = 0;
                for(k = 0; k < tamanho; k++){
                    if(vetor[i] == vetor[k]){
                        repete++;
                    }
                }
                printf("%d %d\n", vetor[i], repete);
            }
        }
        return 0;
    }

