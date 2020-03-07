#include <stdio.h>
#include <stdlib.h>
#define T 10
int main()
{
    int vetorA[T], vetorB[T], i;
    for(i=0; i<T; i++){
        printf("Digite o valor da posicao %d \n", i);
        scanf("%d", &vetorA[i]);
        if(i % 2 ==1){
            //posicao impar
            vetorB[i] = vetorA[i] + 5;
        }else{
            //posicao par
            vetorB[i] = vetorA[i] * 5;
        }
    }
    for(i=0; i<T; i++){
        printf("vetorA[%d] = %d <-> vetorB[%d] = %d\n", i, vetorA[i], i, vetorB[i]);
    }
    return 0;
}
