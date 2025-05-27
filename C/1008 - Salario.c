#include <stdio.h>
int main() {

int nmrfunc=0, hrstraba=0;
float vlr_h=0, salario=0;

scanf("%d", &nmrfunc);
scanf("%d", &hrstraba);
scanf("%f", &vlr_h);

salario = hrstraba*vlr_h;

printf("NUMBER = %d\nSALARY = U$ %.2f\n", nmrfunc, salario);

return 0; }