#include <stdio.h>
#include <stdlib.h>
#define L 3
int main()
{
    //Matriz para representar 10 alunos
    char nome[L][51];
    char procurado[51];
    int i, j;
    for(i=0; i<L; i++){
        __fpurge(stdin); //fflush(stdin);
        printf("Digite o nome: \n");
        gets(nome[i]);
    }
    __fpurge(stdin);
    printf("Nome a ser procurado: \n");
    gets(procurado);

    for(i=0; i<L; i++){
        if(strcmp(procurado, nome[i])==0){
            printf("Nome encontrado na posicao %d \n", i);
        }
    }

    return 0;
}
