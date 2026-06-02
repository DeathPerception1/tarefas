// Autor: Lucas Frade Ferreira Moscardo
// Tarefa 08 - Exercício 1: matriz transposta 

#include <stdio.h>
#include <stdlib.h>

int main(){

    int numero_linhas = 0, numero_colunas = 0, i, k;
    // scanf("%d %d", &numero_linhas, &numero_colunas);

    do{
        // printf("Digite um numero de linhas e colunas:\n");
        scanf("%d %d", &numero_linhas, &numero_colunas);
        // suponhamos: n_linhas = 3
        // suponhamos: n_colunas = 4
    }while( !( numero_linhas >= 1 && numero_colunas <= 100 ) || !( numero_linhas >= 1 && numero_linhas <= 100) );
    
    // criando as linhas da matriz
    // vai alocar um número x de bytes para cada linha da matriz. Já que um ponteiro de inteiro são 8 bytes, serão:
    // numero_linhas * 8.
    int** matriz = (int**) malloc(numero_linhas * sizeof(int*));


    // criando as colunas da matriz
    for(i = 0; i < numero_linhas ; i++){
        // para cada iteração, a função malloc aloca um número x de bytes da memória para o indice y, em matriz[i]
        // se o número de colunas for, por exemplo, 4. Será 4 * 4 (4 bytes: tamanho de um inteiro). 16 bytes de memória seram alocados
        // para matriz[i]. Ou seja, cada linha da nossa matriz vai ter 16 bytes
        matriz[i] = (int*) malloc(numero_colunas * sizeof(int));
    }

    // preenchendo a matriz:
    for(i = 0 ; i < numero_linhas ; i++){
        for(k = 0 ; k < numero_colunas ; k++){
            scanf("%d", &matriz[i][k]);
        }
    }

    // imprimaindo a matriz (teste se tá tudo certo nela)
    // printf("Matriz normal\n");
    // for(i = 0; i < numero_linhas ; i++){
    //     for(k = 0; k < numero_colunas ; k++){
    //         printf("%d\t", matriz[i][k]);
    //     }
    //     printf("\n");
    // }



    // fazendo a matriz transposta:

    int numero_linhas_transposta = numero_colunas;
    int numero_colunas_transposta = numero_linhas;

    int** matriz_transposta = (int**) malloc(numero_linhas_transposta * sizeof(int*));

    for(i = 0 ; i < numero_linhas_transposta ; i++){
        matriz_transposta[i] = (int*) malloc(numero_colunas_transposta * sizeof(int));
    }

    // preenchendo a transposta
    for(i = 0 ; i < numero_linhas_transposta ; i++){
        for(k = 0; k < numero_colunas_transposta ; k++){
            matriz_transposta[i][k] = matriz[k][i];
        }
    }

    // printf("\n");

    // printf("Matriz transposta\n");
    for(k = 0; k < numero_colunas ; k++){
        for(i = 0; i < numero_linhas ; i++){
            printf("%d ", matriz[i][k]);
        }
        printf("\n");
    }
    
    // LIBERANDO MEMÓRIA (boas práticas de programação)
    for(i = 0; i < numero_linhas ; i++){ 
        free(matriz[i]); // libera as colunas de cada linhas
    }
    free(matriz); // libera o array do ponteiro principal

    // Liberando a memória da transposta
    for(i = 0; i < numero_linhas ; i++){ 
        free(matriz_transposta[i]); // libera as colunas de cada linhas
    }
    free(matriz_transposta); // libera o array do ponteiro principal

    return 0;
}