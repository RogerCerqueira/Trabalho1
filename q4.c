#include <stdio.h>
#include <stdlib.h>

int main(){
    char txt[250];
    char palavra[50];

    printf("Redija um texto:\n");
    fgets(txt, 250, stdin);

    printf("Informe a palavre:\n");
    fgets(palavra, 50, stdin);

    int tamPalavra = strelen(palavra);
    int qtdeLetras = 0;

    for(int i = 0; txt[i]; i++){
        if(txt[i]==palavra[0]){
            qtdeLetras = 1;
            for (int j = 1; j < tamPalavra; j++){
                if(txt[i+j] != palavra[j]){
                    break;
                }
                qtdeLetras++;
                
                if(qtdeLetras == tamPalavra){
                    
                }
            } 
        }

    }
}