#include <stdio.h>

int main() {
    int dias = 0, horas = 0, minutos = 0, segundos = 0, totalsegundos1 = 0, total = 0; 
    int dias2 = 0, horas2 = 0, minutos2 = 0, segundos2 = 0, totalsegundos2 = 0;


    scanf("Dia %d", &dias);
    scanf("%d : %d : %d", &horas, &minutos, &segundos);
    scanf("Dia %d", &dias2);
    scanf("%d : %d : %d", &horas2, &minutos2, &segundos2);

    // Converte tudo para segundos
    totalsegundos1 = (dias * 86400) + (horas * 3600) + (minutos * 60) + segundos;

    if (dias>dias2) {
        // Passagem de 30 dias
        totalsegundos2 = ((dias2 + 30) * 86400) + (horas2 * 3600) + (minutos2 * 60) + segundos2;
    } 
    
    else {
        totalsegundos2 = (dias2 * 86400) + (horas2 * 3600) + (minutos2 * 60) + segundos2;
    }

    total = totalsegundos2 - totalsegundos1;

    dias = total / 86400; total %= 86400;
    horas = total / 3600; total %= 3600;
    minutos = total / 60; total %= 60;
    segundos = total;

    printf("%d dia(s)\n", dias);
    printf("%d hora(s)\n", horas);
    printf("%d minuto(s)\n", minutos);
    printf("%d segundo(s)\n", segundos);

    return 0;
} 

// CODIGO COM A PASSAGEM DE 30 DIAS
