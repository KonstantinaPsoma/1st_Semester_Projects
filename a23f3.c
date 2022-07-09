/* File a23f3.c
 * -------------
 * To programma dexetai enan arithmo
 * elegxei an einai artios h perittos
 * kai emfanizei thn auxousa akolouthia me bhma 2
 */

#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

int main(){
    int number, i;

    printf("Enter number: ");
    number = GetInteger();
    if (number % 2 == 0){
        for (i = 0; i<=number; i+=2){
            printf("%d ", i);
        }
    }
    else if (number % 2 == 1){
         for (i = 1; i<=number; i+=2){
            printf("%d ", i);
         }
    }
    return 0;
}
