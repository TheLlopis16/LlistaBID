//
// Created by Marcel on 12/7/2019.
//

#ifndef LLISTABID_LLISTABID_H
#define LLISTABID_LLISTABID_H

//Operating System Includes
#include <stdio.h>
#include <string.h>

typedef struct n{
    int enter;
    struct n *ant;
    struct n *seg;
}Node;

typedef struct{
    Node *cap;
    Node *ult;
    Node *pdi;
}llistaBID;

llistaBID LLISTABID_crea();
void LLISTABID_insereixdavant (llistaBID *l, int num);
void LLISTABID_insereixdarrera (llistaBID *l, int num);
void LLISTABID_insereixOrdenat(llistaBID *l, int num);
int LLISTABID_consulta (llistaBID);
void LLISTABID_esborra (llistaBID *l);
void LLISTABID_avanca (llistaBID *l);
void LLISTABID_retrocedeix (llistaBID *l);
int LLISTABID_fi (llistaBID l);
int LLISTABID_inici (llistaBID l);
void LLISTABID_vesinici (llistaBID *l);
void LLISTABID_vesfinal (llistaBID *l);
int LLISTABID_buida (llistaBID l);
void LLISTABID_destrueix

#endif //LLISTABID_LLISTABID_H
