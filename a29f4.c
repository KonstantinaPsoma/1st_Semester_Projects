#include <stdio.h>
#include <math.h>
#include "genlib.h"
#include "simpio.h"

int gcd(int a , int b);
int phi(int x);

int main(){
    int x, i;

    printf("Enter x: ");
    x = GetInteger();
    for (i=1; i <= x; i++){
        printf("phi(%d) = %d\n", i, phi(i));
    }

}


int gcd(int a , int b){

    if(b == 0)
        return a;
    return gcd(b , a%b);
}

int phi(int x){
    int counter, i;

    counter = 0;
    for(i = 1; i <= x; i++){
        if (gcd(x, i) == 1)
            counter += 1;
    }
    return counter;
}
