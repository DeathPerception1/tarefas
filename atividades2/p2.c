// Autor: Lucas Frade Ferreira Moscardo

#include <stdio.h>
#include <math.h>

// vai ser mais fácil fazer por função, pois, se qualquer número em a % i for == 0, ele já retorna o sim direto

char *primo(int a){
    // bom, vamos ter que colocar alguns limitações
    // primeiro, o número 1. O número não se enquadra como primo, portanto, nosso algoritmo já deve excluir ele de cara   
    if (a == 1)  return "nao";
    if (a==2) return "sim"; // segundo, quase todo número primo é ímpar, com exceção do 2. Por isso, já condicionamos para o programa digitar um número maior que 2
    // além disso, por não existirem nenhum número par, além do dois, ímpar, já eliminamos eles tb
    if (a%2 == 0) return "nao"; 

    int i;
    if (a > 2){
        // printf("Isso funciona?"); Nota do Lucas: Funciona.
        // terceiro, sera no intervalo de testes do número. Suponhamos que eu tenha o número seja 2. Eu não preciso que o algoritmo 
        // calcule divisores maiores que dois, portanto, a distância máximam que o laço assume é x <= 2.
        for(i=3; i <= sqrt(a); i+=2){
        // printf("Isso funciona?"); // não
            if (a % i == 0){
                // return "sim1"; versão teste
                return "nao";
            }
        }
        return "sim";
    }
}

int main(){
    int a;
    scanf("%d", &a);
    printf("%s", primo(a));
}