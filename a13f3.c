/* File a13f3.c
 * ------------
 * To programma ypologizei
 * to athroisma twn klasmatwn 1/N
 */

#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

int main(){
    int N, i;
    float Sum;

    printf("Dwse orio: ");
    N = GetInteger();
    Sum = 0;
    for(i=1; i<=N; i++){
        Sum = Sum + (1.0/i);
    }
    printf("To athroisma einai %.2f\n", Sum);
    return 0;
}
