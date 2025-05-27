#include <stdio.h>
int main() {

int tempo=0, velomedia=0; 
float litros=0;

scanf("%d", &tempo);
scanf("%d", &velomedia);


litros = (tempo*velomedia)/12.0; // 12.0 para nao acontecer aquele erro de divisao "inteiro/inteiro = inteiro"

printf("%.3lf\n", litros);

return 0; }