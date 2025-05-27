#include <stdio.h> 
int main(){
    
    int i=0, dentro=0, fora=0;
    scanf("%d", &i);
    
    int x[i]; //Declarar o vetor depois da captura do "i", para nao dar erro
    
    for(i;i>0; i--){
        scanf("%d", &x[i]);
            
            if(x[i]>=10 && x[i]<=20){
                dentro +=1;
            }
            
            else{
                fora +=1;
            }
    }
    
    printf("%d in\n%d out\n", dentro, fora);

return 0; }
