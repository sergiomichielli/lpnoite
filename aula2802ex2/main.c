#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2;
    do{
        printf("Digite o valor inicial e o valor final, respectivamente\n");
        scanf("%d%d", &n1, &n2);
    }while ((n1<0) || (n2<0) || (n1>n2));
    printf("Valores validados: %d e %d \n", n1,n2);
    return 0;
}
