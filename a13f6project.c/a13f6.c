#include <stdio.h>
#include <stdlib.h>
#include "genlib.h"
#include "simpio.h"

void decompose(long number, int *digits, float *average, int *max);

int main(){
    long number;
    int digits, max;
    float average;

    printf("Please insert non-negative number:");
    number = GetLong();
    decompose(number, &digits, &average, &max);
    printf("Digits: %d\n", digits);
    printf("Average: %.3f\n", average);
    printf("Max: %d\n", max);
}

void decompose(long number, int *digits, float *average, int *max){
    int dig;
    int rest, i;
    float sum;

    dig = number % 10;
    rest = number / 10;
    *max = dig;
    sum = dig;
    if(dig != 0){
        *digits = 1;
        while(rest != 0){
            dig = rest % 10;
            rest = rest / 10;
            sum += dig;
            *digits += 1;
            for(i = 1; i<= *digits; i++){
                if(dig > *max){
                *max = dig;
                }
            }
        }
    *average = sum / *digits;
    }
    else{
        *digits = 0;
        *average = 0;
    }
}
