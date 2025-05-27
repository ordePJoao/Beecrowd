#include <stdio.h>
int main() {

    double A=0, B=0, media=0;

    scanf("%lf", &A);
    while (A<0 || A>10) {
        A=0;
        scanf("%lf", &A);
    }

    scanf("%lf", &B);
    while (B<0 || B>10) {
        B=0;
        scanf("%lf", &B);
    }
    
media = ((A * 3.5) + (B * 7.5)) /11;
printf("MEDIA = %.5lf\n", media);

return 0;
}