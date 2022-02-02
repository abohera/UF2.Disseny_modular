#include <stdio.h>
#include "functions.h"

void main(){
    int num;
    int num2 = 0;
    printf("Introduce un mumero: ");  
    scanf("%d", &num);
    if (num < 0){
        printf("\nError, Debe indicar un número positivo");
        printf("\nIntroduzca un numero de nuevo: ");
        scanf("%d", &num);
    }
    printf("El resultado en binario es: %d", conversion(num, num2));  
}