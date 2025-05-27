#include <stdio.h>
#include <math.h>
int main() {

double A=0, B=0, C=0, Raiz1=0, Raiz2=0;
scanf("%lf %lf %lf" , &A, &B, &C);

Raiz1 = (-B + (sqrt(B*B - 4*A*C) )) / (2*A);
Raiz2 = (-B - (sqrt(B*B - 4*A*C) )) / (2*A);

  if (A==0 || (4*A*C) > (B*B))
  {
    printf("Impossivel calcular\n");
  }
  else{
    printf("R1 = %.5lf\nR2 = %.5lf\n", Raiz1,Raiz2);

  }

return 0; }