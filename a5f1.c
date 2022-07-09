/* File: a5f1.c
 * ---------------
 * To programma diabazei
 * tis wres ergasias, wres
 * thn wriaia antimisthia, wr_antim
 * kai to pososto twn krathsewn enos ergath, pososto
 * kai upologizei kai emfanizei
 * tis akatharistes apodoxes, akath_apod
 * tis krathseis, poso_krat
 * kai tis kathares apodoxes, kath_apod
 */

#include <stdio.h>
#include "simpio.h"
#include "genlib.h"

int main() {
    double pososto, akath_apod, poso_krat, kath_apod;
    int wres;
    long wr_antim;

    printf("Dwse ton arithmo twn wrwn: ");
    wres = GetInteger();
    printf("Dwse thn wriaia antimisthia: ");
    wr_antim = GetLong();
    printf("Dwse to pososto twn krathsewn: ");
    pososto = GetReal();
    kath_apod = wres * wr_antim;
    poso_krat = kath_apod * pososto;
    akath_apod = kath_apod + poso_krat;
    printf("Oi akatharistes apodoxes einai %g\n", akath_apod);
    printf("Oi krathseis einai %g\n", poso_krat);
    printf("Oi kathares apodoxes einai %g\n", kath_apod);
    return 0;
}
