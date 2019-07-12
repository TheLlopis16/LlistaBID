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