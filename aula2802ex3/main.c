#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 101;
    while(x < 400){
        printf("%d \n", x);
        x+= 101; // x = x + 101;
    }
    printf("Acabou\n");
    return 0;
}
