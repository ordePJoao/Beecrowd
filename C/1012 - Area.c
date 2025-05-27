#include <stdio.h>
int main() {

double A=0,B=0,C=0, A_tri=0, A_cir=0, pi=3.14159, A_tra=0, A_qua=0, A_ret=0;

scanf("%lf", &A);
scanf("%lf", &B);
scanf("%lf", &C);

A_tri=(A*C)/2;
A_cir=pi*C*C;
A_tra= (A+B)*C/2;
A_qua= B*B;
A_ret=A*B;

printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n", A_tri, A_cir, A_tra, A_qua, A_ret);

return 0; }