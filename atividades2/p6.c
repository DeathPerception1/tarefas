// Autor: Lucas Frade Ferreira Moscardo

#include <stdio.h>


int main() {

    // DEFINIÇÃO DE STRUCTS
    struct Estatisticas {
    double porcentagemAnalisada;
    double prct_v;
    double prct_e;
    double prct_d;
    int gols_enfiados;
    int maior_n_gols_enfiados;
    int maior_n_gols_recebidos_D;

    };

    struct Estatisticas gerarEstatisticas(int t_solicitado, int t_lido, int matriz[][2]) {
    struct Estatisticas est;
    double v = 0, emp = 0, d = 0;
    int soma_enfiados = 0, soma_recebidos = 0;
    est.maior_n_gols_enfiados = -1;
    est.maior_n_gols_recebidos_D = -1;

    for (int i = 0; i < t_lido; i++) {
        int enfiados = matriz[i][0];
        int recebidos = matriz[i][1];

        soma_enfiados += enfiados;
        soma_recebidos += recebidos;

        if (enfiados > recebidos) { // ganhou
            v++;
            if (enfiados > est.maior_n_gols_enfiados) {
                est.maior_n_gols_enfiados = enfiados;
            }
        } else if (enfiados < recebidos) { // Derrota
            d++;
            if (recebidos > est.maior_n_gols_recebidos_D) {
                est.maior_n_gols_recebidos_D = recebidos;
            }
        } else { // Empate
            emp++;
        }
    }

    // Calcula e registra as porcentagens
    est.porcentagemAnalisada = ((double)t_lido / t_solicitado) * 100;
    if (t_lido > 0) {
        est.prct_v = ((double)v / t_lido) * 100;
        est.prct_e = ((double)emp / t_lido) * 100;
        est.prct_d = ((double)d / t_lido) * 100;
    } else {
        est.prct_v = est.prct_e = est.prct_d = 0;
    }

    est.gols_enfiados = soma_enfiados - soma_recebidos;   
    return est;
    }

    int totalPartidas;
    scanf("%d", &totalPartidas);

    int partidas[totalPartidas][2];
    int partidasRegistradas = 0;

    for(int i = 0; i < totalPartidas; i++){
        int golsFeitos, golsTomados;
        scanf("%d", &golsFeitos);
        if (golsFeitos == -1){
            break;
        } 

        scanf("%d", &golsTomados);

        partidas[i][0] = golsFeitos;
        partidas[i][1] = golsTomados;
        partidasRegistradas++;
    }

    // Struct pra armazenar as estatisicas 
    struct Estatisticas res = gerarEstatisticas(totalPartidas, partidasRegistradas, partidas);

    // Impressão dos resultados conforme a ordem solicitada
    printf("%lf\n", res.porcentagemAnalisada);
    printf("%lf\n", res.prct_v);
    printf("%lf\n", res.prct_e);
    printf("%lf\n", res.prct_d);
    printf("%d\n", res.gols_enfiados);

    if (res.maior_n_gols_recebidos_D == -1) {
        printf("Nao houve derrotas.\n");
    } else {
        printf("%d\n", res.maior_n_gols_recebidos_D);
    }

    if (res.maior_n_gols_enfiados == -1) {
        printf("Nao houve vitorias.\n");
    } else {
        printf("%d\n", res.maior_n_gols_enfiados);
    }

    return 0;
}