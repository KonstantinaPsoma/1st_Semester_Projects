#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

int cube(int root);
int Sum_Cube(int number);
bool IsArmstrong(int number);

int main(){
    int i;

    for (i=1; i<=999; i++) {
        if ( IsArmstrong(i) ){
            printf("%d\n", i);
        }
    }
}

int cube(int root){
    int product;
    int i;

    product = 1;
    for (i=1; i<=3; i++){
        product = product * root;
    }
    return product;
}

int Sum_Cube(int number){
    int dig3, dig2, dig1;

    dig3 = number / 100;
    dig2 = (number % 100) / 10;
    dig1 = number % 10;
    return cube(dig1) + cube(dig2) + cube(dig3);
}

bool IsArmstrong(int number){
    return (number == Sum_Cube(number));
}
