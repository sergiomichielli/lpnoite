#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Digite dois valores \n");
    int a, b;
    scanf("%d%d", &a, &b);
    if(b){
        printf("Resultado: %f \n", (float)a/b);
    }else{
        printf("Nao se pode dividir por zero \n");
    }
    return 0;
}
