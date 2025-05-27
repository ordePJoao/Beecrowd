#include <stdio.h>
int main() {

    int A=0,B=0, tempo=0;
    scanf("%d %d", &A, &B);

    if(A==B){
        printf("O JOGO DUROU 24 HORA(S)\n");
    }

    else if(A>B){
        tempo = (B+24) - A; //Caulculando excende do outro dia "+24"
        printf("O JOGO DUROU %d HORA(S)\n", tempo);
    }

    else if(B>A){
        tempo = B - A;
        printf("O JOGO DUROU %d HORA(S)\n", tempo);
    }

return 0;}