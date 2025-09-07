#include <stdio.h>
#include <string.h>

void Ordenador(int Ncasos, char Organiza[Ncasos][6]) {
    int x, y, Vnome, IdoMenor;
    char aux[6];

    for (x = 0; x < Ncasos - 1; x++) {
        IdoMenor = x;
        for (y = x + 1; y < Ncasos; y++) {
            Vnome = strcmp(Organiza[IdoMenor], Organiza[y]);
            if (Vnome > 0) { 
                IdoMenor = y;
            }
        }

        if (strcmp(Organiza[x], Organiza[IdoMenor]) != 0) { 
            strcpy(aux, Organiza[x]);
            strcpy(Organiza[x], Organiza[IdoMenor]);
            strcpy(Organiza[IdoMenor], aux);
        }
    }
}

int main() {
    int casos = 0;

    // loop continua até não ter mais nada para ler (EOF)
    while (scanf("%d", &casos) != EOF) { // fim da entrada (EOF)
        getchar(); // consome o \n depois do número

        char Vetor[casos][6]; // Vetor de códigos
        for (int i = 0; i < casos; i++) {
            fgets(Vetor[i], 6, stdin);
            Vetor[i][strcspn(Vetor[i], "\n")] = '\0'; // remove o \n
        }

        Ordenador(casos, Vetor);

        // imprime logo após cada caso
        for (int i = 0; i < casos; i++) {
            printf("%s\n", Vetor[i]);
        }
    }

return 0; }