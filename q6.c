#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int q6(int num, int numBusca){
    char txtNum[10];
    sprintf(txtNum, "%d", num);
    char txtBusca[10];
    sprintf(txtBusca, "%d", numBusca);

    int tamBusca = strlen(txtBusca);
    int qtdeDigitos  = 0;
    int qtdOcorrencias = 0;

    for (int i = 0; i < strlen(txtNum); i++){
        if(txtNum[i] == txtBusca[0]){
            qtdeDigitos = 1;
            for(int j = 1; j < tamBusca; j++){
                if(txtNum[i + j] == txtBusca[j]){
                    qtdeDigitos++;
                }else {
                    break;
                }
            }
        }
        if(qtdeDigitos == tamBusca){
            qtdOcorrencias++;
            qtdeDigitos = 0;
        }
    }
    return qtdOcorrencias;
}




int main(){
    int num;
    int numBusca;

    printf("Informe um número:\n");
    scanf("%d", &num);
    printf("Informe o número de busca:\n");
    scanf("%d", &numBusca);

    char txtNum[10];
    sprintf(txtNum, "%d", num);
    char txtBusca[10];
    sprintf(txtBusca, "%d", numBusca);

    int tamBusca = strlen(txtBusca);
    int qtdeDigitos  = 0;
    int qtdOcorrencias = 0;

    for (int i = 0; i < strlen(txtNum); i++){
        if(txtNum[i] == txtBusca[0]){
            qtdeDigitos = 1;
            for(int j = 1; j < tamBusca; j++){
                if(txtNum[i + j] == txtBusca[j]){
                    qtdeDigitos++;
                }else {
                    break;
                }
            }
        }
        if(qtdeDigitos == tamBusca){
            qtdOcorrencias++;
            qtdeDigitos = 0;
        }
    }
}