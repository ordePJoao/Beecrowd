#include <stdio.h> // 1064 - Positivos e Média
int main(){

    float N[6], media = 0;
    int i, soma = 0;
    scanf("%f %f %f %f %f %f", &N[0], &N[1], &N[2], &N[3], &N[4], &N[5]);
    
    for(i = 0; i < 6; i++){ // for(x,y,z) x = Variavel chefe, y = condicao, z = incremento
        //Qtd Positivos + Media
        if(N[i] > 0){
            soma += 1; // Conta quantos são positivos
            media = media + N[i]; // Soma os valores positivos
        }
    }
    
    media = media / soma; // Calcula a média dos positivos

    printf("%d valores positivos\n%.1f\n", soma, media);

    return 0;
}