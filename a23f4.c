/* File a23f4.c
 * -------------
 * To programma dexetai tis wres, ta lepta k ta deyterolepta
 * kai emfanizei an h wra einai egkyrh h oxi
 */


#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

bool Valid_Time(int hours, int minutes, int seconds);

int main(){
    int hours, minutes, seconds;

    printf("Dwse tis wres: ");
    hours = GetInteger();
    printf("Dwse ta lepta: ");
    minutes = GetInteger();
    printf("Dwse ta deuterolepta: ");
    seconds = GetInteger();
    if (Valid_Time(hours, minutes, seconds)){
        printf("WRA EGKYRH");
    }
    else {
        printf("WRA MH EGKYRH");
    }
    return 0;
}

bool Valid_Time(int hours, int minutes, int seconds){

     if ((hours>=0 && hours<24) && (minutes>=0 && minutes<60) && (seconds>=0 && seconds<60)){
        return TRUE;
     }
     return FALSE;
}
