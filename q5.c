#include <stdio.h>
#include <string.h>


void inverter(int n){
    char num[10];
    sprintf(num, "%d", n);
    int tam = strlen(num);
    int zeroEsq = 0;
    for (int i = tam -1; i>=0; i--){
        if(num[i]!=0 || zeroEsq){
            printf("%c", num[i]);
            zeroEsq = 1;
        }
    }
    if(!zeroEsq){
        printf("0");
    }
}


int main(){
    int n;
    printf("informe um numero:\n");
    scanf("%d", &n);
    inverter(n);
    return n;
}