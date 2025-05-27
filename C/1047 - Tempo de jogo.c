#include <stdio.h>

int main() {
    int h = 0, m = 0, h2 = 0, m2 = 0, inicial = 0, final = 0, duracaoMin = 0, horas = 0, minutos = 0;
    scanf("%d %d %d %d", &h, &m, &h2, &m2);

    // Transforma o horário inicial e final em minutos
    inicial = h * 60 + m;
    final = h2 * 60 + m2;

    if (inicial == final) {
        duracaoMin = 24 * 60; // 24 horas em minutos
    }
    else if (final > inicial) {
        duracaoMin = final - inicial;
    }
    // Se o horário final está no dia seguinte
    else {
        duracaoMin = (24 * 60 + final) - inicial; // Aplica ao excedente para retirar
    }

    horas = duracaoMin / 60;          // Reeconvertendo os minutos para horas
    minutos = duracaoMin % 60;        // Atualizando o restante em minutos

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", horas, minutos);

    return 0;
}
