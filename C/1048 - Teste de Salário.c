#include <stdio.h>
int main(){

    float salario=0, vlr_reajuste=0;
    int pct_reajuste=0;
    scanf("%f", &salario);
    
    if(salario<=400){
        pct_reajuste= 15;
        vlr_reajuste = (pct_reajuste/100.00) * salario;
        salario = salario + vlr_reajuste;
    }

    else if(salario>400.00 && salario<=800.00){
        pct_reajuste= 12;
        vlr_reajuste = (pct_reajuste/100.00) * salario;
        salario = salario + vlr_reajuste;
    }

    else if(salario>800.00 && salario<=1200.00 ){
        pct_reajuste= 10;
        vlr_reajuste = (pct_reajuste/100.00) * salario;
        salario = salario + vlr_reajuste;
    }

    else if(salario>1200.00 && salario<=2000.00){
        pct_reajuste= 7;
        vlr_reajuste = (pct_reajuste/100.00) * salario;
        salario = salario + vlr_reajuste;
    }

    else if(salario>2000.00){
        pct_reajuste= 4;
        vlr_reajuste = (pct_reajuste/100.00) * salario;
        salario = salario + vlr_reajuste;
    }

    //O caractere %, precisa usar %% | se nao compilador acha que é o começo de um formato, %d,%lf,%f
    printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %%\n", salario, vlr_reajuste, pct_reajuste); 

return 0; } 