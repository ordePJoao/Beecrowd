#include <stdio.h>
int main(){
    
    int x=0,i=0;
    scanf("%d", &x);

    for(i=x; i<=(x+11); i++){
        if(i%2==1){
            printf("%d\n", i);
        }
    }

return 0;}