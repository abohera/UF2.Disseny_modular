#include <stdio.h>
#include "functions.h"

int conversion(int segundos){
    int dias = 0;
    int horas = 0;
    int minutos = 0;
    if (segundos > 59){
        minutos = segundos / MAX;
        segundos = segundos % MAX;
        if (minutos > 59){
            horas = minutos / MAX;
            minutos = minutos % MAX;
            if (horas > 23){
                dias = horas / 24; 
                horas = horas % 24;
            }
        }
    }
    printf("El número de segundos se corresponde con %d dias, %d horas, %d minutos y %d segundos", dias, horas, minutos, segundos);
}