#include <stdio.h>
int main()
{
	float a,b, soma, sub, mult, div;
	printf("Insira dois números");
	scanf("%f %f", &a, &b);

	soma=a+b;
	sub=a-b;
	mult=a*b;
	div=a/b;
	if (a==0 || b==0){
		printf("Divisao impossivel\n");
		printf("Soma=%.2f\n",soma);
        printf("Subtracao=%.2f\n",sub);
        printf("Multiplicacao=%.3f\n",mult);
}
	else if(a != 0 || b!=0) {

	printf("Soma=%.2f\n",soma);
	printf("Subtracao=%.2f\n",sub);
	printf("Multiplicacao=%.3f\n",mult);
	printf("Divisao=%.3f\n",div);
	}
	return 0;
}




