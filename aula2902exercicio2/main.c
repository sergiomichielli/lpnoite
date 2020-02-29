#include <stdio.h>
#include <stdlib.h>

int main()
{
    int soma=0, n, cont=0, validos=0;
    do{
        do{
           cont++;
           printf("Digite o valor ou 0 para sair: \n");
           scanf("%d", &n);
        } while((n<0) || (n>20)); //validação 0..20
        soma +=n;
        validos++;
    }while(n!=0);
    printf("Somatoria final: %d \n", soma);
    printf("Total de numeros: %d \n", cont);
    printf("Total invalidos: %d \n", cont - validos);
    printf("Total de validos; %d \n", validos);
}
