#include <stdio.h>

int main(){

double n, raio, area;

n= 3.14159;

scanf("%lf", &raio);

area = n*raio*raio;

printf("A=%.4lf\n", area); // %.4lf > O .4 delimita pra até 4 casas decimais

return 0;
}