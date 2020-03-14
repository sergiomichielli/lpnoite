#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char a[] = "Caio";
    char b[] = "Ana Maria";
    int x = strcmp(a, b);
    printf("Valor de x:%d \n", x);
    return 0;
}
