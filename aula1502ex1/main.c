#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, quad;
    printf("Entre com a base \n");
    scanf("%d", &n);
    //if ternario
    quad = n > 0 ? n * n : (n * n) *-1;
    printf("Quadrado mantendo sinal: %d \n", quad);
    return 0;
}
