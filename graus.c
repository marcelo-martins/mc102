#include <stdio.h>

int main()
{
    float celsius,fahrenheit,g_pra_f,f_pra_g;
    printf("Insira uma temperatura em graus Celsius e outra em Fahrenheit");
    scanf("%f%f",&celsius,&fahrenheit);

    f_pra_g=((fahrenheit-32)*5)/9;
    g_pra_f=((9*celsius)/5)+32;

    printf("A temperatura inserida em celsius foi:%f e sua correspondente em fahrenheit é:%.3f\n",celsius,g_pra_f);
    printf("Atemperatura inserida em fahrenheit foi %f e sua correspondente em celsius é %.3f\n",fahrenheit,f_pra_g);
    return 0;
}
