#include <stdio.h>
#include <stdlib.h>
#define T 5
int main()
{
    printf("Matriz Identidade \n");
    int m[T][T]={{0}};
    int i, j;
    for(i=0; i<T; i++){
        m[i][i] = 1;
    }
    for(i=0; i<T; i++){
        for(j=0; j<T; j++){
            printf("[%3d] ", m[i][j]);
        }
        printf("\n");
    }
    return 0;
}
