#include <stdio.h>
int main() {

    int A=0,B=0,C=0;
    scanf("%d %d %d", &A, &B , &C);

    if (A<=B && B<=C){ // A<=B<=C Primeiro avalia A <= B, que retorna 0 (falso) ou 1 (verdadeiro) "nao tera o resultado esperado"

        printf("%d\n%d\n%d\n", A,B,C);
    }

    else if (A<=C && C<=B) {
        printf("%d\n%d\n%d\n", A,C,B);
    }

    else if (B<=A && A<=C) {
        printf("%d\n%d\n%d\n", B,A,C);
    }

    else if (B<=C && C<=A) {
        printf("%d\n%d\n%d\n", B,C,A);
    }

    else if (C<=A && A<=B) {
        printf("%d\n%d\n%d\n", C,A,B);
    }

    else if (C<=B && B<=A) {
        printf("%d\n%d\n%d\n", C,B,A);
    }
    
printf("\n%d\n%d\n%d\n", A,B,C);

return 0; }