#include <stdio.h>
#include <stdlib.h>
#include "genlib.h"
#include "simpio.h"

#define SIZE 100

void Elements(int x, int *counter, int numbers[]);
void MinMax_array(int counter, int *min_number, int *max_number, int numbers[]);


int main(){
    int numbers[SIZE];
    int counter, min_number, max_number;

    printf("Enter the elements of the array, one per line. \n");
    Elements(SIZE, &counter, numbers);
    MinMax_array(counter, &min_number, &max_number, numbers);
    printf("The range of values is %d-%d", min_number, max_number);
}

void Elements(int x, int *counter, int numbers[]){
     int i;

     printf("Use -1 to signal the end of the list.\n");
     for(i=0; i<x; i++){
        numbers[i] = 0;
     }
     i = 0;
     *counter = 0;
     do{
        i += 1;
        printf("? ");
        numbers[i-1] = GetInteger();
        *counter += 1;
     }while(i<x && numbers[i-1] != -1);
}


void MinMax_array(int counter, int *min_number, int *max_number, int numbers[]){
    int i;

    *max_number = numbers[0];
    *min_number = numbers[0];
    for(i = 1; i<counter-1; i++){
        if(numbers[i] > *max_number){
            *max_number = numbers[i];
        }
        if(numbers[i] < *min_number){
            *min_number = numbers[i];
        }
    }
}
