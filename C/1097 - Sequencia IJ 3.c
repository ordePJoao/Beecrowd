#include <stdio.h>
int main(){

    int i, j, temp=5;

    for(i=1; i<=9; i+=2){ //Inicializacao pode ser deixada em branco, se ja foi definida
        
        for(j = (temp+2) ; j>=temp; j--){
            printf("I=%d J=%d\n", i, j);
        }

        temp+=2;
    }

return 0; }