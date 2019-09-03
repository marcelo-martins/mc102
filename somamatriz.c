#include <stdio.h>
#include <stdlib.h>
#define LIN 4
#define COL 4

int main()
{
    int mat [LIN] [COL];
    int vet [LIN];
    int i, j;
    int soma = 0;

    for (i = 0; i < LIN; i++)
    {
    for (j = 0; j < COL; j++)
    {
        printf("Digite o valor da posicao %d, %d: \n", i, j);
        scanf ("%d", &mat [i] [j]);
}
}
    printf("\n\n\n");
    printf("*************  Soma dos valores de cada coluna  ******************* \n\n\n");
    for (j = 0; j < COL; j++)
{
    for (i = 0; i < LIN; i++)
{
    soma = soma + mat [i] [j];
}
    vet [j] = soma;
}
    for (i = 0; i < LIN; i++)
{
        printf("%d  ", vet[i]);
}

          printf("\n\n\n");



 system("pause");
 }
