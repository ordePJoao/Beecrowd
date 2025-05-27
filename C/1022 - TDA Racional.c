#include <stdio.h>
#include <stdlib.h> // para abs()

// Calcula o MDC (máximo divisor comum) de dois números inteiros
// Usado para simplificar a fração
int mdc(int num, int den) {
    // Enquanto o resto da divisão não for zero
    while (den != 0) {
        int mantem_den = den;
        den = num % den;   // passa o resto da divisão
        num = mantem_den;    // o b antigo vira o novo a
    }
    return num; // quando b for 0, a é o MDC
} //OBS: Nao pode criar funcao dentro de outra

typedef struct { //Criando o agrupamento "Resultado" para divulgar todos os resultados no final
    int num_original;
    int den_original;
    int num_simplificado;
    int den_simplificado;
} Resultado; // "Pasta" de variaveis criada, nome "Resultado"
//typedef = Permite dar um nome mais fácil à struct

int main() {
    int N = 0;

    // Lê a quantidade de expressões a serem processadas
    scanf("%d", &N);
    Resultado resultados[10000]; // Vetor onde onde cada posição é uma struct do tipo "Resultado"

    // SEM VETOR "ANTES" | while (N--) { // Executa N vezes. A cada vez que roda, ele já subtrai 1 do N.
        for (int i = 0; i < N; i++) {
            int n1 = 0, d1 = 0, n2 = 0, d2 = 0;
            char op; // Ler caractere da operação (+ - * /)

        // Lê a operação entre frações (ex: 1 / 2 + 3 / 4)
        scanf("%d / %d %c %d / %d", &n1, &d1, &op, &n2, &d2);

        int num = 0, den = 0; // resultado (numerador e denominador)

        // Calcula o resultado da operação entre frações
        if (op == '+') {
            num = n1 * d2 + n2 * d1;
            den = d1 * d2;
        } else if (op == '-') {
            num = n1 * d2 - n2 * d1;
            den = d1 * d2;
        } else if (op == '*') {
            num = n1 * n2;
            den = d1 * d2;
        } else if (op == '/') {
            num = n1 * d2;
            den = n2 * d1;
        }

        // Simplificação da fração
        int divisor = mdc(abs(num), abs(den)); // abrindo uma variavel para o valor na funcao mdc
        int result_num = num / divisor; // simplifica o numerador
        int result_den = den / divisor; // simplifica o denominador

        // Preenche struct
        resultados[i].num_original = num; // Guarda o valor no vetor da struct Resultados".especifico"
        resultados[i].den_original = den;
        resultados[i].num_simplificado = num / divisor;
        resultados[i].den_simplificado = den / divisor;
   
    }


    // Mostra todos os resultados no final
    for (int i = 0; i < N; i++) {
        printf("%d/%d = %d/%d\n",
            resultados[i].num_original,
            resultados[i].den_original,
            resultados[i].num_simplificado,
            resultados[i].den_simplificado);
    }

    return 0; }