/* File a13f2.c
 * -----------
 * To programma diabazei
 * tous kafedes, ypologizei ta resta kai
 * ta emfanizei se kermata tou eurw
 */

#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

int main(){
    int kafedes, kostos, resta;
    int duoE, ypoloipo, enaE, penhnta, eikosi, deka;

    printf("Dwse kafedes: ");
    kafedes = GetInteger();
    kostos = kafedes * 70;
    if (kostos <= 500) {
        resta = 500 - kostos;
        duoE = resta / 200;
        ypoloipo = resta % 200;
        enaE = ypoloipo / 100;
        ypoloipo = ypoloipo % 100;
        penhnta = ypoloipo / 50;
        ypoloipo = ypoloipo % 50;
        eikosi = ypoloipo / 20;
        ypoloipo = ypoloipo % 20;
        deka = ypoloipo / 10;
        ypoloipo = ypoloipo % 10;

        printf("Resta");
        printf("Kermata 2E: %d\n", duoE);
        printf("Kermata 1E: %d\n", enaE);
        printf("Kermata 50L: %d\n", penhnta);
        printf("Kermata 20L: %d\n", eikosi);
        printf("Kermata dekaL: %d\n", deka);
    }
    else {
        printf("Den ftanoun ta xrhmata gia tosous kafedes");
    }
    return 0;
}
