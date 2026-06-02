// Autor: Lucas Frade Ferreira Moscardo
// desafio 6

// #include <stdio.h>

// int main(){

//     // vou separar a atividade em duas. Essa é a primeira, a parte lógica bruta
//     // vou iterar sobre total_jogos
//     int total_jogos = 0, i = 0, partidas_lidas = 0, gols_enfiados = 0, gols_enfiados_global = 0, gols_recebidos = 0, gols_recebidos_global = 0,
//     maior_qtd_gols_enfiados = 0, maior_qtd_gols_recebidos = 0;
//     // int v = 0; 
//     // int d = 0;
//     // int emp = 0; 
//     int v = 0, d = 0, emp = 0;
//     // Depois, para um número indeterminado de partidas a serem analisadas menor ou igual ao número 
//     // total de partidas dado, leia o resultado da partida, isto é, o número de gols enfiados e o 
//     // número de gols tomados.
    
//     scanf("%d", &total_jogos);

//     // O maior nu´mero de gols tomados em uma derrota nas partidas analisadas. Se n˜ao
//     // houver d, imprima a frase “Nao houve d.” sem acento e sem as aspas.
//     // – O maior nu´mero de gols enfiados em uma vit´oria nas partidas analisadas. Se n˜ao
//     // houver vit´orias, imprima a frase “Nao houve v.” sem acento e sem as aspas.

//     for(i=1; i <= total_jogos; i++){
//         scanf("%d", &gols_enfiados);
//         if (gols_enfiados == -1) break;
//         scanf("%d", &gols_recebidos);
//         if (gols_recebidos == -1) break;

//         partidas_lidas += 1;
//         gols_enfiados_global += gols_enfiados;
//         gols_recebidos_global += gols_recebidos;

//         if(gols_enfiados > gols_recebidos){ // vitoria
//             v += 1;
//             if(gols_enfiados > maior_qtd_gols_enfiados) { maior_qtd_gols_enfiados = gols_enfiados; }
//         } else if (gols_enfiados < gols_recebidos){ // derrota
//             d+=1;
//             if(gols_recebidos > maior_qtd_gols_recebidos) { maior_qtd_gols_recebidos = gols_recebidos; }
//         } else { emp+= 1; } // suponha
//     }
//     // ok, parte dois da atividade
//     double porcentagem_vitoria = 0, porcentagem_derrota = 0, porcentagem_empate = 0, porcentagem_lidas = 0, a = 0, b = 0, c = 0, d = 0;

//     porcentagem_lidas = ((double)partidas_lidas/total_jogos) * 100;
//     porcentagem_vitoria =  ((double)v/partidas_lidas) * 100;
//     porcentagem_derrota = ((double)d/partidas_lidas) * 100;
//     porcentagem_empate = ((double)emp/partidas_lidas) * 100;
    
//     int saldo_gols = 0;
//     saldo_gols = gols_enfiados_global - gols_recebidos_global;

//     printf("%lf\n", porcentagem_lidas);
//     printf("%lf\n", porcentagem_vitoria);
//     printf("%lf\n", porcentagem_empate);
//     printf("%lf\n", porcentagem_derrota);
//     printf("%d\n", saldo_gols);
//     if(gols_recebidos_global < 0){ // não me pergunte o pq, mas inverter o sinal de igual destes if faz eles funcionarem. Denovo, ñ me pergunte
//         printf("%d\n", maior_qtd_gols_recebidos);
//     } else printf("Nao houve d.\n");
//     if(gols_enfiados_global > 0) {
//         printf("%d\n", maior_qtd_gols_enfiados);
//     } else printf("Nao houve v.\n");    



//     return 0;
// }