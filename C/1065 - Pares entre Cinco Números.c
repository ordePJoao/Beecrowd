#include <stdio.h>
int main(){

    int N[5], i=0, pares=0; // [5] - corresponde ao TAMANHO do vetor | NAO SE ESQUECA
    scanf("%d %d %d %d %d", &N[0], &N[1], &N[2], &N[3], &N[4]);

    for(i=0; i<5; i++){
        if(N[i]%2==0){
            pares += 1;
        }
    }

    printf("%d valores pares\n", pares);

return 0; }