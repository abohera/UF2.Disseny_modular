#include <stdio.h>

int validation(int num){
    for (int i = 0; i < TIMES; i++){
        if (num < MIN | num > MAX){
            printf("Error, Vuelve a introducir un numero entre 10 y 5000 incluidos: ");
            scanf("%d", &num);
        }
    }
}
