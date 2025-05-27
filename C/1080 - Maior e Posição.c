#include <stdio.h>
int main(){

    int N[100], maior=0, temp=0, i, j=0;

    for(i=0; i<7; i++){
        scanf("%d", &N[i]);
        temp = N[i];

        if(temp > maior){
            maior = temp;
            j=0;
            j = i+1;
        }
    }

    printf("%d\n%d", maior, j);

return 0; }