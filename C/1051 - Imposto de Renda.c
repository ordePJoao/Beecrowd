#include <stdio.h>

int main() {

    float salario=0, ate3000=0, ate4500=0, acm4500=0;
    scanf("%f", &salario);

    if (salario <= 2000.00) {
        printf("Isento\n");
    }
    
    else { 
        salario = salario - 2000.00; // Tirando a parte isenta

        // RETIRA 2000.00 da tabela de renda
        if (salario > 2500.00) {
            acm4500 = salario - 2500.00; // Descobrindo o valor excedente
            salario = salario - acm4500; // Retirando o valor excedente do salário
            acm4500 = acm4500 * 0.28; // Aplicando imposto ao excedente
        }

        if (salario > 1000.00) {
            ate4500 = salario - 1000.00;
            salario = salario - ate4500;
            ate4500 = ate4500 * 0.18;
        }

        if (salario > 0.00) {
            ate3000 = salario;
            ate3000 = ate3000 * 0.08;
        }

        printf("R$ %.2f\n", acm4500 + ate4500 + ate3000);
    }

    return 0; }