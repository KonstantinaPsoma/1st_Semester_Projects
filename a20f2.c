/* File a20f2.c
 * -------------
 * To programma diabazei ena tyxaio arithmo
 * apo to 1 ews to 7 k emfanizei
 * thn mera pou antistoixei se auton ton arithmo
 */

#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

int main() {
    int arithmos;

    printf("Dwse enan arithmo apo to 1 ews to 7: ");
    arithmos = GetInteger();
    if(arithmos == 1){
        printf("The day is Monday");
    }
    else if (arithmos == 2){
        printf("The day is Tuesday");
    }
    else if(arithmos == 3){
        printf("The day is Wednesday");
    }
    else if (arithmos == 4){
        printf("The day is Thursday");
    }
    else if (arithmos == 5){
        printf("The day is Friday");
    }
    else if (arithmos == 6){
        printf("The day is Saturday");
    }
    else if (arithmos == 7){
        printf("The day is Sunday");
    }
    else{
        printf ("ERROR");
    }
    return 0;
}
