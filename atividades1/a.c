#include <stdio.h>

int main() {
    int fitas;
    double valor;

    scanf("%d %lf", &fitas, &valor);

    double alugadas = fitas / 3.0;
    double faturamento = alugadas * valor;
    double multas = (alugadas / 10.0) * (valor * 0.10);
    double final = fitas - (fitas * 0.02) + ((fitas * 0.02) / 10.0);

    printf("%.6lf\n", faturamento);
    printf("%.6lf\n", multas);
    printf("%.0lf\n", final);

    return 0;
}