#include <stdio.h>
#include "LlistaBID.h"

int main() {

    int opcio;
    int num;
    llistaBID l = LLISTABID_crea();

    do{
        printf("1. Introduir numero\n");
        printf("2. Consultar pdi\n");
        printf("3. Avançar pdi\n");
        printf("4. Retrocedir pdi\n");
        printf("5. Mostrar tota la llista\n");
        printf("6. Sortir\n");
        printf("\nOpcio: ")
        scanf("%d", &opcio);

        switch (opcio){
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

            case 4:
                LLISTABID_retrocedeix(&l);

            case 5:
                LLISTABID_vesInici(&l);
                while(!LLISTABID_fi(l)){
                    num = LLISTABID_consulta(l);
                    printf("%d\n", num);
                    LLISTABID_avanca(&l);
                }
        }

    } while (opcio != 6);

    LLISTABID_destrueix(&l);
    return 0;
}