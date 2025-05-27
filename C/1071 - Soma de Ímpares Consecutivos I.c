#include <stdio.h>
int main(){

    int x1=0,x2=0,soma=0, i=0;
    scanf("%d %d", &x1, &x2);

    if(x1==x2){
        soma = 0;
    }

    else if(x1>x2){
        for(i=(x2+1); i<x1; i++){ //Entre x2 ate x1 sem considerar x1 e x2 (x2+1) "x2= -3 __ i= -2"
            if(i%2 != 0){ // Qualquer resto diferente
            soma += i;
            }
        }
    }

    else if(x2>x1){
        for(i=(x1+1); i<x2; i++){ //Entre x1 ate x2 sem considerar x1 e x2
            if(i%2 != 0){
                soma += i;
                }
        }
    }

    printf("%d\n", soma);
    
return 0; }