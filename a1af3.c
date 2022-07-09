#include <stdio.h>
#include <math.h>
#include "genlib.h"
#include "simpio.h"

#define Arithmos_Aytok 80000
#define Rythmos 0.07
#define Orio 160000

int main(){
    long xronia, telikos_arithmos_aytokinhtwn;

    xronia = 0;
    telikos_arithmos_aytokinhtwn = Arithmos_Aytok;
    while (telikos_arithmos_aytokinhtwn <= Orio) {
        xronia = xronia + 1;
        telikos_arithmos_aytokinhtwn = ceil(telikos_arithmos_aytokinhtwn * (1 + Rythmos));
    }
    printf("%ld\n", xronia);
    printf("%ld\n", telikos_arithmos_aytokinhtwn);
}

