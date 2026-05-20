#include <stdio.h>
#include <stdlib.h>

int q3(char *txt, char c);

int main(){
    char txt[250];
    char palavra[50];
    int posicoes[30];

    printf("Redija um texto:\n");
    fgets(txt, 250, stdin);

    printf("Informe a palavre:\n");
    fgets(palavra, 50, stdin);

    int tamPalavra = strlen(palavra);
    int qtdeLetras = 0;
    int posFinal = 0;
    int qtdOcorrencias = 0;
    
    for(int i = 0; i < strlen(txt); i++){
        if(txt[i]==palavra[0]){
            qtdeLetras = 1;
            for(int j = qtdeLetras ; j < tamPalavra; j++){
                if(txt[i + j] == palavra[j]){
                    qtdeLetras++;
                    posFinal = i + j;
                }else {
                    break;
                }
            } 
        }
        if(qtdeLetras == tamPalavra - 1){
            posicoes[posFinal - qtdeLetras] = posFinal;
            qtdOcorrencias++;
        }

    }
    return qtdOcorrencias;
}