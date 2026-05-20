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

int main(){
    char txt[100];
    char c;
    int caseSensitive;

    printf("Informe um texto:\n");
    fgets(txt, sizeof(txt), stdin);
    printf("Informe um caractere:\n");
    scanf("%c", &c);
    printf("Deseja considerar a caixa (0 para nao, 1 para sim)?\n");
    scanf("%d", &caseSensitive);

    int resultado = q3(txt, c, caseSensitive);
    printf("O caractere '%c' aparece %d vezes no texto.\n", c, resultado);

    return 0;
}