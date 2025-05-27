#include <stdio.h>
int main(){

    int Ncasos=0, i;
    scanf("%d", &Ncasos);
    float x[Ncasos][4];  //Lembra que o vetor/matriz sempre conta o 0 | Concedendo o tamanho do vetor x

    for(i=0; i<Ncasos; i++){ //Nao e igual por que contabiliza o 0
        scanf("%f %f %f", &x[i][0], &x[i][1], &x[i][2]);
        x[i][3] = ( (x[i][0] *2) + (x[i][1]*3) + (x[i][2]*5) ) /10;
    }

    for(i=0; i<Ncasos; i++){
        printf("%.1f", x[i][3]);
    }


return 0; }