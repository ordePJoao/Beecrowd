#include <stdio.h>
int main(){
    
    double i, j; //Lembrar que o float/double podem ser imprecisos, por isso pode dar erro no código
    const double imprecisao = 1e-9; //evitar imprecisoes
    
    for(i=0; i<=(2 + imprecisao); i+=0.2){
        for(j=(1+i); j<=(3+i +imprecisao); j++){
            
            if(i<(0 + imprecisao) || ( i<(1 + imprecisao) && i>(0.9 + imprecisao) ) || ( i<(2 + imprecisao) && i> (1.9 + imprecisao) )){
                printf("I=%0.0lf J=%0.0lf\n", i,j);
            }

            else{
                printf("I=%0.1lf J=%0.1lf\n", i,j);
            }
        }
    }
}