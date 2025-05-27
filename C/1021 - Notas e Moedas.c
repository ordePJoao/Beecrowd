#include <stdio.h>

int main() {
    double valor;
    int notas, moedas;
    int VlrEMCentavos;

    scanf("%lf", &valor);

    VlrEMCentavos = (int)(valor * 100 + 0.5);  // converte valor para centavos com arredondamento seguro | (int) (valor) converte "valor" para inteiro
    //FLOAT E DOUBLE: pode ocorrer 523 = 522.9999 ou 522.499999 | por isso + 0.5

    printf("NOTAS:\n");

    notas = VlrEMCentavos / 10000;
    printf("%d nota(s) de R$ 100.00\n", notas);
    VlrEMCentavos %= 10000; // %= Simplifica o VlrEMCentavos = VlrEMCentavos % 

    notas = VlrEMCentavos / 5000;
    printf("%d nota(s) de R$ 50.00\n", notas);
    VlrEMCentavos %= 5000;

    notas = VlrEMCentavos / 2000;
    printf("%d nota(s) de R$ 20.00\n", notas);
    VlrEMCentavos %= 2000;

    notas = VlrEMCentavos / 1000;
    printf("%d nota(s) de R$ 10.00\n", notas);
    VlrEMCentavos %= 1000;

    notas = VlrEMCentavos / 500;
    printf("%d nota(s) de R$ 5.00\n", notas);
    VlrEMCentavos %= 500;

    notas = VlrEMCentavos / 200;
    printf("%d nota(s) de R$ 2.00\n", notas);
    VlrEMCentavos %= 200;

    printf("MOEDAS:\n");

    moedas = VlrEMCentavos / 100;
    printf("%d moeda(s) de R$ 1.00\n", moedas);
    VlrEMCentavos %= 100;

    moedas = VlrEMCentavos / 50;
    printf("%d moeda(s) de R$ 0.50\n", moedas);
    VlrEMCentavos %= 50;

    moedas = VlrEMCentavos / 25;
    printf("%d moeda(s) de R$ 0.25\n", moedas);
    VlrEMCentavos %= 25;

    moedas = VlrEMCentavos / 10;
    printf("%d moeda(s) de R$ 0.10\n", moedas);
    VlrEMCentavos %= 10;

    moedas = VlrEMCentavos / 5;
    printf("%d moeda(s) de R$ 0.05\n", moedas);
    VlrEMCentavos %= 5;

    moedas = VlrEMCentavos / 1;
    printf("%d moeda(s) de R$ 0.01\n", moedas);

    return 0;
}