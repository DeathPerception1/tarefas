// Autor: Lucas Frade Ferreira Moscardo

#include <stdio.h>
#include <string.h>


int main(){

    // Para cada casa visitada, o entrevistador anotava em sua prancheta qual o canal que estava sendo assistido 
    // (17 - Globo, 18 - SBT, 19 - Record, 20 -Bandeirantes, e 22 - Cultura) e o nu´mero de pessoas que estavam assistindo TV
    // Ou seja, primeiro o número do canal e depois quantos chupinhos estavam assistindo   


    int a, stop = 1, canal_digitado = 0, n_espectadores = 0;

    struct Canal {
        // char nome[20]; // se bem que o identificador seria o numero_canal... então meio que não precisa do nome
        int numero_canal;
        int telespectadores;
        double percentual_audiencia;
    };
    struct Canal Globo = {17, 0, 0};
    struct Canal SBT = {18, 0, 0};
    struct Canal Record = {19, 0, 0};
    struct Canal Bandeirantes = {20, 0, 0};
    struct Canal Cultura = {22, 0, 0};
    // acho que eu não preciso usar struct...
    // a cada segundo que eu passo desenvolvendo este código, mais eu percebo que ele não precisa da struct

    
    while (stop == 1){
        scanf("%d",&canal_digitado);
        if (canal_digitado != 0){
            scanf("%d", &n_espectadores);
            switch (canal_digitado){
                case 17:
                    Globo.telespectadores += n_espectadores;
                    break;
                case 18:
                    SBT.telespectadores += n_espectadores;
                    break;
                case 19:
                    Record.telespectadores += n_espectadores;
                    break;
                case 20:
                    Bandeirantes.telespectadores += n_espectadores;
                    break;
                case 22:
                    Cultura.telespectadores += n_espectadores;
                    break;
            }
            
        } else{
            break;
        }
    }

    return 0;
}