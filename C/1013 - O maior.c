#include <stdio.h>
int main(){

int A=0,B=0,C=0, maiorAB=0, maiorABC=0;

scanf("%d", &A);
scanf("%d", &B);
scanf("%d", &C);

maiorAB = (A+B+ abs(A-B))/2; // abs() = Modulo da matematica "|-7| = 7"
maiorABC = (maiorAB+C+ abs(maiorAB-C))/2;

printf("%d eh o maior\n", maiorABC);

return 0; }