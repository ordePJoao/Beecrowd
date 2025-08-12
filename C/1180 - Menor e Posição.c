#include <stdio.h>

int main(){
    
    int indice;
    scanf("%d", &indice);
    
    int vetor[indice];
    int posicao=0, menor=0, temp=0;
    
    for(int i=0; i<indice; i++){
        scanf("%d", &vetor[i]);
        
        temp = vetor[i];
        
        if( i == 0){
            menor = vetor[i];
        }
        
        if(temp < menor){
            menor = temp;
            posicao = i;
        }
    }
    
    printf("Menor valor: %d\nPosicao: %d\n", menor, posicao);
    

return 0; }