#include <stdio.h>
#include "llistaBID.h"

int main() {

    int opcio;
    int num;
    LlistaBID l = LLISTABID_crea();

    do{
        printf("1. Introduir numero\n");
        printf("2. Consultar pdi\n");
        printf("3. Avançar pdi\n");
        printf("4. Retrocedir pdi\n");
        printf("5. Mostrar tota la llista\n");
        printf("6. Sortir\n");
        scanf("\nOpcio: %d", &opcio);
    }while (opcio !=6);

    switch opcio{
        case 1:
            printf("\nNumero major a 0: ");
        scanf("%d", &num);
        printf("\n");
        LLISTABID_insereixOrdenat(&l, num);

        case 2:
            num = LLISTABID_consulta(l);
        printf("%d\n", num);

        case 3:
            LLISTABID_avanca(&l);

        case 4
            LLISTABID_retrocedeix(&l);

        case 5
            LLISTABIO_vesInici(&l);
        while(!LLISTABIO_fi(l)){
            num = LLISTABID_consulta(l);
            printf("%d\n", num);
            LLISTABID_avanca(&l);
        }
    }
    
    LLISTABID_destrueix(&l);
    return 0;
}