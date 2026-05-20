#include <stdio.h>
#include <stdlib.h>

int q3(char *txt, char c, int caseSensitive){
    int contador = 0;
    
    for(int i = 0; txt[i]; i++){
        if(caseSensitive == !1){
            if(txt[i] == c){
                contador++;
            }
        } else {
            if(txt[i] == c || txt[i] == c - 32 || txt[i] == c + 32){
                contador++;
            }
        }
    }
    return contador;
}