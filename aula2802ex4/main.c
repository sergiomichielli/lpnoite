#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=0;
    while(1){

        printf("%d\n", x++);
        if(x%2==0)continue;
        if(x>200){
            printf("Chega por hora \n");
            printf("%d foi o fim\n", x);
            break;
        }
    }
    return 0;
}
