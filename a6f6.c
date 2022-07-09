#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

#define N 5

void readData(int c, int Table[][c]);
void FindMean(int c, int numb_pointer, float *average_m, float *average_w, int Table[][c]);

int main(){
    int Data[4][N];
    float av_m, av_w;

    readData(N, Data);
    FindMean(N, 1, &av_m, &av_w, Data);
    printf("Mesos oros barous andrwn: %.1f\n", av_m);
    printf("Mesos oros barous gynaikwn: %.1f\n", av_w);
    FindMean(N, 2, &av_m, &av_w, Data);
    printf("\nMesos oros ypsous andrwn: %.1f\n", av_m);
    printf("Mesos oros ypsous gynaikwn: %.1f\n", av_w);
    FindMean(N, 3, &av_m, &av_w, Data);
    printf("\nMesos oros hlikias andrwn: %.1f\n", av_m);
    printf("Mesos oros hlikias gynaikwn: %.1f\n", av_w);
}

void readData(int c, int Table[][c]){
    int i;

    for(i=0; i<c; i++){
        printf("Dwse fylo: ");
        Table[0][i] = GetInteger();
        printf("Dwse baros: ");
        Table[1][i] = GetInteger();
        printf("Dwse ypsos: ");
        Table[2][i] = GetInteger();
        printf("Dwse ilikia: ");
        Table[3][i] = GetInteger();
        printf("-----\n");
    }
}

void FindMean(int c, int numb_pointer, float *average_m, float *average_w, int Table[][c]){
    int j;
    float counter1, counter2;
    int sum1, sum2;

    sum1 = 0;
    sum2 = 0;
    counter1 = 0;
    counter2 = 0;
    for(j=0; j<c; j++){
        if(Table[0][j] == 0){
            sum1 += Table[numb_pointer][j];
            counter1 += 1;
        }
        if (Table[0][j] == 1){
            sum2 += Table[numb_pointer][j];
            counter2 += 1;
        }
    }
    if(counter1 != 0){
       *average_m = sum1 / counter1;
    }
    if(counter2 != 0){
       *average_w = sum2 / counter2;
    }
}
