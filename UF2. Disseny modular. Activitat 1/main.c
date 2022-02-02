#include <stdio.h>
#include "functions.h"

void main(){
    int num = 0;
    printf("Introduce un numero entre 10 y 5000 incluidos: ");
    scanf("%d", &num);
    validation(num);
    printf("El número que has introducido es: %d", num);
}