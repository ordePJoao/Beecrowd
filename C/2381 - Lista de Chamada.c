#include <stdio.h>
#include <string.h>


void Ordenador(int Ncasos, char Organiza[Ncasos][25]){
    int x,y, Vnome=Ncasos;
    char aux[25];
    for (x=0; x<Ncasos-1; x++){
        for (y=x+1; y<Ncasos; y++){
            Vnome = strcmp(Organiza[x], Organiza[y]); //strcmp compara duas strings  tamanho(tabela ASCII)
            if(Vnome > 0){ // se for maior, troca (Z > A)
                strcpy(aux, Organiza[x]); //strcpy copia uma string para outra
                strcpy(Organiza[x], Organiza[y]);
                strcpy(Organiza[y], aux);
        }   }
    }
}

int main(){
    int casos, ganhador;
    scanf("%d %d", &casos, &ganhador);
    getchar(); //limpar o buffer do \n que fica no final do scanf

    char nomes[casos][25];
    for(int i=0; i<casos; i++){
        fgets(nomes[i], 25, stdin);
        nomes[i][strcspn(nomes[i], "\n")] = '\0'; //remover o \n do final da string e subistitui por \0 (final da string)
    }

    Ordenador(casos, nomes);

    printf("%s\n", nomes[ganhador-1]); //ganhador-1 pq o vetor começa do 0

    return 0; }