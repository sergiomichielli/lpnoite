#include <stdio.h>
#include <stdlib.h>
#define L 8
#define C 3
int main()
{
    int i, j;
    int ra[L];
    float matriz[L][C];
    //entrada de dados
    for(i=0; i<L; i++){
        printf("Digite o RA: \n");
        scanf("%d", &ra[i]);
        for(j=0; j<2; j++){
            printf("Digite a nota %d \n", j+1);
            scanf("%f", &matriz[i][j]);
        }
    }
    //Calculo da media
    for(i=0; i<L; i++){
        matriz[i][2] = (matriz[i][0] + matriz[i][1])/2;
    }
    //Exibir o ra dos alunos e suas medias
    for(i=0; i<L; i++){
        printf("Ra: %5d, media: %2.2f \n", ra[i], matriz[i][2]);
    }
    return 0;
}
