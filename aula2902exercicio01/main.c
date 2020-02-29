#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, r, pa=1;
    printf("Digite a razao: \n");
    scanf("%d", &r);
    for(i=1; i<=10; i++){
        printf("%d  ", pa);
        pa+= r;
    }
    return 0;
}
