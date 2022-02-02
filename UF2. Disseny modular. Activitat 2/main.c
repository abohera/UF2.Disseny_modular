#include <stdio.h>
#include "functions.h"

void main(){
    int segundos = 0;
    printf("Introduce los segundos: ");
    scanf("%d", &segundos);
    if (segundos < 0){
        printf("\nError, Debe indicar un número positivo");
        printf("\nIntroduzca los segundos de nuevo: ");
        scanf("%d", &segundos);
    }
    conversion(segundos);
}
