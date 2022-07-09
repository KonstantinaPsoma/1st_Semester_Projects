#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

int max(int a, int b);
int gr(int a, int b, int c);

int main(){
    double y;
    int a, b, c;

    printf("Give a: ");
    a = GetInteger();
    printf("Give b: ");
    b = GetInteger();
    printf("Give c: ");
    c = GetInteger();
    y = (2 * max( a,  b)+3 * gr( a,  b,  c)) / 4.0;
    printf("%.2f", y);

}


int max(int a, int b){
    int maximum;

    maximum = a;
    if (b > maximum){
        maximum = b;
    }
    return maximum;
}

int gr(int a, int b, int c){
    int maximum;

    maximum = max( a, b);
    if (c > max( a,  b)){
        maximum = c;
    }
    return maximum;
}
