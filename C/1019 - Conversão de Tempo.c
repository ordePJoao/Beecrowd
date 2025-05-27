#include <stdio.h>
int main() {
 int N;
 
 scanf("%d", &N);
 
 printf("%d:", N/3600); //horas
  N= N % 3600; // RESTO INTEIRO EX: 556 % 3600 = 556 "divisao = 0 | divide e calcula so inteiros"
// INT NAO CONSIDERA VALORES INTEIROS //
  
 printf("%d:", N/60); //minutos 

 printf("%d\n", N % 60); //segundos

 
return 0; } 