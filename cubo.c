#include <stdio.h>

int main()
{
    long long int n, volume;
    float area_superficie;
    printf("Insira o ladinho do cubo");
    scanf("%lld",&n);

    area_superficie=6*n*n;
    volume=n*n*n;

    printf("O volume do cubinho é:lld% e a area da superficie é %.2f",volume,area_superficie);
    return 0;

}
