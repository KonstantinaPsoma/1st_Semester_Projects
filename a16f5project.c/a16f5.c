#include <stdio.h>
#include <stdlib.h>
#include "genlib.h"
#include "simpio.h"

#define SIZE 50

void populate(int a[]);
void printArr(int table[], int x);
int checkTable(int N, int a[], int index[]);

int main(){
    int a[SIZE], i, index[SIZE];
    int N, counter, x;

    x = SIZE;

    populate(a);
    printArr(a, x);
    printf("\n------------ \n");
    printf("Dwse enan arithmo apo to 0 mexri to 9: ");
    N = GetInteger();

    counter = checkTable(N, a, index);
    printf("\nO Arithmos %d emfanizetai %d fores.\n", N, counter);
    printf("Stis Theseis:\n");


    printArr(index, counter);
    printf("\n------------");

}

void populate(int a[]){
     int i;

     for(i=0; i<SIZE; i++){
        a[i] = rand() % 10;
     }
}

void printArr(int table[], int x){
     int i;

     for(i=0; i<x; i++){
        printf("%d ", table[i]);
     }
}

int checkTable(int N, int a[], int index[]){
    int i;
    int counter;

    counter = 0;
    for(i=0; i<SIZE; i++){
        if(N == a[i]){
            index[counter] = i;
            counter += 1;
        }
    }
    return counter;
}
