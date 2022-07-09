/* File a27f4.c
 * ------------
 * To programma dexetai enan arxiko kwdiko
 * kai dhmioyrgei enan teliko kwdiko
 */

#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

long encode(long N);
bool check(long EN);

int main(){
    long l_limit, up_limit, init_code;
    int i;
    string isValid;

    printf("Lower Limit: ");
    l_limit = GetLong();
    printf("Upper Limit: ");
    up_limit = GetLong();
    for (i=l_limit; i<=up_limit; i++){
         if (check(encode(i))){
            isValid = "yes";
        }
        else {
            isValid = "no";
        }
        printf("Code: %d Encoding: %ld isValid: %s\n", i, encode(i), isValid);

    }

}

long encode(long N){
     long final_code;

     final_code = N * 100 + (98 - (N*100) % 97) % 97;
     return final_code;
}

bool check(long EN){

    if (EN % 97 == 1){
        return TRUE;
    }
    return FALSE;
}
