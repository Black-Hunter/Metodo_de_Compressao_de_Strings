#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *RLE(char *sequencia){
    int cont;
    int tam = strlen(sequencia);
    char *aux = calloc(tam , sizeof(char));
    char valor;
    char contchar[10];
    
   for(int i = 0; i < tam; i++){
       cont = 0;
       valor = sequencia[i];
       
       while(sequencia[i] == valor){
           cont++;
           i++;
       }
       i--;
       sprintf(contchar, "%d", cont);
       strcat(aux, contchar);
       char valor2[2];
       sprintf(valor2, "%c", valor);
       strcat(aux, valor2);
       
   }

    return aux;
}

int main(){
    char sequencia[50] = "AAAAAHHHFGGGGBBPEEECCCCCCDLLLLRR";
    char *vet = RLE(sequencia);
    int i = 0;
    while(vet[i] != '\0'){
        printf("%c", vet[i]);
        i++;
    }

    return 0;
}