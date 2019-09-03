#include <stdio.h>

int main()
{
    int um,dois,tres,quatro,cinco;
    float media;
    printf("Insira cinco numeros");
    scanf("%d%d%d%d%d",&um,&dois,&tres,&quatro,&cinco);

    media=(um+dois+tres+quatro+cinco)/5;

    printf("A media aritmetica dos numeros é:%.1f",media);
    return 0;
}
