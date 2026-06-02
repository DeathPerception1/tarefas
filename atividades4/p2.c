// Autor: Lucas Frade Ferreira Moscardo
// Tarefa 08 - Exercício 2: matriz simétrica 





#include <stdio.h>
#include <stdlib.h>

// E

int main(){

    // Construção da matriz
    int ordem, i, k;

    //  
    do{
        // printf("TESTES\n");
        scanf("%d", &ordem);
    } while( !(ordem >= 1 && ordem <= 100) );
    
    // printf("Ok");

    int** matriz = (int**) malloc(ordem * sizeof(int*));
    for(i = 0; i < ordem ; i++){
        matriz[i] = (int*) malloc(ordem* sizeof(int));
    }
    
    for(i = 0; i < ordem ; i ++){
        for(k = 0 ; k < ordem ; k++){
            scanf("%d", &matriz[i][k]);
        }
    }
    // fim da construção da matriz

    // construindo a Matriz transposta
    
    int** matriz_transposta = (int**) malloc(ordem * sizeof(int*));

    for(int i = 0 ; i < ordem ; i++){
        matriz_transposta[i] = (int*) malloc(ordem * sizeof(int));
    }

    // preenchendo a matriz transposta
    for(i = 0 ; i < ordem ; i++){
        for(k = 0; k < ordem ; k++){
            matriz_transposta[i][k] = matriz[k][i];
        }
    }

    // Verificando a simetria
    
    int verificador = 1; // começa verdadeiro
    for(i = 0; i < ordem; i++){
        for(k = 0; k < ordem ; k++){
            // Achou um elmento diferente? Não é simétrica
            if(matriz[i][k] != matriz_transposta[i][k]){
                verificador = 0;
                break;
            }
        }
        if (verificador == 0){ // É fato que a matriz não é transposta, portanto, quebra o loop
            break;
        }
    }
    

    printf("%d", verificador);

    // liberando a memória
    for(i = 0; i < ordem ; i++){ 
        free(matriz[i]); // libera as colunas de cada linhas
    }
    free(matriz); // libera o array do ponteiro principal
    
    // transposta
    for(i = 0; i < ordem ; i++){ 
        free(matriz_transposta[i]); // libera as colunas de cada linhas
    }
    free(matriz_transposta); // libera o array do ponteiro principal
}
