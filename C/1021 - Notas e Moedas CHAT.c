#include <stdio.h>

int main() {
    double valor;
    int valoremcent;

    // Vetores com os valores das notas e moedas (em centavos!)
    int notas[]  = {10000, 5000, 2000, 1000, 500, 200};
    int moedas[] = {100, 50, 25, 10, 5, 1};

    scanf("%lf", &valor);

    // Converter valor para centavos (com arredondamento)
    valoremcent = (int)(valor * 100 + 0.5);

    printf("NOTAS:\n");
    for (int i = 0; i < 6; i++) {
        int qtd = valoremcent / notas[i]; // Calcula quantas notas daquele valor cabem no valor atual
        printf("%d nota(s) de R$ %.2f\n", qtd, notas[i] / 100.0);
        valoremcent %= notas[i]; // Atualiza "valoremcent" com o que sobrou
    }

    printf("MOEDAS:\n");
    for (int i = 0; i < 6; i++) {
        int qtd = valoremcent / moedas[i];
        printf("%d moeda(s) de R$ %.2f\n", qtd, moedas[i] / 100.0);
        valoremcent %= moedas[i];
    }

    return 0;
}