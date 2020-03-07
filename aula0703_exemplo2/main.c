#include <stdio.h>
#include <stdlib.h>
#define T 10
int main()
{
    int i;
    int v[T];
    for(i=0; i<T; i++){
        v[i] = 15;
    }
    for(i=0; i<T; i++) printf("v[%d]=%d\n", i, v[i]);

    return 0;
}
