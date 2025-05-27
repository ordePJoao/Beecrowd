#include <stdio.h>
int main(){

    double A=0,B=0,C=0, reserva=0;
    scanf ("%lf %lf %lf", &A, &B, &C);

// A maior lado
    if(B>A){
        reserva=A; A=B; B=reserva;
    }

    if(C>A){
        reserva=A; A=C; C=reserva; // NAO PODE ser Else If | Pensa bem Se B e C forem maior que A
    }

//Tipo de triangulo
    if(A>=(B+C)){
        printf("NAO FORMA TRIANGULO\n");
    }

    else{ //Evita de o codigo continuar a rodar atoa
        
        if((A*A) == ((B*B)+(C*C)) ){
            printf("TRIANGULO RETANGULO\n");
        }

        if((A*A) > ((B*B)+(C*C)) ){
            printf("TRIANGULO OBTUSANGULO\n");
        }

        if((A*A) < ((B*B)+(C*C)) ){
            printf("TRIANGULO ACUTANGULO\n");
        }

        if(A==B && B==C){
            printf("TRIANGULO EQUILATERO\n");
        }

        if(A==B && A!=C || A==C && A!=B || B==C && B!=A){
            printf("TRIANGULO ISOSCELES\n");
        }
    }

return 0; }