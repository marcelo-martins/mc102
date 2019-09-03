#include <stdio.h>
int main()
{
    int mes,dia,anodenascimento,A,B,C=0,D,soma;
    scanf("%d/%d/%d",&dia,&mes,&anodenascimento);
    A=(anodenascimento)-1900;
    B=(anodenascimento-1900)/4;
    printf("%d %d\n",A,B);
    printf("%d/%d/%d\n",dia,mes,anodenascimento);
    if(((anodenascimento%4==0 && anodenascimento%100!=0) && (dia<=29 && mes==02)) || (anodenascimento%400==0 && dia==29 && mes==02)){
        B=B-1;
    }

    if(mes==1){
        C=0;
    }
    else if(mes==2){
        C=3;
    }
    else if(mes==3){
        C=3;
    }
    else if(mes==4){
        C=6;
    }
    else if(mes==5){
        C=1;
    }
    else if(mes==6){
        C=4;
    }
    else if(mes==7){
        C=6;
    }
    else if(mes==8){
        C=2;
    }
    else if(mes==9){
        C=5;
    }
    else if(mes==10){
        C=0;
    }
    else if(mes==11){
        C=3;
    }
    else if(mes==12){
        C=5;
    }
    printf("%d,sai do switch\n",C);
    printf("%d %d\n",A,B);


    D=dia-1;

    soma=A+B+C+D;
    dia=soma%7;
    printf("%d",dia);





    }

