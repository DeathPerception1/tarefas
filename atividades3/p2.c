// Autor: Lucas Frade Ferreira Moscardo

#include<stdio.h>

int main(){


    int n, a, i, t_vetor = 0;
    scanf("%d", &n);
    int vetor[n];

    for(i=0 ; i < n ; i++){
        scanf("%d", &a);
        vetor[i] = a;
    }
    
    int k, repete, apareceu;
    // usar dois loops. Um para percorrer a primeira posição do vetor
    // O segundo seria percorrer dnv o vetor, no entanto, contando quantas vezes o index i se repete 
    for(i = 0; i < n ; i++){
        for(k = 0; k < i; k++){
            if(vetor[i] == vetor[k]){
                apareceu = 1;
                break;
            }
        }
            if(!apareceu){
                repete = 0;
                for(k = 0; k < n; k++){
                    if(vetor[i] == vetor[k]){
                        repete++;
                    }
                }
            printf("%d %d\n", vetor[i], repete);
            }
        }
        return 0;
    }
