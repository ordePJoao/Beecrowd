#include <stdio.h>
int main(){
   
    int h=0,m=0,h2=0,m2=0, horas=0, minutos=0, h_minutos=0;
    scanf("%d %d %d %d", &h, &m, &h2, &m2);
   
//horas
     
      if (h == h2 && m == m2){
          printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
      }
     
      else{
          if(h2>h){
          horas = h2-h;
          }
   
         if(h>h2) {
           horas = (24+h2)-h;
         }
         
         h_minutos = horas*60;

//minutos

         if(m2>=m){
           minutos = m2-m;
         }
     
         if(m>m2) {
           h_minutos= ((h_minutos-60)+m2+60)-m; // -1h por conta da transferencia para os minutos | Aplicando =60min ao excedente
           minutos=0;
         }
       
        minutos = minutos + h_minutos; //Transformado tempo total em m
       
        horas = minutos/60; //Reeconvertendo os minutos para horas
        minutos = minutos%60; //Atualizando o restante em minutos
       
         
      printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", horas, minutos);
     
      }
   
return 0;}