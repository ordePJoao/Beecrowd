#include<stdio.h>
int main(){

double R=0, volume=0, pi=3.14159;

scanf("%lf", &R);

volume = (4.0/3)*pi*R*R*R; // (4/3.0) ou (4.0/3), Algumas linguagens
//assumem que o resultado da divisão entre dois inteiros é outro inteiro.

printf("VOLUME = %.3lf\n", volume);

return 0; }