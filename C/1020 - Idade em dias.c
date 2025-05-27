#include <stdio.h>
int main() {
int I_dias;

scanf("%d", &I_dias);

printf("%d ano(s)\n", I_dias/365); // Ano
I_dias = I_dias % 365;

printf("%d mes(es)\n", I_dias/30); // Mes


printf("%d dia(s)\n", I_dias % 30); // Dias

return 0; }