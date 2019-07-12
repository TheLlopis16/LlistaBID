//
// Created by Marcel on 12/7/2019.
//

#include "LlistaBID.h"

llistaBID LLISTABID_crea(){
    llistaBID l;
    l.cap = (Node*) malloc (sizeof(Node));
    if(l.cap == NULL){
        printf("ERROR\n");
    }else{
        l.ult = (Node*) malloc (sizeof(Node));
        if(l.ult == NULL){
            printf("ERROR\n");
            free(l.cap);
        }else{
            l.pdi = l.ult
            l.pri->seg = l.ult;
            l.ult->ant = l.cap;
            l.cap->ant = NULL;
            l.ult->seg = NULL;
        }
    }
    return l;
}

void LLISTABID_insereixdavant (llistaBID *l, int num){
    if(l->pdi == l->cap){
        printf("ERROR\n");
    }else{
        aux = (Node*)malloc(sizeof(Node));
        if(aux == NULL){
            printf("ERROR\n");
        }else{
            aux->enter=num;
            aux->seg = l->pdi;
            aux->ant = l->pdi->ant;
            l->pdi->ant = aux;
            aux->ant->seg = aux;
        }
    }
}

void LLISTABID_insereixdarrera (llistaBID *l, int num){
    Node*aux;
    if(l->pdi == l->ult){
        printf("ERROR\n");
    }else{
        aux=(Node*)malloc(sizeof(Node));
        if(aux==NULL){
            printf("Error");
        }else{
            aux->enter=num;
            aux->seg = l->pdi->seg;
            aux->ant = l->pdi;
            l->pdi->seg->ant = aux;
            l->pdi->seg = aux;
        }
    }
}

void LLISTABID_insereixOrdenat(LlistaBID * l, int num){
    Node * aux;
    aux = (Node *) malloc (sizeof(Node));
    if (aux != NULL){
        aux->enter = num;
        l->pdi = l->pri->seg;
        if(l->pri->seg == l->ult){
            aux->ant = l->pri;
            aux->seg = l->ult;
            l->pri->seg = aux;
            l->ult->ant = aux;
            l->pdi = l->pri->seg;
        }else{
            int sortir = 0;
            while (sortir == 0){
                if(l->pdi->enter > num && l->pdi->seg != l->ult){
                    l->pdi = l->pdi->seg;
                }else{
                    sortir = 1;
                }
            }
            aux->ant = l->pdi->ant;
            aux->seg = l->pdi;
            l->pdi->ant = aux;
            aux->ant->seg = aux;
        }
    }else{
        printf ("ERROR\n");
    }
}

void LLISTABID_destrueix(LlistaBID * l){
    Node * aux;
    while(l->pri != NULL){
        aux = l->pri;
        l->pri = l->pri->seg;
        free(aux);
    }
    l->ult = NULL;
    l->pdi = NULL;
}