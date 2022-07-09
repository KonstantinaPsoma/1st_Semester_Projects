/* File a20f3.c
 * ------------
 * To programma ypologizei kai emfanizei
 * thn max kai min hlikia
 */

#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

int main(){
    int age, min, max;

    printf("Dwse hlikia: ");
    age = GetInteger();
    min = age;
    max = age;
    while (age != -1){
        if (age > max) {
            max = age;
        }
        if (age < min){
            min = age;
        }
        printf("Dwse hlikia: ");
        age = GetInteger();
    }
    printf("H megaluterh hlikia einai %d\n", max);
    printf("H mikroterh hlikia einai %d\n", min);
    return 0;
}
