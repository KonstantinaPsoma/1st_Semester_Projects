#include <stdio.h>
#include <string.h>
#include "genlib.h"
#include "simpio.h"

typedef struct{
    int width;
    int height;
    int depth;
    int area;
    int volume;
} boxT;

boxT read_data(boxT box_elements);
void calc_area(boxT *box_elements);
void calc_volume(boxT *box_elements);

int main(){
    boxT box_elements;

    box_elements = read_data(box_elements);
    calc_area(&box_elements);
    calc_volume(&box_elements);
    printf("To emvadon tou koutiou einai %d cm2\n", box_elements.area);
    printf("O ogos tou koutiou einai %d cm3", box_elements.volume);

}

boxT read_data(boxT box_elements){

    printf("Dose to mikos tou koutiou se cm: ");
    box_elements.width = GetInteger();
    printf("Dose to ypsos tou koutiou se cm: ");
    box_elements.height = GetInteger();
    printf("Dose to vathos tou koutiou se cm: ");
    box_elements.depth = GetInteger();
    return box_elements;
}

void calc_area(boxT *box_elements){

    (*box_elements).area = 2 * (*box_elements).width * (*box_elements).height+2 * (*box_elements).width * (*box_elements).depth+2 * (*box_elements).height * (*box_elements).depth;
}

void calc_volume(boxT *box_elements){

    (*box_elements).volume = (*box_elements).width * (*box_elements).height * (*box_elements).depth;
}
