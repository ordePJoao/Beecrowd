#include <stdio.h>
int main(){

    int i, j;

    for(i=1; i<=9; i+=2){ //Inicializacao pode ser deixada em branco, se ja foi definida
        
        for(j=7 ; j>=5; j--){
            printf("I=%d J=%d\n", i, j);
        }

    }

return 0; }