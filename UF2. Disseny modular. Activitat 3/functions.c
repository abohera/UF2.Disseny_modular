#include <stdio.h>
#include "functions.h"

int conversion(int num, int num2){
    int bin = 0;
    int count = 0;
    int i = 1;  
    while(num){  
        count   = num % 2;  
        num   = num / 2;  
        bin   = bin + (count * i);  
        i = i * 10;
    }
    return bin;
}