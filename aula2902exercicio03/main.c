#include <stdio.h>
#include <stdlib.h>

int main()
{
    int qtd=0, n, i;
    for(i=0; i<10; i++){
        printf("Digite um numero \n");
        scanf("%d", &n);
        if(n % 2 ==0){
            qtd++;
        }
    }
    printf("Qtd total de pares: %d \n", qtd);
    return 0;
}
