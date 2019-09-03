#include <stdio.h>

int main()
{
    int n,sum=0,resto;

    printf("Insira um numero");
    scanf("%d",&n);

    while(n != 0)
    {
        resto = n% 10;
        sum=sum+resto;
        n=n/10;
    }
    printf("Soma dos algarismos é:%i\n",sum);
    return 0;
}
