#include <stdio.h>
int main(){

    int N=0, result=0, i=1;
    scanf("%d", &N);

    for(i; i<=N; i++){
        if(i%2==0){
            result = i*i;
            printf("%d^2 = %d\n", i, result);
        }
    }

return 0; }