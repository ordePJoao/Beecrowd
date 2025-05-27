#include <stdio.h>
int main() {

char nome[10];
double fixo=0, ttlvendas=0, salario=0;

scanf("%s", nome);
scanf("%lf", &fixo);
scanf("%lf", &ttlvendas);

salario = fixo + (ttlvendas*15/100);

printf("TOTAL = R$ %.2lf\n", salario);

return 0; }