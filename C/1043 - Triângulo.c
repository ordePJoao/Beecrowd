#include <stdio.h>
int main() {

    double A=0,B=0,C=0;
    scanf("%lf %lf %lf", &A, &B, &C);

    if ((A+B)<=C || (B+C)<=A || (A+C)<=B ){
        printf("Area = %.1lf\n", ( (A+B)*C ) /2 );
    }

    else {
        printf("Perimetro = %.1lf\n", A+B+C);
    }


return 0; }