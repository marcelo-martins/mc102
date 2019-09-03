#include <stdio.h>

int main()
{
    float altura,base,area;
    printf("Insira a base a altura");
    scanf("%f%f",&altura,&base);

    area=(base*altura)/2;

    printf("A area do triangulo é:%.2f\n",area);
    return 0;


}
