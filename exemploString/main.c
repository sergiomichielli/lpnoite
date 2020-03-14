#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char nome[31];
    printf("Digite um nome: \n");
    gets(nome);
    printf("Nome: %s \n", nome);
    //Jeito 1 de percorrer
    int i=0;
    while(nome[i]!='\0'){
        printf("%c\n", nome[i++]);
    }
    //Jeito For de percorrer
    for(i=0; i<strlen(nome); i++){
        printf("%c\n", nome[i]);
    }
    return 0;
}
