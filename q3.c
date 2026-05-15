#include <stdio.h>
#include <stdlib.h>

int main(){
    char txt[250];
    char letra;

    printf("Redija um texto:\n");
    fgets(txt, 250, stdin);

    printf("Infrome uma letre:\n");
    scanf("%c", &letra);

    int contador = 0;
    
    for(int i = 0; txt[i]; i++){
        if(txt[i] == letra){
            contador++;
        }
    }
    printf("%d", contador);

}