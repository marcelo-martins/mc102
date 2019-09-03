#include <stdio.h>

int main()
{
    float PI,raio,area;
    PI=3.14;
    printf("Insira o raio da circunf");
    scanf("%f",&raio);
    area=PI*raio*raio;

    if(raio>0)
        printf("A Area da circunferencia é:%.2f",area);
    else
        printf("Raio invalido");
    return 0;
}
