//Programa feito por Marcelo Biagi Martins-RA183303

//Esse programa tem como objetivo realizar a conversão entre datas de quaisquer tipos de calendários e retornar um valor conforme o sistema desse calendario.

//Inclusão da biblioteca stdio.h


#include <stdio.h>


int main()

{

//Váriaveis inteiras
	int diadoacesso,mesdeacesso,anodeacesso,dias_totais;
	int N,M,X,X1,X2,X3,X4,X5,X6,X7,X8,X_base10,ano_novo,mes_novo,dia_novo;


//Leitura da data que Juliana entrou no site no formato dia/mes/ano
//Leitura de N,M e X,sendo N=numero de dias em um mes,M=numero de meses no ano,X=numero de dias restantes para o evento em base 6.

	scanf("%d/%d/%d %d %d %d",&diadoacesso,&mesdeacesso,&anodeacesso,&N,&M,&X);


//Conversão de X para a base 10
	X1=X/10000000;
	X2=(X%10000000)/1000000;
	X3=(X%1000000)/100000;

	X4=(X%100000)/10000;
	X5=(X%10000)/1000;
	X6=(X%1000)/100;

	X7=(X%100)/10;

	X8=X%10;
	X_base10=6*6*6*6*6*6*6*X1+6*6*6*6*6*6*X2+6*6*6*6*6*X3+6*6*6*6*X4+6*6*6*X5+6*6*X6+6*X7+X8;

//Calculo do novo dia,mes e ano que será quando X dias se passarem

//Utilizado benefício de truncar valores em contas com casas decimais em resultados de variáveis do tipo int. 
	dia_novo=(diadoacesso+X_base10)%N;
	mes_novo=((diadoacesso+X_base10)/N)+mesdeacesso;

	ano_novo=(((diadoacesso+X_base10)/N)/M)+anodeacesso;


//Data do evento no calendario do planeta analisado.
	printf("%d/%d/%d",dia_novo,mes_novo,ano_novo);


//system ("PAUSE")

	return 0;

}
