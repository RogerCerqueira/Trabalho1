#include <stdio.h>
#include <stdlib.h>

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

    int tamBusca = strLen(txtBusca);
    int qtdeDigitos  = 0;

    for (int i = 0; i < txtNum[10]; i++){
        if(txtNum[i] == txtBusca[0]){
            qtdeDigitos = 1;
            for(int j = 1; j < tamBusca; j++){
                if(txtNum[i])
            }
        }

    }


}