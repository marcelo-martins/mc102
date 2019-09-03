#include<stdio.h>
int main()
{
	int capacidade,i,fornecedores;
	char dolar;
	double preco_galao,preco_final;
	scanf("%d",&fornecedores);
	printf("%d\n",fornecedores);
	for(i=0;i<fornecedores;i++){
		double numero_galoes=0;
		double volume=19750.0;
		scanf(" %d %c%lf",&capacidade,&dolar,&preco_galao);
		numero_galoes=volume/capacidade;
		printf("%lf\n",numero_galoes);
		if((int)numero_galoes!=numero_galoes){
            numero_galoes++;
		}
		printf("%lf",numero_galoes);
		preco_final=preco_galao*(int)numero_galoes;
		printf("%d %c %f\n",capacidade,dolar,preco_galao);
		printf("%f\n",preco_final);
	}
	return 0;
}





//3
//5 $4.8
//1 $1.4
//2 $2.2
