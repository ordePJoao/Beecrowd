#include <stdio.h>
int main(){

    int ncasos=0, nratos=0, ncoelhos=0, nsapos=0, total=0, temp=0, i; char animal[2];
    scanf("%d", &ncasos); 

    for(i=0; i<ncasos; i++){
        scanf("%d %s", &temp, animal);
        total += temp;

        if(strcmp(animal, "R") == 0) {
            nratos += temp;
        }
        
        else if(strcmp(animal, "C") == 0) {
            ncoelhos += temp;
        }

        else if(strcmp(animal, "S") == 0) {
           nsapos += temp;
        }
    }

    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\n", ncoelhos);
    printf("Total de ratos: %d\n", nratos);
    printf("Total de sapos: %d\n", nsapos);
    printf("Percentual de coelhos: %.2f %%\n", (ncoelhos*100.0)/total);
    printf("Percentual de ratos: %.2f %%\n", (nratos*100.0)/total);
    printf("Percentual de sapos: %.2f %%\n", (nsapos*100.0)/total);

return 0; }