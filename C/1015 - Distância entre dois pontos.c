#include <stdio.h>
#include <math.h>
int main() {

double x1=0,y1=0,x2=0,y2=0, result=0;

scanf("%lf", &x1);
scanf("%lf", &y1);
scanf("%lf", &x2);
scanf("%lf", &y2);

result = sqrt(pow(x2-x1,2) + pow(y2-y1,2)); // conta envolvendo raiz e potencia

printf("%.4lf\n", result);



return 0; }