#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void linha_4 (int matriz [5][5])
{
    int vetor[5],numero = 4;

    for (int i=0; i < 5; i++)
        {
            vetor[i] = matriz[3][i];
        }
    printf("\n\n\nVETOR:\n\n\n");
    for(int i = 0; i < 5; i++ )
        {
            printf("%d ",vetor[i]);
        }

}

int main()
{
    srand(time(0));
    int matriz [5][5];

    for (int i = 0; i< 5;i++){
        for(int l = 0;l<5; l++)
            {
                matriz[i][l] = rand() % 100;
            }
    }

       for (int i = 0; i< 5;i++){
        for(int l = 0;l<5; l++)
            {
                printf("%d ", matriz[i][l]);
            }
        printf("\n");
    }

    linha_4(matriz);

}
