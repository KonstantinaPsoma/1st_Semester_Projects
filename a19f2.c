/* File a19f2.c
 * -------------
 * To programma upologizei ta telh kukloforias
 * me bash tis ekpompes CO2
 */

#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

int main () {
    float telh_kukl;
    int grammaria;

    printf("Dwse grammaria CO2/khm: ");
    grammaria = GetInteger();
    if (grammaria > 140){
        telh_kukl = grammaria * 1.7;
    }
    else if ( grammaria > 120){
        telh_kukl = grammaria * 1.1;
    }
    else {
        telh_kukl = grammaria * 0.9;
    }
    printf("To poso plhrwmhs einai: %g\n", telh_kukl);
    return 0;
}
