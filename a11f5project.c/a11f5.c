#include <stdio.h>
#include <math.h>
#include "genlib.h"
#include "simpio.h"

#define CTS 10
#define S 3

int main(){
   double temper[CTS][S];
   double average[CTS];
   double devnat[CTS][S];
   double mdeviation[CTS];

   int i, j;
   double natavg;

   for(i=0; i<CTS; i++){
       for(j=0; j<S; j++){
          printf("Temp of City %d During %d slot: ",i, j);
          temper[i][j] = GetReal();
       }
   }

   natavg = 0;
   for(i=0; i<CTS; i++){
       for(j=0; j<S; j++){
            natavg += temper[i][j];
       }
   }
   natavg = natavg /(CTS*S);

   for(i=0; i<CTS; i++){
       average[i] = 0;
       for(j=0; j<S; j++){
          average[i] += temper[i][j];
       }
       average[i] = average[i] / S;
    }

    for(i=0; i<CTS; i++){
       for(j=0; j<S; j++){
            devnat[i][j] = fabs(natavg - temper[i][j]);
       }
    }

    for(i=0; i<CTS; i++){
        mdeviation[i] = devnat[i][0];
        for(j=1; j<S; j++){
            if(mdeviation[i] < devnat[i][j]){
                mdeviation[i] = devnat[i][j];
            }
        }
    }
   printf("%.1f\n", natavg);
   for(i=0; i<CTS; i++)
       printf("City %d %.1f %.1f\n", i, average[i], mdeviation[i]);
   return 0;
}
