#include <stdio.h>
#include <string.h>

int main() {

    int i, n;
    scanf("%d", &n);

    int x[n]; //Numeros
    char resultado[n][15]; // Vetor. Cada string tem até 14 caracteres + \0

    for(i = 0; i < n; i++) { 
        scanf("%d", &x[i]);

        if(x[i] == 0) {
            strcpy(resultado[i], "NULL");
        }

        // PAR
        else if(x[i] % 2 == 0) {
            if(x[i] > 0) {
                strcpy(resultado[i], "EVEN POSITIVE"); // positivo
            } else {
                strcpy(resultado[i], "EVEN NEGATIVE"); // negativo
            }
        }

        // IMPAR
        else {
            if(x[i] > 0) {
                strcpy(resultado[i], "ODD POSITIVE"); // positivo
            } else {
                strcpy(resultado[i], "ODD NEGATIVE"); // negativo
            }
        }
    }

    for(i = 0; i < n; i++) {
        printf("%s\n", resultado[i]); // Exibe cada resultado armazenado
    }

    return 0; }