#include <stdio.h> 
#include <string.h> // para usar strcmp()

int main(){

    // o [] no char já cria espaço na memória
    char tipo[13], grupo[9], alimentacao[10];

    // Lê três palavras separadas, cada uma em uma linha |Beecrownd n le scanf(x,x,x)
    scanf("%s", tipo);
    scanf("%s", grupo);
    scanf("%s", alimentacao);

    // Comparação de STRING com == não funciona
    // Usar a função strcmp() <string.h>
    // strcmp(a, b) == 0 retorna que são iguais

    if(strcmp(tipo, "vertebrado") == 0) { 

        if(strcmp(grupo, "ave") == 0) {
            if(strcmp(alimentacao, "carnivoro") == 0) {
                printf("aguia\n");
            } 
            
            else {
                printf("pomba\n");
            }
        }
        else if(strcmp(grupo, "mamifero") == 0) {
            if(strcmp(alimentacao, "onivoro") == 0) {
                printf("homem\n");
            } 
            
            else {
                printf("vaca\n");
            }
        }
        
    } else { // Se for invertebrado

        if(strcmp(grupo, "inseto") == 0) {
            if(strcmp(alimentacao, "hematofago") == 0) {
                printf("pulga\n");
            } 
            
            else {
                printf("lagarta\n");
            }
        }
        else if(strcmp(grupo, "anelideo") == 0) {
            if(strcmp(alimentacao, "hematofago") == 0) { 
                printf("sanguessuga\n");
            } 
            
            else {
                printf("minhoca\n");
            }
        }
    }

    return 0; }