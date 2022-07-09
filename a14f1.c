/* To programma upologizei kai emfanizei
 * poses thermides xreiazetai kathimerina mia gunaika
 * h opoia kanei kathistikh zwh, BMR
 */

#include <stdio.h>
#include "simpio.h"
#include "genlib.h"

int main() {
    int varos, upsos, ilikia;
    double BMR;

    printf("Dwse varos se kila: ");
    varos = GetInteger();
    printf("Dwse upsos se cm: ");
    upsos = GetInteger();
    printf("Dwse ilikia se xronia: ");
    ilikia = GetInteger();
    BMR = 655 + (9.6 * varos) + (1.8 * upsos) - (4.7 * ilikia);
    printf("To BMR einai %g\n", BMR);
    return 0;
}
