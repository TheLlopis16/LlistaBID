#include <stdio.h>
#include "llistaBID.h"

int main() {
    LlistaBID l = LLISTABID_crea();

    LLISTABID_destrueix(&l);
    return 0;
}