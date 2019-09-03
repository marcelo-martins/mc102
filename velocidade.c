#include <stdio.h>
#include<math.h>

int main()
{
    float velocidade,nova_velocidade;
    printf("Coloca a velocidade ai irmao");
    scanf("%f",&velocidade);

    nova_velocidade=velocidade/(3.6);

    if (velocidade>0)
        printf("A velocidade inserida é:%.2f m/s",nova_velocidade);
    else
        puts("Velocidade invalida");
    return 0;
}
