#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Exemplo de um menu \n");
    int opc;
    do{
        //Executar o laço enquanto for difente de 9.
        system("cls"); //windows
        printf("1.. Cafe \n");
        printf("2.. Skol \n");
        printf("3.. Leite \n");
        printf("9.. Sair \n");
        scanf("%d", &opc);
        switch(opc){
            case 1:
                printf("Escolheu cafe \n");
                system("pause"); //windows
                break;
            case 2:
                printf("Beberrao \n");
                system("pause"); //windows
                break;
            case 3:
                printf("Escolheu leite \n");
                system("pause"); //windows
                break;
            case 9:
                printf("Fim \n");
                system("pause"); //windows
                break;
            default:
                printf("Olha direito no menu \n");
                system("pause"); //windows
        }
    }while(opc!=9);
    return 0;
}
