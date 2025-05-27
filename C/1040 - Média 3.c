#include <stdio.h>
int main() {

float N1=0, N2=0, N3=0, N4=0, med=0, Nexame=0, medfinal=0;

scanf("%f %f %f %f", &N1, &N2, &N3, &N4);

med= ((N1*2) + (N2*3) + (N3*4) + (N4*1)) / 10;

  if (med>=7)
  {
    printf("Media: %.1f\nAluno aprovado.\n" , med);
  }
  
  else if (med>=5) {
    scanf("%f", &Nexame);

    medfinal = (med + Nexame) /2;

      if (medfinal>=5) {
        printf("Media: %.1f\nAluno em exame.\nNota do exame: %.1f\nAluno aprovado.\nMedia final: %.1f\n", med, Nexame, medfinal);
       }
      
    else{ 
        printf("Media: %.1f\nAluno em exame.\nNota do exame: %.1f\nAluno reprovado.\nMedia final: %.1f\n", med, Nexame, medfinal);
     }
  }

  else if (med<5) {
    printf ("Media: %.1f\nAluno reprovado.\n", med);
  }

return 0; }