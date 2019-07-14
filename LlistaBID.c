//
// Created by Marcel on 12/7/2019.
//

#include <stdlib.h>
#include "LlistaBID.h"

llistaBID LLISTABID_crea(){
    llistaBID l;
    l.pri = (Node*) malloc (sizeof(Node));
    if(l.pri == NULL){
        printf("ERROR\n");
    }else{
        l.ult = (Node*) malloc (sizeof(Node));
        if(l.ult == NULL){
            printf("ERROR\n");
            free(l.pri);
        }else{
            l.pdi = l.ult;
            l.pri->seg = l.ult;
            l.ult->ant = l.pri;
            l.pri->ant = NULL;
            l.ult->seg = NULL;
        }
    }
    return l;
}

void LLISTABID_insereixdavant (llistaBID *l, int num){
    Node * aux;
    if(l->pdi == l->pri){
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

void LLISTABID_insereixOrdenat(llistaBID * l, int num){
    int trobat = 0;

    l->pdi = l->pri->seg;

    while (l->pdi->seg != NULL && !trobat){
        if(l->pdi->seg->enter <= num){
            l->pdi = l->pdi->seg;
        }else{
            trobat = 1;
        }
    }

    LLISTABID_insereixdavant(l,num);

}

    void LLISTABID_esborra(llistaBID * l){
    Node * aux;
    if (l->pdi == l->pri || l->pdi == l->ult){
        printf("ERROR\n");
    }else{
        aux = l->pdi;
        l->pdi->ant->seg = l->pdi->seg;
        l->pdi->seg->ant = l->pdi->ant;
        l->pdi = l->pdi->ant;
        free(aux);
    }
}

int LLISTABID_consulta(llistaBID l){
    int enter;
    if(l.pdi == l.pri || l.pdi == l.ult){
        printf("ERROR\n");
        enter = 0;
    }else{
        enter = l.pdi->enter;
    }
    return enter;
}

int LLISTABID_buida(llistaBID l){
    return l.pri == l.ult;
}

void LLISTABID_vesInici(llistaBID * l){
    l->pdi = l->pri->seg;
}

void LLISTABID_vesFinal(llistaBID * l){
    l->pdi = l->ult->ant;
}

void LLISTABID_avanca(llistaBID * l){
    if (l->pdi == l->ult){
        printf("ERROR, has arribat a la última casella\n");
    }else{
        l->pdi = l->pdi->seg;
    }
}

void LLISTABID_retrocedeix(llistaBID * l){
    if (l->pdi == l->pri){
        printf("ERROR, has arribat a la primera casella\n");
    }else{
        l->pdi = l->pdi->ant;
    }
}

int LLISTABID_inici(llistaBID l){
    return l.pdi == l.pri;
}

int LLISTABID_fi(llistaBID l){
    return l.pdi == l.ult;
}

void LLISTABID_destrueix(llistaBID * l){
    Node * aux;
    while(l->pri != NULL){
        aux = l->pri;
        l->pri = l->pri->seg;
        free(aux);
    }
    l->ult = NULL;
    l->pdi = NULL;
}