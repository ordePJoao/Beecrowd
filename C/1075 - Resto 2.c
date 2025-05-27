#include <stdio.h>
int main(){

    int N=0, i=0;
    scanf("%d", &N);

    for(i; i<10000; i++){
        if(i%N==2){
        printf("%d\n", i);
    }
}

return 0; }