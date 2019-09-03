#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct arvore{
    int numero;
    struct arvore* dir;
    struct arvore* esq;

}Arv;

Arv* inserir(Arv* arv, Arv* novo){
    /*printf("entei\n");
    if(novo->numero<arv->numero){
        if(arv->esq==NULL){
            arv->esq=novo;
            novo->dir=NULL;
        }
        else if(arv->esq->numero<novo->numero){
            novo->esq=arv->esq;
            novo->dir=NULL;
            arv->esq=novo;
            printf("auiq\n");

        }
        else inserir(arv->esq, novo);
    }
    else if(novo->numero>arv->numero){
        if(arv->dir==NULL){
            arv->dir=novo;
            novo->esq=NULL;
        }
        else if(arv->dir->numero>novo->numero){
            novo->dir=arv->dir;
            novo->esq=NULL;
            arv->dir=novo;
        }
        else inserir(arv->dir, novo);
    }
    return arv;*/
    if (arv == NULL) return novo;
    if (arv->numero > novo->numero)
       arv->esq = inserir (arv->esq, novo);
    else
       arv->dir = inserir (arv->dir, novo);
    return arv;



}
void emordem(Arv* arv){
    if(arv!=NULL){
        emordem(arv->esq);
        printf("%d ", arv->numero);
        emordem(arv->dir);
    }
    return;
}
void preordem(Arv* arv){
    if(arv!=NULL){
        printf("%d ", arv->numero);
        preordem(arv->esq);
        preordem(arv->dir);
    }

}
void posordem(Arv* arv){
    if(arv!=NULL){
        posordem(arv->esq);
        posordem(arv->dir);
        printf("%d ", arv->numero);
    }
}
int main(){
    printf("hdsufsdhu\n");
    Arv* arv=NULL;
    char ordem[20];
    int numero;
    while(1){
        scanf(" %s", ordem);
        if(strcmp(ordem, "inserir")==0){
            scanf(" %d", &numero);
            Arv* novo= malloc(sizeof(Arv));
            if(novo!=NULL){
                novo->numero=numero;
                novo->esq=NULL; novo->dir=NULL;
                //if(arv==NULL) arv=novo;
                //else arv=inserir(arv, novo);
                arv=inserir(arv,novo);
                printf("prinaztro\n");
            }
            else printf("memoria insuficiente\n");
        }
        if(strcmp(ordem, "em-ordem")==0){
            emordem(arv);
            printf("\n");
        }
        if(strcmp(ordem, "pre-ordem")==0){
            preordem(arv);
            printf("\n");
        }
        if(strcmp(ordem, "pos-ordem")==0){
            posordem(arv);
            printf("\n");
        }

       if(strcmp(ordem, "terminar")==0){
            //libera;
            break;
        }
    }
    return 0;

}
