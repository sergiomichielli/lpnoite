#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x[10];
    int i;
    //Percorrer o estado atual do vetor(imprimir)
    for(i=0; i<10; i++){
        printf("Valor x[%d] = %d \n", i, x[i]);
    }
    //Dar carga no vetor
    for(i= 0; i<10; i++){
        printf("Digite o valor da posicao %d \n", i+1);
        scanf("%d", &x[i]);
    }
    //Percorrer o estado atual do vetor(imprimir)
    for(i=0; i<10; i++){
        printf("Valor x[%d] = %d \n", i, x[i]);
    }
    return 0;
}
