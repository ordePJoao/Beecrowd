#include <stdio.h>

int main(){

    int x, y, temp=0, casos=1, soma=0, i=0, j=0;
    int memoria[casos][x+1]; //Criando matriz pra suportar os valores + soma

    do{

        scanf("%d %d", &x, &y);
        if(x==0 || y==0){
            break;
        }

        casos++; //Saber o numero de casos

        temp = y;
        if(x<y){
            temp = x;
            x=y;                /* Atribuindo o maior ao x */
            y=temp;
        }
    
        
        for(i=y; i<=x; i++, j++){ // Valores do menor para o maior
            

            memoria[casos][j] = i; //Armazenando valores
            soma += i; //Contando soma
        }

        memoria[casos][x+1] = soma; //Guardando resultado
        soma=0; 
    
    } while(1);
    
    int temp=casos;
    casos=1;

    for(j=0; j<temp; j++, casos++){
        printf("%d ", memoria[casos][j]);
        printf("Sum=%d", memoria[casos][j]);
    }
    
return 0;}