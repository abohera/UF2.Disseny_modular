#include <stdio.h>

int validation(int num){
    for (int i = 0; i < 3; i++){
        if (num < 10 | num > 5000){
            printf("Error, Vuelve a introducir un numero entre 10 y 5000 incluidos: ");
            scanf("%d", &num);
        }
    }
}