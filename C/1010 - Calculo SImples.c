#include <stdio.h>
int main() {

int cod1=0,num1=0,cod2=0,num2=0;
float vlrunit1=0, vlrunit2=0, total=0;

scanf("%d %d %f %d %d %f", &cod1, &num1, &vlrunit1, &cod2, &num2, &vlrunit2);

total = (num1*vlrunit1) + (num2*vlrunit2);

printf("VALOR A PAGAR: R$ %.2lf\n", total);

return 0; }