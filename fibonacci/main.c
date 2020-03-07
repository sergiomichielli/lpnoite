#include <stdio.h>
#include <stdlib.h>
#define T 20

int main()
{
    int v[T] = {1,1};
    int i;
    for(i=2; i<T; i++){
        v[i] = v[i-1] + v[i-2];
    }
    for(i=0; i<T; i++){
        printf("[%4d] ", v[i]);
    }
    return 0;
}
