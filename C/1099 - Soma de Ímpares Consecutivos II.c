#include <stdio.h>

int main(){

    int casos=0;
    scanf("%d", &casos);

    int x=0, y=0, N=0, N_valores[casos], i, j;

    for(j=0; j<casos; j++){

        scanf("%d %d", &x, &y);

        if(x > y){
            for(i=y; i<x; i++){ /* Contabilizando os impares no intervalo */
                if( i>y && (i%2!=0)){
                   N = N+i;
                }
            }
            N_valores[j] = N;
            N = 0;
        }

        else { 
            for(i=x; i<y; i++){
               if( i>x && (i%2!=0)){
                    N = N+i;
               }
            }
            N_valores[j] = N;
            N = 0;
        }

        
    }

    for(j=0; j<casos; j++){
        printf("%d\n", N_valores[j]);
    }


return 0; }