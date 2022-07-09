#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

int main(){
    long kwdikos_a;
    double misthos_e, ebdomadiaia_a, amoibh_w;
    int wres_e;

    printf("Dwse ton kwdiko: ");
    kwdikos_a = GetLong();
    if(kwdikos_a >= 1000){
        printf("Dwse ton ethsio mistho: ");
        misthos_e = GetReal();
        ebdomadiaia_a = misthos_e / 52;
    }
    else {
        printf("Dwse tis wres ebdomadiaias ergasias: ");
        wres_e = GetInteger();
        printf("Dwse thn amoibh ana wra: ");
        amoibh_w = GetReal();
        ebdomadiaia_a = wres_e * amoibh_w;
        if (wres_e > 40){
            ebdomadiaia_a += (wres_e - 40) * (amoibh_w * 0.5);
        }
    }
    printf("H ebdomadiaia amoibh einai: %g\n", ebdomadiaia_a);
    return 0;
}
