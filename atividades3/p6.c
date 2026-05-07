// Autor: Lucas Frade Ferreira Moscardo

#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    int vetor1[t], vetor2[t];
    for (int i = 0; i < t; i++) scanf("%d", &vetor1[i]);

    for (int i = 0; i < t; i++) scanf("%d", &vetor2[i]);

    // lógica:
    // Existem resultado possíveis n+1 digítos (2+2=4)
    int soma[t + 1];
    int recebe_um = 0;

    for (int i = t - 1; i >= 0; i--) {
        int s = vetor1[i] + vetor2[i] + recebe_um;
        soma[i + 1] = s % 10;
        recebe_um = s / 10;
    }
    soma[0] = recebe_um; 

    // Na hora de imprimir:
    for (int i = 0; i < t + 1; i++) {
        if (i == 0 && soma[i] == 0) {
            continue; 
        }
        printf("%d ", soma[i]);
    }
    printf("\n");

    return 0;
}