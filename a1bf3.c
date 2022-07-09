#include <stdio.h>
#include <math.h>
#include "genlib.h"
#include "simpio.h"

int main(){
    long xronia, telikos_arithmos_aytokinhtwn;
    long Arithmos_Aytok, Orio;
    double Rythmos;

    printf("Dwse ton arxiko arithmo aytokinhtwn: ");
    Arithmos_Aytok = GetLong();
    printf("Dwse ton ethsio rythmo auxhshs: ");
    Rythmos = GetReal();
    printf("Dwse to orio: ");
    Orio = GetLong();
    xronia = 0;
    telikos_arithmos_aytokinhtwn = Arithmos_Aytok;
    while (telikos_arithmos_aytokinhtwn <= Orio) {
        xronia = xronia + 1;
        telikos_arithmos_aytokinhtwn = ceil(telikos_arithmos_aytokinhtwn * (1 + Rythmos));
    }
    printf("%ld\n", xronia);
    printf("%ld\n", telikos_arithmos_aytokinhtwn);
}
