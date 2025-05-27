#include <stdio.h>
int main(){

    int i=1;

    for(int j=60; j>=0; j = j - 5, i +=3){ //lembrar de atribuir o valor no j e no i | Inicializacao "pode ser deixada em branco"
        printf("I=%d J=%d\n", i,j);
    }

return 0 ; }