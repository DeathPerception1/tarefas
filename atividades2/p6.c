// Autor: Lucas Frade Ferreira Moscardo

#include <stdio.h>

int main(){

    // vou separar a atividade em duas. Essa é a primeira, a parte lógica bruta
    // vou iterar sobre total_jogos
    int total_jogos = 0, i = 0, partidas_lidas = 0, gols_enfiados = 0, gols_enfiados_global = 0, gols_recebidos = 0, gols_recebidos_global = 0,
    maior_qtd_gols_enfiados = 0, maior_qtd_gols_recebidos = 0;
    // int vitorias = 0; 
    // int derrotas = 0;
    // int empates = 0; 
    int vitorias = 0, derrotas = 0, empates = 0;
    // Depois, para um número indeterminado de partidas a serem analisadas menor ou igual ao número 
    // total de partidas dado, leia o resultado da partida, isto é, o número de gols feitos e o 
    // número de gols tomados.
    
    scanf("%d", &total_jogos);

    // O maior nu´mero de gols tomados em uma derrota nas partidas analisadas. Se n˜ao
    // houver derrotas, imprima a frase “Nao houve derrotas.” sem acento e sem as aspas.
    // – O maior nu´mero de gols feitos em uma vit´oria nas partidas analisadas. Se n˜ao
    // houver vit´orias, imprima a frase “Nao houve vitorias.” sem acento e sem as aspas.

    for(i=1; i <= total_jogos; i++){
        scanf("%d", &gols_enfiados);
        if (gols_enfiados == -1) break;
        scanf("%d", &gols_recebidos);
        if (gols_recebidos == -1) break;

        partidas_lidas += 1;
        gols_enfiados_global += gols_enfiados;
        gols_recebidos_global += gols_recebidos;

        if(gols_enfiados > gols_recebidos){ // vitoria
            vitorias += 1;
            if(gols_enfiados > maior_qtd_gols_enfiados) { maior_qtd_gols_enfiados = gols_enfiados; }
        } else if (gols_enfiados < gols_recebidos){ // derrota
            derrotas+=1;
            if(gols_recebidos > maior_qtd_gols_recebidos) { maior_qtd_gols_recebidos = gols_recebidos; }
        } else { empates+= 1; } // suponha
    }
    // ok, parte dois da atividade
    double porcentagem_vitoria = 0, porcentagem_derrota = 0, porcentagem_empate = 0, porcentagem_lidas = 0, a = 0, b = 0, c = 0, d = 0;
    a = ((double)partidas_lidas/total_jogos);
    porcentagem_lidas = a * 100;
    b = ((double)vitorias/partidas_lidas);
    porcentagem_vitoria =  b * 100;
    c = ((double)derrotas/partidas_lidas);    
    porcentagem_derrota = c * 100;
    d = ((double)empates/partidas_lidas);
    porcentagem_empate = d * 100;
    
    int saldo_gols = 0;
    saldo_gols = gols_enfiados_global - gols_recebidos_global;

    printf("%lf\n", porcentagem_lidas);
    printf("%lf\n", porcentagem_vitoria);
    printf("%lf\n", porcentagem_empate);
    printf("%lf\n", porcentagem_derrota);
    printf("%d\n", saldo_gols);
    if(gols_recebidos_global < 0){ // não me pergunte o pq, mas inverter o sinal de igual destes if faz eles funcionarem. Denovo, ñ me pergunte
        printf("%d\n", maior_qtd_gols_recebidos);
    } else printf("Nao houve derrotas.\n");
    if(gols_enfiados_global > 0) {
        printf("%d\n", maior_qtd_gols_enfiados);
    } else printf("Nao houve vitorias.\n");    

    return 0;
}