#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

#define AMNT 5

int main(){
    int numbers[AMNT];
    int numbers_new[AMNT];
    int i;

    for (i=0; i<AMNT; i++){
         printf("Enter number: ");
         numbers[i] = GetInteger();
    }
    numbers_new[0] = numbers[4];
    for(i=1; i<AMNT; i++){
        numbers_new[i] = numbers[i-1];
    }
    for(i=0; i<AMNT; i++){
        printf("%d ", numbers_new[i]);
    }
}

